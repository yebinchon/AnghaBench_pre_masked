
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nodeId; scalar_t__ colocationGroupId; scalar_t__ representativeValue; } ;
typedef int Size ;
typedef TYPE_1__ ColocatedPlacementsHashKey ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, Size VAR_2)
{
 ColocatedPlacementsHashKey *VAR_3 = (ColocatedPlacementsHashKey *) VAR_0;
 ColocatedPlacementsHashKey *VAR_4 = (ColocatedPlacementsHashKey *) VAR_1;

 if (VAR_3->nodeId != VAR_4->nodeId ||
  VAR_3->colocationGroupId != VAR_4->colocationGroupId ||
  VAR_3->representativeValue != VAR_4->representativeValue)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
