
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int msgs; } ;
struct TYPE_11__ {TYPE_4__ scsi; TYPE_3__* SCpnt; TYPE_1__* device; } ;
struct TYPE_9__ {scalar_t__* cmnd; TYPE_2__* device; scalar_t__ tag; } ;
struct TYPE_8__ {size_t id; int lun; } ;
struct TYPE_7__ {scalar_t__ sync_state; int disconnect_ok; } ;
typedef TYPE_5__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *,int,unsigned int,...) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static
void FUNC_3(AS_Host *VAR_14)
{
    FUNC_2(&VAR_14->scsi.msgs, 1,
       FUNC_0(VAR_14->device[VAR_14->SCpnt->device->id].disconnect_ok,
        VAR_14->SCpnt->device->lun));
}
