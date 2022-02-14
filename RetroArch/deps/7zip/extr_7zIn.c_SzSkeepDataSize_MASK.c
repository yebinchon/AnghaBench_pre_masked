
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ Size; size_t Data; } ;
typedef int SRes ;
typedef TYPE_1__ CSzData ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_0(CSzData *VAR_2, uint64_t VAR_3)
{
   if (VAR_3 > VAR_2->Size)
      return VAR_0;
   VAR_2->Size -= (size_t)VAR_3;
   VAR_2->Data += (size_t)VAR_3;
   return VAR_1;
}
