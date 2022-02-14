
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scsi_cmnd {int dummy; } ;
struct MPT3SAS_ADAPTER {int scsiio_depth; int scsi_lookup_lock; TYPE_1__* scsi_lookup; } ;
struct TYPE_2__ {scalar_t__ smid; struct scsi_cmnd* scmd; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u16
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0, struct scsi_cmnd
 *VAR_1)
{
 u16 VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0->scsi_lookup_lock, VAR_3);
 VAR_2 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->scsiio_depth; VAR_4++) {
  if (VAR_0->scsi_lookup[VAR_4].scmd == VAR_1) {
   VAR_2 = VAR_0->scsi_lookup[VAR_4].smid;
   goto out;
  }
 }
 out:
 FUNC_1(&VAR_0->scsi_lookup_lock, VAR_3);
 return VAR_2;
}
