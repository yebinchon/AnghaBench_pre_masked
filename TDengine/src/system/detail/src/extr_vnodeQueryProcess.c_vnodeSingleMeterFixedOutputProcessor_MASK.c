
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ offset; } ;
struct TYPE_19__ {scalar_t__ slot; scalar_t__ pos; scalar_t__ pointsRead; scalar_t__ pointsToRead; int pGroupbyExpr; TYPE_1__ limit; int over; } ;
struct TYPE_20__ {scalar_t__ pointsRead; TYPE_2__* pMeterQuerySupporter; TYPE_4__ query; } ;
struct TYPE_18__ {int pResult; } ;
struct TYPE_17__ {scalar_t__ subgroupIdx; TYPE_3__ runtimeEnv; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SQInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(SQInfo *VAR_2) {
  SQuery * VAR_3 = &VAR_2->query;
  SQueryRuntimeEnv *VAR_4 = &VAR_2->pMeterQuerySupporter->runtimeEnv;

  FUNC_1(VAR_3->slot >= 0 && VAR_3->pos >= 0);

  FUNC_11(VAR_4);
  FUNC_3(VAR_4);

  if (FUNC_8(VAR_3)) {
    return;
  }


  VAR_3->pointsRead = FUNC_6(VAR_4);
  FUNC_1(VAR_3->pointsRead <= VAR_3->pointsToRead &&
         FUNC_0(VAR_3->over, VAR_0 | VAR_1));


  if (VAR_3->limit.offset > 0) {
    FUNC_1(FUNC_9(VAR_3));
  }

  if (FUNC_7(VAR_3->pGroupbyExpr)) {
    VAR_2->pMeterQuerySupporter->subgroupIdx = 0;
    VAR_3->pointsRead = 0;
    FUNC_2(VAR_2, VAR_4->pResult);
  }

  FUNC_5(VAR_4);
  FUNC_4(VAR_2);
  FUNC_10(VAR_4);

  VAR_2->pointsRead = VAR_3->pointsRead;
}
