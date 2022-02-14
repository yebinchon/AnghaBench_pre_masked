
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adv_dvc_var; int asc_dvc_var; } ;
struct asc_board {TYPE_1__ dvc_var; } ;
struct Scsi_Host {int host_lock; int io_port; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (struct asc_board*) ;
 int FUNC_2 (struct Scsi_Host*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct asc_board* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;
 struct asc_board *VAR_6 = FUNC_6(VAR_5);
 irqreturn_t VAR_7 = VAR_1;

 FUNC_0(2, "boardp 0x%p\n", VAR_6);
 FUNC_7(VAR_5->host_lock);
 if (FUNC_1(VAR_6)) {
  if (FUNC_5(VAR_5->io_port)) {
   VAR_7 = VAR_0;
   FUNC_2(VAR_5, VAR_2);
   FUNC_0(1, "before AscISR()\n");
   FUNC_4(&VAR_6->dvc_var.asc_dvc_var);
  }
 } else {
  FUNC_0(1, "before AdvISR()\n");
  if (FUNC_3(&VAR_6->dvc_var.adv_dvc_var)) {
   VAR_7 = VAR_0;
   FUNC_2(VAR_5, VAR_2);
  }
 }
 FUNC_8(VAR_5->host_lock);

 FUNC_0(1, "end\n");
 return VAR_7;
}
