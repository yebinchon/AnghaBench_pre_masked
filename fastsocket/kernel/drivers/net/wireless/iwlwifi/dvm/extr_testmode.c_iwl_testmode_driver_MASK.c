
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct iwl_trans {int dummy; } ;
struct iwl_priv {int ucode_loaded; unsigned char* eeprom_blob; int eeprom_blob_size; int tm_fixed_rate; size_t cur_ucode; TYPE_2__* fw; TYPE_1__* cfg; struct iwl_trans* trans; } ;
struct ieee80211_hw {int wiphy; } ;
struct fw_img {TYPE_3__* sec; } ;
struct TYPE_6__ {size_t len; } ;
struct TYPE_5__ {struct fw_img* img; } ;
struct TYPE_4__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 struct sk_buff* FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_priv*,int ) ;
 int FUNC_6 (struct iwl_priv*,int) ;
 int FUNC_7 (struct iwl_priv*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct sk_buff*,int ,int,unsigned char*) ;
 int FUNC_12 (struct sk_buff*,size_t,size_t) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_20, struct nlattr **VAR_21)
{
 struct iwl_priv *VAR_22 = FUNC_1(VAR_20);
 struct iwl_trans *VAR_23 = VAR_22->trans;
 struct sk_buff *VAR_24;
 unsigned char *VAR_25 = ((void*)0);
 int VAR_26 = 0, VAR_27 = 0;
 u32 VAR_28 = 0, VAR_29 = 0;
 const struct fw_img *VAR_30;

 switch (FUNC_10(VAR_21[VAR_6])) {
 case 133:
  VAR_25 = (unsigned char *)VAR_22->cfg->name;
  VAR_27 = FUNC_13(VAR_22->cfg->name);
  VAR_24 = FUNC_2(VAR_20->wiphy,
       VAR_27 + 20);
  if (!VAR_24) {
   FUNC_0(VAR_22, "Memory allocation fail\n");
   return -VAR_3;
  }
  if (FUNC_12(VAR_24, VAR_6,
    VAR_14) ||
      FUNC_11(VAR_24, VAR_12,
       VAR_27, VAR_25))
   goto nla_put_failure;
  VAR_26 = FUNC_3(VAR_24);
  if (VAR_26 < 0)
   FUNC_0(VAR_22, "Error sending msg : %d\n", VAR_26);
  break;

 case 130:
  VAR_26 = FUNC_5(VAR_22, VAR_15);
  if (VAR_26)
   FUNC_0(VAR_22, "Error loading init ucode: %d\n", VAR_26);
  break;

 case 135:
  FUNC_7(VAR_22);
  VAR_22->ucode_loaded = 0;
  FUNC_8(VAR_23);
  break;

 case 129:
  VAR_26 = FUNC_5(VAR_22, VAR_16);
  if (VAR_26) {
   FUNC_0(VAR_22,
    "Error loading runtime ucode: %d\n", VAR_26);
   break;
  }
  VAR_26 = FUNC_4(VAR_22);
  if (VAR_26)
   FUNC_0(VAR_22,
    "Error starting the device: %d\n", VAR_26);
  break;

 case 128:
  FUNC_6(VAR_22, 200);
  VAR_22->ucode_loaded = 0;
  FUNC_8(VAR_23);
  VAR_26 = FUNC_5(VAR_22, VAR_19);
  if (VAR_26) {
   FUNC_0(VAR_22,
    "Error loading WOWLAN ucode: %d\n", VAR_26);
   break;
  }
  VAR_26 = FUNC_4(VAR_22);
  if (VAR_26)
   FUNC_0(VAR_22,
    "Error starting the device: %d\n", VAR_26);
  break;

 case 132:
  if (VAR_22->eeprom_blob) {
   VAR_24 = FUNC_2(VAR_20->wiphy,
    VAR_22->eeprom_blob_size + 20);
   if (!VAR_24) {
    FUNC_0(VAR_22, "Memory allocation fail\n");
    return -VAR_3;
   }
   if (FUNC_12(VAR_24, VAR_6,
     VAR_13) ||
       FUNC_11(VAR_24, VAR_7,
        VAR_22->eeprom_blob_size,
        VAR_22->eeprom_blob))
    goto nla_put_failure;
   VAR_26 = FUNC_3(VAR_24);
   if (VAR_26 < 0)
    FUNC_0(VAR_22, "Error sending msg : %d\n",
     VAR_26);
  } else
   return -VAR_2;
  break;

 case 134:
  if (!VAR_21[VAR_8]) {
   FUNC_0(VAR_22, "Missing fixrate setting\n");
   return -VAR_4;
  }
  VAR_22->tm_fixed_rate = FUNC_10(VAR_21[VAR_8]);
  break;

 case 131:
  VAR_24 = FUNC_2(VAR_20->wiphy, 20 + 8);
  if (!VAR_24) {
   FUNC_0(VAR_22, "Memory allocation fail\n");
   return -VAR_3;
  }
  if (!VAR_22->ucode_loaded) {
   FUNC_0(VAR_22, "No uCode has not been loaded\n");
   return -VAR_0;
  } else {
   VAR_30 = &VAR_22->fw->img[VAR_22->cur_ucode];
   VAR_28 = VAR_30->sec[VAR_18].len;
   VAR_29 = VAR_30->sec[VAR_17].len;
  }
  if (FUNC_12(VAR_24, VAR_11, VAR_22->cur_ucode) ||
      FUNC_12(VAR_24, VAR_10, VAR_28) ||
      FUNC_12(VAR_24, VAR_9, VAR_29))
   goto nla_put_failure;
  VAR_26 = FUNC_3(VAR_24);
  if (VAR_26 < 0)
   FUNC_0(VAR_22, "Error sending msg : %d\n", VAR_26);
  break;

 default:
  FUNC_0(VAR_22, "Unknown testmode driver command ID\n");
  return -VAR_5;
 }
 return VAR_26;

nla_put_failure:
 FUNC_9(VAR_24);
 return -VAR_1;
}
