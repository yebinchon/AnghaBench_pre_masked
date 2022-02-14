
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct iwl_priv {int mutex; int tst; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct nlattr**) ;
 int FUNC_4 (int *,struct nlattr**,void*,int) ;
 int FUNC_5 (struct ieee80211_hw*,struct nlattr**) ;
 int FUNC_6 (struct ieee80211_hw*,struct nlattr**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nlattr*) ;

int FUNC_10(struct ieee80211_hw *VAR_3, void *VAR_4, int VAR_5)
{
 struct nlattr *VAR_6[VAR_2];
 struct iwl_priv *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 VAR_8 = FUNC_4(&VAR_7->tst, VAR_6, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;


 FUNC_7(&VAR_7->mutex);
 switch (FUNC_9(VAR_6[VAR_1])) {
 case 128:
 case 145:
 case 144:
 case 143:
 case 147:
 case 142:
 case 135:
 case 130:
 case 136:
 case 139:
 case 134:
  VAR_8 = FUNC_3(&VAR_7->tst, VAR_6);
  break;

 case 140:
 case 133:
 case 146:
 case 132:
 case 138:
 case 141:
 case 131:
 case 137:
  FUNC_0(VAR_7, "testmode cmd to driver\n");
  VAR_8 = FUNC_5(VAR_3, VAR_6);
  break;

 case 129:
  FUNC_0(VAR_7, "testmode change uCode ownership\n");
  VAR_8 = FUNC_6(VAR_3, VAR_6);
  break;

 default:
  FUNC_1(VAR_7, "Unknown testmode command\n");
  VAR_8 = -VAR_0;
  break;
 }
 FUNC_8(&VAR_7->mutex);

 if (VAR_8)
  FUNC_1(VAR_7, "Test cmd failed result=%d\n", VAR_8);
 return VAR_8;
}
