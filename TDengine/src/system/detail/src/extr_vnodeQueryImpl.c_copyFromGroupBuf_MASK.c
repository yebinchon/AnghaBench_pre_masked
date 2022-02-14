
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ pointsRead; scalar_t__ pointsToRead; TYPE_1__* pGroupbyExpr; } ;
struct TYPE_7__ {int * pMeterQuerySupporter; TYPE_2__ query; } ;
struct TYPE_5__ {scalar_t__ orderType; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQInfo ;
typedef int SOutputRes ;
typedef int SMeterQuerySupportObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;

void FUNC_2(SQInfo *VAR_1, SOutputRes *VAR_2) {
  SQuery * VAR_3 = &VAR_1->query;
  SMeterQuerySupportObj *VAR_4 = VAR_1->pMeterQuerySupporter;

  int32_t VAR_5 = (VAR_3->pGroupbyExpr != ((void*)0)) ? VAR_3->pGroupbyExpr->orderType : VAR_0;

  int32_t VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5);

  VAR_3->pointsRead += VAR_6;
  FUNC_0(VAR_3->pointsRead <= VAR_3->pointsToRead);
}
