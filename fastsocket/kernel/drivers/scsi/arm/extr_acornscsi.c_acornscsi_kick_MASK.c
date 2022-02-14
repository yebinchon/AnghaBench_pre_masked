
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_cmnd {int tag; int * cmnd; TYPE_5__* device; int SCp; } ;
typedef int intr_ret_t ;
struct TYPE_17__ {int removes; int writes; int reads; int miscs; } ;
struct TYPE_14__ {scalar_t__ xfer_done; scalar_t__ xfer_required; scalar_t__ xfer_setup; } ;
struct TYPE_13__ {int SCp; int phase; scalar_t__ disconnectable; } ;
struct TYPE_12__ {int disconnected; int issue; } ;
struct TYPE_18__ {TYPE_6__ stats; int busyluns; TYPE_4__* host; TYPE_3__ dma; TYPE_2__ scsi; struct scsi_cmnd* SCpnt; TYPE_1__ queues; struct scsi_cmnd* origSCpnt; } ;
struct TYPE_16__ {int id; int current_tag; scalar_t__ lun; scalar_t__ simple_tags; } ;
struct TYPE_15__ {int host_no; } ;
typedef TYPE_7__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct scsi_cmnd*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (char*,int ,int,...) ;
 int FUNC_4 (int *,struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static
intr_ret_t FUNC_9(AS_Host *VAR_10)
{
    int VAR_11 = 0;
    struct scsi_cmnd *VAR_12;


    VAR_12 = VAR_10->origSCpnt;
    VAR_10->origSCpnt = ((void*)0);


    if (!VAR_12) {
 VAR_12 = FUNC_5(&VAR_10->queues.issue, VAR_10->busyluns);
 if (!VAR_12)
     return VAR_4;

 VAR_11 = 1;
    }

    if (VAR_10->scsi.disconnectable && VAR_10->SCpnt) {
 FUNC_4(&VAR_10->queues.disconnected, VAR_10->SCpnt);
 VAR_10->scsi.disconnectable = 0;




 VAR_10->SCpnt = ((void*)0);
    }





    if (!(FUNC_6(VAR_10, VAR_7) & (VAR_2|VAR_0|VAR_1))) {
 FUNC_7(VAR_10, VAR_9, VAR_12->device->id);
 FUNC_7(VAR_10, VAR_8, VAR_3);
    }





    VAR_10->scsi.phase = VAR_6;
    VAR_10->SCpnt = VAR_12;
    VAR_10->scsi.SCp = VAR_12->SCp;
    VAR_10->dma.xfer_setup = 0;
    VAR_10->dma.xfer_required = 0;
    VAR_10->dma.xfer_done = 0;







    if (VAR_11) {
     FUNC_8(VAR_12->device->id * 8 + VAR_12->device->lun, VAR_10->busyluns);

 VAR_10->stats.removes += 1;

 switch (FUNC_1(VAR_12->cmnd[0])) {
 case 128:
     VAR_10->stats.writes += 1;
     break;
 case 129:
     VAR_10->stats.reads += 1;
     break;
 case 130:
     VAR_10->stats.miscs += 1;
     break;
 }
    }

    return VAR_5;
}
