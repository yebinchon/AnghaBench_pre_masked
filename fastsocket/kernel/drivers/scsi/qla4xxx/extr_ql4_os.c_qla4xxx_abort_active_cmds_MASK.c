
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srb {int srb_ref; TYPE_1__* cmd; } ;
struct scsi_qla_host {int hardware_lock; TYPE_2__* host; } ;
struct TYPE_4__ {int can_queue; } ;
struct TYPE_3__ {int result; } ;


 int FUNC_0 (int *,int ) ;
 struct srb* FUNC_1 (struct scsi_qla_host*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_1, int VAR_2)
{
 struct srb *VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->hardware_lock, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_1->host->can_queue; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_4);
  if (VAR_3 != ((void*)0)) {
   VAR_3->cmd->result = VAR_2;
   FUNC_0(&VAR_3->srb_ref, VAR_0);
  }
 }
 FUNC_3(&VAR_1->hardware_lock, VAR_5);
}
