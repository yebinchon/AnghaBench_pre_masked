
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {scalar_t__ nodeType; TYPE_2__* pExpr; } ;
typedef TYPE_1__ tSQLSyntaxNode ;
struct TYPE_16__ {int filterOnPrimaryKey; int nSQLBinaryOptr; TYPE_1__* pRight; TYPE_1__* pLeft; } ;
typedef TYPE_2__ tSQLBinaryExpr ;
typedef int int32_t ;
struct TYPE_17__ {int name; } ;
typedef TYPE_3__ SSchema ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int ,char*,int *) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__**,TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static tSQLSyntaxNode *FUNC_6(char *VAR_3, tSQLBinaryExpr *VAR_4, SSchema *VAR_5, int32_t VAR_6,
                                      int32_t VAR_7, int32_t *VAR_8) {

  tSQLSyntaxNode *VAR_9 = FUNC_3(sizeof(tSQLSyntaxNode));
  VAR_9->nodeType = VAR_1;
  VAR_9->pExpr = VAR_4;


  tSQLSyntaxNode *VAR_10 = FUNC_1(VAR_5, VAR_7, VAR_3, VAR_8);
  if (VAR_10 == ((void*)0) || (VAR_10->nodeType == VAR_0 && VAR_9->nodeType != VAR_2) ||
      (VAR_9->nodeType == VAR_2 && VAR_10->nodeType != VAR_0)) {
    FUNC_5(VAR_9, ((void*)0));
    FUNC_5(VAR_10, ((void*)0));
    return ((void*)0);
  }

  tSQLBinaryExpr *VAR_11 = (tSQLBinaryExpr *)FUNC_0(1, sizeof(tSQLBinaryExpr));
  uint8_t VAR_12 = VAR_6;
  FUNC_4(&VAR_9, &VAR_10, &VAR_12);
  VAR_11->pLeft = VAR_9;
  VAR_11->pRight = VAR_10;
  VAR_11->nSQLBinaryOptr = VAR_12;

  VAR_11->filterOnPrimaryKey = FUNC_2(VAR_5[0].name, VAR_9, VAR_10);

  tSQLSyntaxNode *VAR_13 = FUNC_3(sizeof(tSQLSyntaxNode));
  VAR_13->nodeType = VAR_1;
  VAR_13->pExpr = VAR_11;

  return VAR_13;
}
