
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct libipw_hdr_3addr {int addr2; int frame_ctl; } ;
struct TYPE_4__ {int rx_discards_undecryptable; } ;
struct libipw_device {TYPE_2__ ieee_stats; } ;
struct lib80211_crypt_data {int refcnt; int priv; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* decrypt_mpdu ) (struct sk_buff*,int,int ) ;} ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct libipw_device *VAR_0, struct sk_buff *VAR_1,
      struct lib80211_crypt_data *VAR_2)
{
 struct libipw_hdr_3addr *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0) || VAR_2->ops->decrypt_mpdu == ((void*)0))
  return 0;

 VAR_3 = (struct libipw_hdr_3addr *)VAR_1->data;
 VAR_5 = FUNC_4(FUNC_3(VAR_3->frame_ctl));

 FUNC_2(&VAR_2->refcnt);
 VAR_4 = VAR_2->ops->decrypt_mpdu(VAR_1, VAR_5, VAR_2->priv);
 FUNC_1(&VAR_2->refcnt);
 if (VAR_4 < 0) {
  FUNC_0("decryption failed (SA=%pM) res=%d\n",
         VAR_3->addr2, VAR_4);
  if (VAR_4 == -2)
   FUNC_0("Decryption failed ICV "
          "mismatch (key %d)\n",
          VAR_1->data[VAR_5 + 3] >> 6);
  VAR_0->ieee_stats.rx_discards_undecryptable++;
  return -1;
 }

 return VAR_4;
}
