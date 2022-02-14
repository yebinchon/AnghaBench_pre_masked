
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int nType; } ;
typedef TYPE_3__ tVariant ;
struct TYPE_14__ {int nSQLBinaryOptr; TYPE_2__* pLeft; TYPE_1__* pRight; TYPE_5__* info; } ;
typedef TYPE_4__ tSQLBinaryExpr ;
struct TYPE_16__ {int type; } ;
struct TYPE_15__ {TYPE_6__ sch; int q; int optr; int compare; scalar_t__ offset; scalar_t__ colIdx; } ;
typedef TYPE_5__ tQueryInfo ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {TYPE_6__* pSchema; } ;
struct TYPE_11__ {TYPE_3__* pVal; } ;
typedef int SSyntaxTreeFilterSupporter ;
typedef TYPE_6__ SSchema ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_6__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(tSQLBinaryExpr* VAR_3, void* VAR_4) {
  if (VAR_3->info != ((void*)0)) {
    return;
  }

  int32_t VAR_5 = 0, VAR_6 = 0;
  VAR_3->info = FUNC_1(1, sizeof(tQueryInfo));

  tQueryInfo* VAR_7 = VAR_3->info;
  SSyntaxTreeFilterSupporter* VAR_8 = (SSyntaxTreeFilterSupporter*)VAR_4;

  tVariant* VAR_9 = VAR_3->pRight->pVal;
  SSchema* VAR_10 = VAR_3->pLeft->pSchema;

  FUNC_3(VAR_8, VAR_10, &VAR_5, &VAR_6);
  FUNC_0((VAR_5 >= 0 && VAR_5 < VAR_0) || (VAR_5 == VAR_2));
  FUNC_0((VAR_6 >= 0 && VAR_6 < VAR_1) || (VAR_6 == VAR_2));

  VAR_7->sch = *VAR_10;
  VAR_7->colIdx = VAR_5;
  VAR_7->optr = VAR_3->nSQLBinaryOptr;
  VAR_7->offset = VAR_6;
  VAR_7->compare = FUNC_2(VAR_10->type, VAR_9->nType, VAR_7->optr);

  FUNC_4(&VAR_7->q, VAR_9);
  FUNC_5(&VAR_7->q, VAR_7->sch.type);
}
