
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_3__ {int scsi_lookup_lock; struct scsi_cmnd** ScsiLookup; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(MPT_ADAPTER *VAR_0, int VAR_1, struct scsi_cmnd *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->scsi_lookup_lock, VAR_3);
 VAR_0->ScsiLookup[VAR_1] = VAR_2;
 FUNC_1(&VAR_0->scsi_lookup_lock, VAR_3);
}
