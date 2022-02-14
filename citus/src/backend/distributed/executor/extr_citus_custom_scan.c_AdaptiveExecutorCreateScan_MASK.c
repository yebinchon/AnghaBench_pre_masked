
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {int * methods; TYPE_2__ ss; } ;
struct TYPE_9__ {TYPE_3__ customScanState; int distributedPlan; int executorType; } ;
typedef int Node ;
typedef int CustomScan ;
typedef TYPE_4__ CitusScanState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int) ;

__attribute__((used)) static Node *
FUNC_2(CustomScan *VAR_3)
{
 CitusScanState *VAR_4 = FUNC_1(sizeof(CitusScanState));

 VAR_4->executorType = VAR_1;
 VAR_4->customScanState.ss.ps.type = VAR_2;
 VAR_4->distributedPlan = FUNC_0(VAR_3);

 VAR_4->customScanState.methods = &VAR_0;

 return (Node *) VAR_4;
}
