
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_6__ {int localTaskList; } ;
struct TYPE_5__ {int es_processed; } ;
typedef TYPE_1__ EState ;
typedef TYPE_2__ DistributedExecution ;
typedef int CitusScanState ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(CitusScanState *VAR_1, DistributedExecution *VAR_2)
{
 uint64 VAR_3 = FUNC_0(VAR_1, VAR_2->localTaskList);
 EState *VAR_4 = ((void*)0);

 VAR_0 = 1;







 VAR_4 = FUNC_1(VAR_1);
 VAR_4->es_processed = VAR_3;
}
