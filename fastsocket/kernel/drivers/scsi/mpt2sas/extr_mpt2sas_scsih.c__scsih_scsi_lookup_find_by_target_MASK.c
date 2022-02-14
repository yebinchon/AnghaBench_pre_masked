
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct MPT2SAS_ADAPTER {int scsiio_depth; int scsi_lookup_lock; TYPE_3__* scsi_lookup; } ;
struct TYPE_6__ {TYPE_2__* scmd; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int id; int channel; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u8
FUNC_2(struct MPT2SAS_ADAPTER *VAR_0, int VAR_1,
    int VAR_2)
{
 u8 VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_0->scsi_lookup_lock, VAR_4);
 VAR_3 = 0;
 for (VAR_5 = 0 ; VAR_5 < VAR_0->scsiio_depth; VAR_5++) {
  if (VAR_0->scsi_lookup[VAR_5].scmd &&
      (VAR_0->scsi_lookup[VAR_5].scmd->device->id == VAR_1 &&
      VAR_0->scsi_lookup[VAR_5].scmd->device->channel == VAR_2)) {
   VAR_3 = 1;
   goto out;
  }
 }
 out:
 FUNC_1(&VAR_0->scsi_lookup_lock, VAR_4);
 return VAR_3;
}
