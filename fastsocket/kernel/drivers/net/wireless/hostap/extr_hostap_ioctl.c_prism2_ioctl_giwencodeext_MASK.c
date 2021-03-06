
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct lib80211_crypt_data {int priv; TYPE_3__* ops; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct TYPE_5__ {int * sa_data; } ;
struct iw_encode_ext {scalar_t__ alg; int ext_flags; scalar_t__ key_len; int tx_seq; int key; TYPE_1__ addr; } ;
struct hostap_interface {TYPE_4__* local; } ;
struct TYPE_6__ {int tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct TYPE_8__ {int ap; TYPE_2__ crypt_info; } ;
typedef TYPE_4__ local_info_t ;
struct TYPE_7__ {scalar_t__ (* get_key ) (int ,int,int ,int ) ;int name; } ;


 int EINVAL ;
 scalar_t__ IW_ENCODE_ALG_CCMP ;
 scalar_t__ IW_ENCODE_ALG_NONE ;
 scalar_t__ IW_ENCODE_ALG_TKIP ;
 scalar_t__ IW_ENCODE_ALG_WEP ;
 int IW_ENCODE_DISABLED ;
 int IW_ENCODE_EXT_TX_SEQ_VALID ;
 int IW_ENCODE_INDEX ;
 int WEP_KEYS ;
 void* ap_crypt_get_ptrs (int ,int *,int ,struct lib80211_crypt_data***) ;
 int hostap_handle_sta_release (void*) ;
 scalar_t__ is_broadcast_ether_addr (int *) ;
 int memset (struct iw_encode_ext*,int ,int) ;
 struct hostap_interface* netdev_priv (struct net_device*) ;
 scalar_t__ strcmp (int ,char*) ;
 scalar_t__ stub1 (int ,int,int ,int ) ;

__attribute__((used)) static int prism2_ioctl_giwencodeext(struct net_device *dev,
         struct iw_request_info *info,
         struct iw_point *erq, char *extra)
{
 struct hostap_interface *iface = netdev_priv(dev);
 local_info_t *local = iface->local;
 struct lib80211_crypt_data **crypt;
 void *sta_ptr;
 int max_key_len, i;
 struct iw_encode_ext *ext = (struct iw_encode_ext *) extra;
 u8 *addr;

 max_key_len = erq->length - sizeof(*ext);
 if (max_key_len < 0)
  return -EINVAL;

 i = erq->flags & IW_ENCODE_INDEX;
 if (i < 1 || i > WEP_KEYS)
  i = local->crypt_info.tx_keyidx;
 else
  i--;

 addr = ext->addr.sa_data;
 if (is_broadcast_ether_addr(addr)) {
  sta_ptr = ((void*)0);
  crypt = &local->crypt_info.crypt[i];
 } else {
  i = 0;
  sta_ptr = ap_crypt_get_ptrs(local->ap, addr, 0, &crypt);
  if (sta_ptr == ((void*)0))
   return -EINVAL;
 }
 erq->flags = i + 1;
 memset(ext, 0, sizeof(*ext));

 if (*crypt == ((void*)0) || (*crypt)->ops == ((void*)0)) {
  ext->alg = IW_ENCODE_ALG_NONE;
  ext->key_len = 0;
  erq->flags |= IW_ENCODE_DISABLED;
 } else {
  if (strcmp((*crypt)->ops->name, "WEP") == 0)
   ext->alg = IW_ENCODE_ALG_WEP;
  else if (strcmp((*crypt)->ops->name, "TKIP") == 0)
   ext->alg = IW_ENCODE_ALG_TKIP;
  else if (strcmp((*crypt)->ops->name, "CCMP") == 0)
   ext->alg = IW_ENCODE_ALG_CCMP;
  else
   return -EINVAL;

  if ((*crypt)->ops->get_key) {
   ext->key_len =
    (*crypt)->ops->get_key(ext->key,
             max_key_len,
             ext->tx_seq,
             (*crypt)->priv);
   if (ext->key_len &&
       (ext->alg == IW_ENCODE_ALG_TKIP ||
        ext->alg == IW_ENCODE_ALG_CCMP))
    ext->ext_flags |= IW_ENCODE_EXT_TX_SEQ_VALID;
  }
 }

 if (sta_ptr)
  hostap_handle_sta_release(sta_ptr);

 return 0;
}
