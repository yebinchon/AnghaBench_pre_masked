
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int representativeValue; int colocationGroupId; int nodeId; } ;
typedef int Size ;
typedef TYPE_1__ ColocatedPlacementsHashKey ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32
FUNC_2(const void *VAR_0, Size VAR_1)
{
 ColocatedPlacementsHashKey *VAR_2 = (ColocatedPlacementsHashKey *) VAR_0;
 uint32 VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_2->nodeId);
 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_2->colocationGroupId));
 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_2->representativeValue));

 return VAR_3;
}
