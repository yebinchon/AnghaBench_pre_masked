
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {scalar_t__ ReasonCode; int VolDevHandle; int NewValue; } ;
typedef TYPE_1__ Mpi2EventDataIrVolume_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_3,
 Mpi2EventDataIrVolume_t *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->ReasonCode != VAR_0)
  return;
 VAR_5 = FUNC_2(VAR_4->NewValue);
 if (VAR_5 == VAR_2 || VAR_5 ==
     VAR_1)
  FUNC_0(VAR_3,
      FUNC_1(VAR_4->VolDevHandle));
}
