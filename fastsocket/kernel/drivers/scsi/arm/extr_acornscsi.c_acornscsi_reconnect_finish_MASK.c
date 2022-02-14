
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int scsi_xferred; int this_residual; int ptr; } ;
struct TYPE_23__ {scalar_t__ tag; TYPE_6__ SCp; TYPE_1__* device; } ;
struct TYPE_18__ {scalar_t__ target; scalar_t__ lun; scalar_t__ tag; } ;
struct TYPE_21__ {TYPE_6__ SCp; TYPE_4__ reconnected; scalar_t__ disconnectable; } ;
struct TYPE_19__ {int transferred; } ;
struct TYPE_16__ {int disconnected; } ;
struct TYPE_22__ {TYPE_9__* SCpnt; TYPE_7__ scsi; TYPE_5__ dma; TYPE_3__* host; TYPE_2__ queues; } ;
struct TYPE_17__ {int host_no; } ;
struct TYPE_15__ {scalar_t__ id; scalar_t__ lun; } ;
typedef TYPE_8__ AS_Host ;


 int FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (TYPE_8__*,scalar_t__) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,TYPE_9__*) ;
 TYPE_9__* FUNC_5 (int *,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
int FUNC_6(AS_Host *VAR_0)
{
    if (VAR_0->scsi.disconnectable && VAR_0->SCpnt) {
 VAR_0->scsi.disconnectable = 0;
 if (VAR_0->SCpnt->device->id == VAR_0->scsi.reconnected.target &&
     VAR_0->SCpnt->device->lun == VAR_0->scsi.reconnected.lun &&
     VAR_0->SCpnt->tag == VAR_0->scsi.reconnected.tag) {




 } else {
     FUNC_4(&VAR_0->queues.disconnected, VAR_0->SCpnt);





     VAR_0->SCpnt = ((void*)0);
 }
    }
    if (!VAR_0->SCpnt) {
 VAR_0->SCpnt = FUNC_5(&VAR_0->queues.disconnected,
    VAR_0->scsi.reconnected.target,
    VAR_0->scsi.reconnected.lun,
    VAR_0->scsi.reconnected.tag);




    }

    if (!VAR_0->SCpnt)
 FUNC_1(VAR_0, VAR_0->scsi.reconnected.tag);
    else {



 VAR_0->scsi.SCp = VAR_0->SCpnt->SCp;




    }




    VAR_0->dma.transferred = VAR_0->scsi.SCp.scsi_xferred;

    return VAR_0->SCpnt != ((void*)0);
}
