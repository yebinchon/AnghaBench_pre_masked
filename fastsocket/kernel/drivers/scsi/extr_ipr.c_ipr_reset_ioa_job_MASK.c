
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipr_ioa_cfg {struct ipr_cmnd* reset_cmd; } ;
struct TYPE_6__ {int ioasc; } ;
struct TYPE_8__ {TYPE_2__ hdr; } ;
struct TYPE_7__ {TYPE_4__ ioasa; } ;
struct ipr_cmnd {scalar_t__ (* job_step_failed ) (struct ipr_cmnd*) ;scalar_t__ (* job_step ) (struct ipr_cmnd*) ;TYPE_1__* hrrq; int queue; TYPE_3__ s; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_5__ {int hrrq_free_q; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ipr_cmnd*) ;
 scalar_t__ FUNC_3 (struct ipr_cmnd*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct ipr_cmnd*) ;
 scalar_t__ FUNC_6 (struct ipr_cmnd*) ;

__attribute__((used)) static void FUNC_7(struct ipr_cmnd *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct ipr_ioa_cfg *VAR_5 = VAR_2->ioa_cfg;

 do {
  VAR_4 = FUNC_1(VAR_2->s.ioasa.hdr.ioasc);

  if (VAR_5->reset_cmd != VAR_2) {




   FUNC_4(&VAR_2->queue,
     &VAR_2->hrrq->hrrq_free_q);
   return;
  }

  if (FUNC_0(VAR_4)) {
   VAR_3 = VAR_2->job_step_failed(VAR_2);
   if (VAR_3 == VAR_1)
    return;
  }

  FUNC_2(VAR_2);
  VAR_2->job_step_failed = FUNC_3;
  VAR_3 = VAR_2->job_step(VAR_2);
 } while(VAR_3 == VAR_0);
}
