
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int ucode_loaded; unsigned long reload_jiffies; scalar_t__ reload_count; int restart; int workqueue; int status; int notif_wait; } ;
struct TYPE_2__ {scalar_t__ restart_fw; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_priv*,int ) ;
 TYPE_1__ VAR_7 ;
 unsigned long VAR_8 ;
 unsigned int FUNC_6 (long) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct iwl_priv *VAR_9, bool VAR_10)
{
 unsigned int VAR_11;
 unsigned long VAR_12;







 VAR_9->ucode_loaded = 0;


 FUNC_8(VAR_5, &VAR_9->status);

 FUNC_3(&VAR_9->notif_wait);



 FUNC_2(VAR_6, &VAR_9->status);

 if (!VAR_10) {






  VAR_12 = VAR_8;
  VAR_11 = FUNC_6((long) VAR_12 -
     (long) VAR_9->reload_jiffies);
  VAR_9->reload_jiffies = VAR_12;
  if (VAR_11 <= VAR_2) {
   VAR_9->reload_count++;
   if (VAR_9->reload_count >= VAR_1) {
    FUNC_1(VAR_9, "BUG_ON, Stop restarting\n");
    return;
   }
  } else
   VAR_9->reload_count = 0;
 }

 if (!FUNC_9(VAR_4, &VAR_9->status)) {
  if (VAR_7.restart_fw) {
   FUNC_0(VAR_9,
      "Restarting adapter due to uCode error.\n");
   FUNC_7(VAR_9->workqueue, &VAR_9->restart);
  } else
   FUNC_0(VAR_9,
      "Detected FW error, but not restarting\n");
 }
}
