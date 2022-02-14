
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {int dummy; } ;
struct MPT2SAS_ADAPTER {int scsi_lookup_lock; TYPE_1__* scsi_lookup; } ;
struct TYPE_2__ {struct scsi_cmnd* scmd; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline struct scsi_cmnd *
FUNC_2(struct MPT2SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 struct scsi_cmnd *VAR_3;

 FUNC_0(&VAR_0->scsi_lookup_lock, VAR_2);
 VAR_3 = VAR_0->scsi_lookup[VAR_1 - 1].scmd;
 VAR_0->scsi_lookup[VAR_1 - 1].scmd = ((void*)0);
 FUNC_1(&VAR_0->scsi_lookup_lock, VAR_2);

 return VAR_3;
}
