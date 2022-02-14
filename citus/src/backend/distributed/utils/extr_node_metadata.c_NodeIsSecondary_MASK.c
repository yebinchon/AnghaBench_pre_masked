
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nodeRole; } ;
typedef TYPE_1__ WorkerNode ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

bool
FUNC_1(WorkerNode *VAR_1)
{
 Oid VAR_2 = FUNC_0();


 if (VAR_2 == VAR_0)
 {
  return 0;
 }

 return VAR_1->nodeRole == VAR_2;
}
