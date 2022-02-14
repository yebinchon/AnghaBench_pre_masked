
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_priv*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct mwl8k_priv*) ;
 int FUNC_4 (struct mwl8k_priv*,char*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1, char *VAR_2,
          bool VAR_3)
{
 struct mwl8k_priv *VAR_4 = VAR_1->priv;
 int VAR_5;
 int VAR_6 = VAR_0;

retry:

 FUNC_1(VAR_4);


 VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_5(VAR_1->wiphy, "Firmware files not found\n");
  return VAR_5;
 }

 if (VAR_3)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  FUNC_5(VAR_1->wiphy, "Cannot start firmware\n");


 FUNC_3(VAR_4);

 if (VAR_5 && VAR_6) {



  VAR_6--;
  FUNC_5(VAR_1->wiphy, "Trying to reload the firmware again\n");
  FUNC_0(20);
  goto retry;
 }

 return VAR_5;
}
