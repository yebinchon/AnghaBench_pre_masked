
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_rxon_context {int rxon_cmd; } ;
struct iwl_rxon_cmd {int dev_type; int filter_flags; } ;
struct iwl_priv {int notif_wait; } ;
struct iwl_notification_wait {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwl_rxon_cmd*) ;
 int FUNC_3 (int *,struct iwl_notification_wait*,int const*,int ,int *,int *) ;
 int FUNC_4 (int *,struct iwl_notification_wait*) ;
 int FUNC_5 (int *,struct iwl_notification_wait*,int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_4,
         struct iwl_rxon_context *VAR_5,
         struct iwl_rxon_cmd *VAR_6)
{
 struct iwl_notification_wait VAR_7;
 __le32 VAR_8 = VAR_6->filter_flags;
 u8 VAR_9 = VAR_6->dev_type;
 int VAR_10;
 static const u8 VAR_11[] = {
  128
 };

 FUNC_3(&VAR_4->notif_wait, &VAR_7,
       VAR_11, FUNC_0(VAR_11),
       ((void*)0), ((void*)0));

 VAR_6->filter_flags &= ~VAR_3;
 VAR_6->dev_type = VAR_2;
 VAR_10 = FUNC_2(VAR_4, VAR_5->rxon_cmd,
    VAR_0, sizeof(*VAR_6), VAR_6);

 VAR_6->filter_flags = VAR_8;
 VAR_6->dev_type = VAR_9;

 if (VAR_10) {
  FUNC_1(VAR_4, "Error disabling PAN (%d)\n", VAR_10);
  FUNC_4(&VAR_4->notif_wait, &VAR_7);
 } else {
  VAR_10 = FUNC_5(&VAR_4->notif_wait,
         &VAR_7, VAR_1);
  if (VAR_10)
   FUNC_1(VAR_4, "Timed out waiting for PAN disable\n");
 }

 return VAR_10;
}
