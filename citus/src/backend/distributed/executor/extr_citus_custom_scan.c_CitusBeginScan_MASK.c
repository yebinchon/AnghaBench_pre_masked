
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ps; } ;
struct TYPE_6__ {TYPE_1__ ss; } ;
struct TYPE_8__ {TYPE_3__* distributedPlan; TYPE_2__ customScanState; } ;
struct TYPE_7__ {scalar_t__ modLevel; int * insertSelectSubquery; } ;
typedef int EState ;
typedef TYPE_3__ DistributedPlan ;
typedef int CustomScanState ;
typedef TYPE_4__ CitusScanState ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(CustomScanState *VAR_2, EState *VAR_3, int VAR_4)
{
 CitusScanState *VAR_5 = ((void*)0);
 DistributedPlan *VAR_6 = ((void*)0);

 FUNC_2();

 VAR_5 = (CitusScanState *) VAR_2;





 VAR_6 = VAR_5->distributedPlan;
 if (VAR_6->modLevel == VAR_0 ||
  VAR_6->insertSelectSubquery != ((void*)0))
 {

  return;
 }

 FUNC_0(VAR_2, VAR_3, VAR_4);
}
