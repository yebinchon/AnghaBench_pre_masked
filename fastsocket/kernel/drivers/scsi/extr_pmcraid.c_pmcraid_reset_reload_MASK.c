
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pmcraid_instance {scalar_t__ ioa_state; int ioa_bringdown; int force_ioa_reset; TYPE_1__* host; scalar_t__ ioa_reset_in_progress; int reset_wait_q; struct pmcraid_cmd* reset_cmd; scalar_t__ ioa_shutdown_type; } ;
struct pmcraid_cmd {int dummy; } ;
struct TYPE_3__ {int host_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 struct pmcraid_cmd* FUNC_1 (struct pmcraid_instance*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(
 struct pmcraid_instance *VAR_2,
 u8 VAR_3,
 u8 VAR_4
)
{
 struct pmcraid_cmd *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7 = 1;

 FUNC_6(VAR_2->host->host_lock, VAR_6);

 if (VAR_2->ioa_reset_in_progress) {
  FUNC_2("reset_reload: reset is already in progress\n");

  FUNC_7(VAR_2->host->host_lock, VAR_6);

  FUNC_8(VAR_2->reset_wait_q,
      !VAR_2->ioa_reset_in_progress);

  FUNC_6(VAR_2->host->host_lock, VAR_6);

  if (VAR_2->ioa_state == VAR_0) {
   FUNC_7(VAR_2->host->host_lock,
            VAR_6);
   FUNC_2("reset_reload: IOA is dead\n");
   return VAR_7;
  } else if (VAR_2->ioa_state == VAR_4) {
   VAR_7 = 0;
  }
 }

 if (VAR_7) {
  FUNC_2("reset_reload: proceeding with reset\n");
  FUNC_4(VAR_2->host);
  VAR_5 = FUNC_1(VAR_2);

  if (VAR_5 == ((void*)0)) {
   FUNC_0("no free cmnd for reset_reload\n");
   FUNC_7(VAR_2->host->host_lock,
            VAR_6);
   return VAR_7;
  }

  if (VAR_3 == VAR_1)
   VAR_2->ioa_bringdown = 1;

  VAR_2->ioa_shutdown_type = VAR_3;
  VAR_2->reset_cmd = VAR_5;
  VAR_2->force_ioa_reset = VAR_7;
  FUNC_2("reset_reload: initiating reset\n");
  FUNC_3(VAR_5);
  FUNC_7(VAR_2->host->host_lock, VAR_6);
  FUNC_2("reset_reload: waiting for reset to complete\n");
  FUNC_8(VAR_2->reset_wait_q,
      !VAR_2->ioa_reset_in_progress);

  FUNC_2("reset_reload: reset is complete !!\n");
  FUNC_5(VAR_2->host);
  if (VAR_2->ioa_state == VAR_4)
   VAR_7 = 0;
 }

 return VAR_7;
}
