
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct scsi_cmnd {int * host_scribble; TYPE_4__* device; } ;
struct TYPE_24__ {TYPE_8__* device; } ;
struct TYPE_23__ {int id; } ;
struct TYPE_22__ {TYPE_6__* device; } ;
struct TYPE_21__ {int id; } ;
struct TYPE_20__ {int disconnected; int issue; } ;
struct TYPE_19__ {int id; TYPE_1__* host; } ;
struct TYPE_18__ {TYPE_2__* device; } ;
struct TYPE_17__ {scalar_t__ id; } ;
struct TYPE_16__ {scalar_t__ hostdata; } ;
struct TYPE_14__ {scalar_t__ phase; int disconnectable; } ;
struct TYPE_15__ {int rst_dev_status; int host_lock; struct scsi_cmnd* rstSCpnt; int eh_timer; int eh_wait; TYPE_10__ scsi; int busyluns; TYPE_9__* reqSCpnt; TYPE_7__* origSCpnt; TYPE_5__ queues; TYPE_3__* SCpnt; } ;
typedef TYPE_11__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_11__*,int ,char*,...) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct scsi_cmnd *VAR_6)
{
 FAS216_Info *VAR_7 = (FAS216_Info *)VAR_6->device->host->hostdata;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = VAR_0, VAR_11 = VAR_6->device->id;

 FUNC_3(VAR_7, VAR_2, "device reset for target %d", VAR_11);

 FUNC_6(&VAR_7->host_lock, VAR_8);

 do {






  if (VAR_7->SCpnt && !VAR_7->scsi.disconnectable &&
      VAR_7->SCpnt->device->id == VAR_6->device->id)
   break;







  FUNC_5(&VAR_7->queues.issue, VAR_11);
  FUNC_5(&VAR_7->queues.disconnected, VAR_11);
  if (VAR_7->origSCpnt && VAR_7->origSCpnt->device->id == VAR_11)
   VAR_7->origSCpnt = ((void*)0);
  if (VAR_7->reqSCpnt && VAR_7->reqSCpnt->device->id == VAR_11)
   VAR_7->reqSCpnt = ((void*)0);
  for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
   FUNC_0(VAR_11 * 8 + VAR_9, VAR_7->busyluns);





  VAR_6->host_scribble = (void *)VAR_5;

  VAR_7->rst_dev_status = 0;
  VAR_7->rstSCpnt = VAR_6;

  if (VAR_7->scsi.phase == VAR_3)
   FUNC_2(VAR_7);

  FUNC_4(&VAR_7->eh_timer, 30 * VAR_1);
  FUNC_7(&VAR_7->host_lock, VAR_8);




  FUNC_8(VAR_7->eh_wait, VAR_7->rst_dev_status);

  FUNC_1(&VAR_7->eh_timer);
  FUNC_6(&VAR_7->host_lock, VAR_8);
  VAR_7->rstSCpnt = ((void*)0);

  if (VAR_7->rst_dev_status == 1)
   VAR_10 = VAR_4;
 } while (0);

 VAR_6->host_scribble = ((void*)0);
 FUNC_7(&VAR_7->host_lock, VAR_8);

 FUNC_3(VAR_7, VAR_2, "device reset complete: %s\n",
     VAR_10 == VAR_4 ? "success" : "failed");

 return VAR_10;
}
