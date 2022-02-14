
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long uint64 ;
struct TYPE_3__ {long totalIntermediateResultSize; } ;
typedef TYPE_1__ DistributedExecutionStats ;


 long VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(DistributedExecutionStats *VAR_2)
{
 uint64 VAR_3 = 0;

 if (!VAR_1 || VAR_0 < 0)
 {
  return 0;
 }

 VAR_3 = VAR_0 * 1024L;
 if (VAR_2->totalIntermediateResultSize < VAR_3)
 {
  return 0;
 }

 return 1;
}
