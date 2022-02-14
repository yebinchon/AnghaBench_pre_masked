
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {scalar_t__ nodeId; } ;
typedef TYPE_1__ WorkerNode ;


 int FUNC_0 () ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int) ;

WorkerNode *
FUNC_3(uint32 VAR_2)
{
 int VAR_3 = 0;

 FUNC_0();

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  WorkerNode *VAR_4 = VAR_0[VAR_3];
  if (VAR_4->nodeId == VAR_2)
  {
   WorkerNode *VAR_5 = FUNC_2(sizeof(WorkerNode));
   FUNC_1(VAR_5, VAR_4, sizeof(WorkerNode));

   return VAR_5;
  }
 }

 return ((void*)0);
}
