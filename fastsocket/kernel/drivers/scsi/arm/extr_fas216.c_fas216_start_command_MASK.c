
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__* cmnd; TYPE_3__* device; scalar_t__ tag; int SCp; } ;
struct TYPE_15__ {int clockrate; int sync_max_depth; } ;
struct TYPE_14__ {int* cfg; int msgs; int SCp; int phase; } ;
struct TYPE_11__ {int transfer_type; } ;
struct TYPE_16__ {TYPE_5__ ifcfg; TYPE_4__ scsi; TYPE_2__* device; TYPE_1__ dma; struct scsi_cmnd* SCpnt; } ;
struct TYPE_13__ {size_t id; int lun; } ;
struct TYPE_12__ {scalar_t__ sync_state; int disconnect_ok; } ;
typedef TYPE_6__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,struct scsi_cmnd*) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int *,int,int ,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (TYPE_6__*,size_t) ;

__attribute__((used)) static void FUNC_6(FAS216_Info *VAR_12, struct scsi_cmnd *VAR_13)
{
 int VAR_14;




 VAR_12->scsi.phase = VAR_4;
 VAR_12->scsi.SCp = VAR_13->SCp;
 VAR_12->SCpnt = VAR_13;
 VAR_12->dma.transfer_type = VAR_8;

 if (FUNC_5(VAR_12, VAR_13->device->id))
  FUNC_2(VAR_12, VAR_5, VAR_12->scsi.cfg[0] | VAR_0);
 else
  FUNC_2(VAR_12, VAR_5, VAR_12->scsi.cfg[0]);




 VAR_14 = VAR_13->cmnd[0] != VAR_6 &&
   VAR_12->device[VAR_13->device->id].disconnect_ok;




 FUNC_4(&VAR_12->scsi.msgs);
 FUNC_3(&VAR_12->scsi.msgs, 1, FUNC_0(VAR_14, VAR_13->device->lun));




 if (VAR_13->tag)
  FUNC_3(&VAR_12->scsi.msgs, 2, VAR_7, VAR_13->tag);

 do {
 } while (0);

 FUNC_1(VAR_12, VAR_13);
}
