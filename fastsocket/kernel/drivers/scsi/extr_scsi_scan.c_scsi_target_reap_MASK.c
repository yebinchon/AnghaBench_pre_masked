
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {int state; scalar_t__ reap_ref; int ew; int devices; TYPE_1__ dev; } ;
struct Scsi_Host {int host_lock; } ;
typedef enum scsi_target_state { ____Placeholder_scsi_target_state } scsi_target_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_target*) ;
 int VAR_2 ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct scsi_target *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_3->dev.parent);
 unsigned long VAR_5;
 enum scsi_target_state VAR_6;
 int VAR_7 = 0;

 FUNC_5(VAR_4->host_lock, VAR_5);
 VAR_6 = VAR_3->state;
 if (--VAR_3->reap_ref == 0 && FUNC_3(&VAR_3->devices)) {
  VAR_7 = 1;
  VAR_3->state = VAR_1;
 }
 FUNC_6(VAR_4->host_lock, VAR_5);

 if (!VAR_7)
  return;

 FUNC_0(VAR_6 == VAR_1);
 if (VAR_6 == VAR_0)
  FUNC_4(VAR_3);
 else
  FUNC_2(VAR_2,
        &VAR_3->ew);
}
