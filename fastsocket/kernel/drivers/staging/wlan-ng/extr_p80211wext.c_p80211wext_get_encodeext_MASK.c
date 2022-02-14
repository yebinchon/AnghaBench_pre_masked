
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wep_keys; scalar_t__* wep_keylens; } ;
typedef TYPE_1__ wlandevice_t ;
struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {TYPE_1__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {scalar_t__ key_len; int key; scalar_t__ alg; int ext_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct iw_encode_ext*,int ,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 wlandevice_t *VAR_9 = VAR_5->ml_priv;
 struct iw_encode_ext *VAR_10 = (struct iw_encode_ext *)VAR_8;

 struct iw_point *VAR_11 = &VAR_7->encoding;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 FUNC_2("get_encode_ext flags[%d] alg[%d] keylen[%d]\n",
   VAR_10->ext_flags, (int)VAR_10->alg, (int)VAR_10->key_len);

 VAR_13 = VAR_11->length - sizeof(*VAR_10);
 if (VAR_13 <= 0) {
  FUNC_2("get_encodeext max_len [%d] invalid\n", VAR_13);
  VAR_12 = -VAR_0;
  goto exit;
 }
 VAR_14 = VAR_11->flags & VAR_3;

 FUNC_2("get_encode_ext index [%d]\n", VAR_14);

 if (VAR_14) {
  if (VAR_14 < 1 || VAR_14 > VAR_4) {
   FUNC_2("get_encode_ext invalid key index [%d]\n",
     VAR_14);
   VAR_12 = -VAR_0;
   goto exit;
  }
  VAR_14--;
 } else {


 }

 VAR_11->flags = VAR_14 + 1;
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->alg = VAR_1;
 VAR_10->key_len = VAR_9->wep_keylens[VAR_14];
 FUNC_0(VAR_10->key, VAR_9->wep_keys[VAR_14], VAR_10->key_len);

 VAR_11->flags |= VAR_2;
exit:
 return VAR_12;
}
