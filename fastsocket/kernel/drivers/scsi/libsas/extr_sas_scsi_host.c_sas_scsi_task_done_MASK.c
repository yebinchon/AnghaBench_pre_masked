
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct sas_task {int list; struct domain_device* dev; struct scsi_cmnd* uldd_task; } ;
struct sas_ha_struct {int state; } ;
struct domain_device {int done_lock; TYPE_1__* port; } ;
struct TYPE_2__ {struct sas_ha_struct* ha; } ;


 int FUNC_0 (struct scsi_cmnd*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_cmnd*,struct sas_task*) ;
 int FUNC_4 (struct sas_task*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct sas_task *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->uldd_task;
 struct domain_device *VAR_3 = VAR_1->dev;
 struct sas_ha_struct *VAR_4 = VAR_3->port->ha;
 unsigned long VAR_5;

 FUNC_5(&VAR_3->done_lock, VAR_5);
 if (FUNC_8(VAR_0, &VAR_4->state))
  VAR_1 = ((void*)0);
 else
  FUNC_0(VAR_2, ((void*)0));
 FUNC_6(&VAR_3->done_lock, VAR_5);

 if (FUNC_9(!VAR_1)) {

  FUNC_1("task done but aborted\n");
  return;
 }

 if (FUNC_9(!VAR_2)) {
  FUNC_1("task_done called with non existing SCSI cmnd!\n");
  FUNC_2(&VAR_1->list);
  FUNC_4(VAR_1);
  return;
 }

 FUNC_3(VAR_2, VAR_1);
 VAR_2->scsi_done(VAR_2);
}
