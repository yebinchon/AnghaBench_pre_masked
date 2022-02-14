
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int scan_finished; int scan_lock; int scan_wait_queue; TYPE_1__* scsi_host; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (struct ctlr_info*,int ) ;
 struct ctlr_info* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct Scsi_Host *VAR_0)
{
 struct ctlr_info *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;


 while (1) {
  FUNC_2(&VAR_1->scan_lock, VAR_2);
  if (VAR_1->scan_finished)
   break;
  FUNC_3(&VAR_1->scan_lock, VAR_2);
  FUNC_4(VAR_1->scan_wait_queue, VAR_1->scan_finished);





 }
 VAR_1->scan_finished = 0;
 FUNC_3(&VAR_1->scan_lock, VAR_2);

 FUNC_0(VAR_1, VAR_1->scsi_host->host_no);

 FUNC_2(&VAR_1->scan_lock, VAR_2);
 VAR_1->scan_finished = 1;
 FUNC_5(&VAR_1->scan_wait_queue);
 FUNC_3(&VAR_1->scan_lock, VAR_2);
}
