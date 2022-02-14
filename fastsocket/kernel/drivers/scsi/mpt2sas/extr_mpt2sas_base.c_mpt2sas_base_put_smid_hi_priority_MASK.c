
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct MPT2SAS_ADAPTER {int scsi_lookup_lock; TYPE_1__* chip; } ;
struct TYPE_5__ {scalar_t__ Reserved1; scalar_t__ LMID; int SMID; scalar_t__ MSIxIndex; int RequestFlags; } ;
struct TYPE_6__ {TYPE_2__ HighPriority; } ;
struct TYPE_4__ {int RequestDescriptorPostLow; } ;
typedef TYPE_3__ Mpi2RequestDescriptorUnion_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct MPT2SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 Mpi2RequestDescriptorUnion_t VAR_3;
 u64 *VAR_4 = (u64 *)&VAR_3;

 VAR_3.HighPriority.RequestFlags =
     VAR_0;
 VAR_3.HighPriority.MSIxIndex = 0;
 VAR_3.HighPriority.SMID = FUNC_1(VAR_2);
 VAR_3.HighPriority.LMID = 0;
 VAR_3.HighPriority.Reserved1 = 0;
 FUNC_0(*VAR_4, &VAR_1->chip->RequestDescriptorPostLow,
     &VAR_1->scsi_lookup_lock);
}
