
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_fw_version {int minor; int major; } ;
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct ath9k_htc_priv {int fw_version_major; int fw_version_minor; int dev; struct ieee80211_hw* hw; } ;
typedef int cmd_rsp ;
struct TYPE_2__ {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct wmi_fw_version*,int ,int) ;
 int FUNC_5 (int ,int,char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct ath9k_htc_priv *VAR_4)
{
 struct ieee80211_hw *VAR_5 = VAR_4->hw;
 struct wmi_fw_version VAR_6;
 int VAR_7;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 FUNC_0(VAR_3);
 if (VAR_7)
  return -VAR_0;

 VAR_4->fw_version_major = FUNC_1(VAR_6.major);
 VAR_4->fw_version_minor = FUNC_1(VAR_6.minor);

 FUNC_5(VAR_5->wiphy->fw_version, sizeof(VAR_5->wiphy->fw_version), "%d.%d",
   VAR_4->fw_version_major,
   VAR_4->fw_version_minor);

 FUNC_3(VAR_4->dev, "ath9k_htc: FW Version: %d.%d\n",
   VAR_4->fw_version_major,
   VAR_4->fw_version_minor);





 if (VAR_4->fw_version_major != VAR_1 ||
     VAR_4->fw_version_minor < VAR_2) {
  FUNC_2(VAR_4->dev, "ath9k_htc: Please upgrade to FW version %d.%d\n",
   VAR_1, VAR_2);
  return -VAR_0;
 }

 return 0;
}
