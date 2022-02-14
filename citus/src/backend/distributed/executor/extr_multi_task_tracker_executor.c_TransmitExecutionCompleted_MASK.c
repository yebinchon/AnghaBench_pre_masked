
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ TransmitExecStatus ;
struct TYPE_3__ {scalar_t__ nodeCount; scalar_t__* transmitStatusArray; } ;
typedef TYPE_1__ TaskExecution ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(TaskExecution *VAR_1)
{
 bool VAR_2 = 0;
 uint32 VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->nodeCount; VAR_3++)
 {
  TransmitExecStatus *VAR_4 = VAR_1->transmitStatusArray;

  TransmitExecStatus VAR_5 = VAR_4[VAR_3];
  if (VAR_5 == VAR_0)
  {
   VAR_2 = 1;
   break;
  }
 }

 return VAR_2;
}
