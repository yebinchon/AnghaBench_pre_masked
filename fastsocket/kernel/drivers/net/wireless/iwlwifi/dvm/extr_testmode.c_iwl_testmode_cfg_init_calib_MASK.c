
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_priv {int notif_wait; } ;
struct iwl_notification_wait {int dummy; } ;


 int FUNC_0 (int const*) ;

 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (int *,struct iwl_notification_wait*,int const*,int ,int *,int *) ;
 int FUNC_4 (int *,struct iwl_notification_wait*) ;
 int FUNC_5 (int *,struct iwl_notification_wait*,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_1)
{
 struct iwl_notification_wait VAR_2;
 static const u8 VAR_3[] = {
  128
 };
 int VAR_4;

 FUNC_3(&VAR_1->notif_wait, &VAR_2,
       VAR_3, FUNC_0(VAR_3),
       ((void*)0), ((void*)0));
 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_1, "Fail init calibration: %d\n", VAR_4);
  goto cfg_init_calib_error;
 }

 VAR_4 = FUNC_5(&VAR_1->notif_wait, &VAR_2, 2 * VAR_0);
 if (VAR_4)
  FUNC_1(VAR_1, "Error detecting"
   " CALIBRATION_COMPLETE_NOTIFICATION: %d\n", VAR_4);
 return VAR_4;

cfg_init_calib_error:
 FUNC_4(&VAR_1->notif_wait, &VAR_2);
 return VAR_4;
}
