
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {int PhysDiskDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0,
 Mpi2EventIrConfigElement_t *VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_1->PhysDiskDevHandle);

 FUNC_0(VAR_0, VAR_2);
}
