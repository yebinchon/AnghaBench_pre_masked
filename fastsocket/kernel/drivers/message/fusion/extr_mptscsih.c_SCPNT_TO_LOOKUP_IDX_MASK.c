
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_3__ {int req_depth; int scsi_lookup_lock; struct scsi_cmnd** ScsiLookup; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_2(MPT_ADAPTER *VAR_0, struct scsi_cmnd *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4=-1;

 FUNC_0(&VAR_0->scsi_lookup_lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->req_depth; VAR_3++) {
  if (VAR_0->ScsiLookup[VAR_3] == VAR_1) {
   VAR_4 = VAR_3;
   goto out;
  }
 }

 out:
 FUNC_1(&VAR_0->scsi_lookup_lock, VAR_2);
 return VAR_4;
}
