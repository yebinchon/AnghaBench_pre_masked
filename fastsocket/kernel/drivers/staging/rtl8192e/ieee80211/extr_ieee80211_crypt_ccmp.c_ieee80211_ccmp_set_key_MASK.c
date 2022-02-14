
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee80211_ccmp_data {int key_idx; int key_set; int key; struct crypto_tfm* tfm; void** rx_pn; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct ieee80211_ccmp_data*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int VAR_2, u8 *VAR_3, void *VAR_4)
{
 struct ieee80211_ccmp_data *VAR_5 = VAR_4;
 int VAR_6;
 struct crypto_tfm *VAR_7 = VAR_5->tfm;

 VAR_6 = VAR_5->key_idx;
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->key_idx = VAR_6;
 VAR_5->tfm = VAR_7;
 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_5->key, VAR_1, VAR_0);
  VAR_5->key_set = 1;
  if (VAR_3) {
   VAR_5->rx_pn[0] = VAR_3[5];
   VAR_5->rx_pn[1] = VAR_3[4];
   VAR_5->rx_pn[2] = VAR_3[3];
   VAR_5->rx_pn[3] = VAR_3[2];
   VAR_5->rx_pn[4] = VAR_3[1];
   VAR_5->rx_pn[5] = VAR_3[0];
  }
  FUNC_0((void*)VAR_5->tfm, VAR_5->key, VAR_0);
 } else if (VAR_2 == 0)
  VAR_5->key_set = 0;
 else
  return -1;

 return 0;
}
