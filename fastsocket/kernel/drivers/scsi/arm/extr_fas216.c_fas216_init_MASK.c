
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;
struct TYPE_11__ {unsigned long data; int function; } ;
struct TYPE_9__ {int issue; int disconnected; } ;
struct TYPE_8__ {int* cfg; int msgs; int async_stp; } ;
struct TYPE_7__ {int cntl3; int asyncperiod; } ;
struct TYPE_10__ {int rst_dev_status; int rst_bus_status; TYPE_3__ queues; TYPE_2__ scsi; int stats; int host_lock; TYPE_5__ eh_timer; int eh_wait; TYPE_1__ ifcfg; struct Scsi_Host* host; void* magic_end; void* magic_start; } ;
typedef TYPE_4__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct Scsi_Host *VAR_10)
{
 FAS216_Info *VAR_11 = (FAS216_Info *)VAR_10->hostdata;

 VAR_11->magic_start = VAR_8;
 VAR_11->magic_end = VAR_8;
 VAR_11->host = VAR_10;
 VAR_11->scsi.cfg[0] = VAR_10->this_id | VAR_0;
 VAR_11->scsi.cfg[1] = VAR_1 | VAR_2;
 VAR_11->scsi.cfg[2] = VAR_11->ifcfg.cntl3 |
          VAR_3 | VAR_6 | VAR_4 | VAR_5;
 VAR_11->scsi.async_stp = FUNC_0(VAR_11, VAR_11->ifcfg.asyncperiod);

 VAR_11->rst_dev_status = -1;
 VAR_11->rst_bus_status = -1;
 FUNC_2(&VAR_11->eh_wait);
 FUNC_1(&VAR_11->eh_timer);
 VAR_11->eh_timer.data = (unsigned long)VAR_11;
 VAR_11->eh_timer.function = VAR_9;

 FUNC_7(&VAR_11->host_lock);

 FUNC_3(&VAR_11->stats, 0, sizeof(VAR_11->stats));

 FUNC_4(&VAR_11->scsi.msgs);

 if (!FUNC_6(&VAR_11->queues.issue))
  return -VAR_7;

 if (!FUNC_6(&VAR_11->queues.disconnected)) {
  FUNC_5(&VAR_11->queues.issue);
  return -VAR_7;
 }

 return 0;
}
