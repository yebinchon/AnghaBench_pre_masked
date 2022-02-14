
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int in_reset_reload; int hrrq_num; struct ipr_cmnd* reset_cmd; int host; TYPE_1__* hrrq; } ;
struct TYPE_4__ {int shutdown_type; } ;
struct ipr_cmnd {int (* job_step ) (struct ipr_cmnd*) ;TYPE_2__ u; } ;
typedef enum ipr_shutdown_type { ____Placeholder_ipr_shutdown_type } ipr_shutdown_type ;
struct TYPE_3__ {int removing_ioa; int _lock; scalar_t__ allow_cmds; } ;


 size_t VAR_0 ;
 struct ipr_cmnd* FUNC_0 (struct ipr_ioa_cfg*) ;
 int FUNC_1 (struct ipr_cmnd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct ipr_ioa_cfg *VAR_1,
        int (*VAR_2) (struct ipr_cmnd *),
        enum ipr_shutdown_type VAR_3)
{
 struct ipr_cmnd *VAR_4;
 int VAR_5;

 VAR_1->in_reset_reload = 1;
 for (VAR_5 = 0; VAR_5 < VAR_1->hrrq_num; VAR_5++) {
  FUNC_3(&VAR_1->hrrq[VAR_5]._lock);
  VAR_1->hrrq[VAR_5].allow_cmds = 0;
  FUNC_4(&VAR_1->hrrq[VAR_5]._lock);
 }
 FUNC_5();
 if (!VAR_1->hrrq[VAR_0].removing_ioa)
  FUNC_2(VAR_1->host);

 VAR_4 = FUNC_0(VAR_1);
 VAR_1->reset_cmd = VAR_4;
 VAR_4->job_step = VAR_2;
 VAR_4->u.shutdown_type = VAR_3;

 FUNC_1(VAR_4);
}
