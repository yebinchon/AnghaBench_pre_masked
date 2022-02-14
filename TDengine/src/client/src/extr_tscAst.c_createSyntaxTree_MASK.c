
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_21__ {scalar_t__ nodeType; int colId; TYPE_2__* pExpr; } ;
typedef TYPE_1__ tSQLSyntaxNode ;
struct TYPE_22__ {scalar_t__ nSQLBinaryOptr; TYPE_1__* pRight; TYPE_1__* pLeft; int filterOnPrimaryKey; } ;
typedef TYPE_2__ tSQLBinaryExpr ;
typedef int int32_t ;
struct TYPE_24__ {scalar_t__ n; scalar_t__ type; } ;
struct TYPE_23__ {int name; } ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*,scalar_t__) ;
 TYPE_1__* FUNC_6 (char*,TYPE_2__*,TYPE_3__*,scalar_t__,int ,int *) ;
 int FUNC_7 (TYPE_1__**,TYPE_1__**,scalar_t__*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 TYPE_4__ FUNC_10 (char*,int *,int,int ,int *) ;

__attribute__((used)) static tSQLSyntaxNode *FUNC_11(SSchema *VAR_5, int32_t VAR_6, char *VAR_7, int32_t *VAR_8) {
  SSQLToken VAR_9;

  VAR_9 = FUNC_10(VAR_7, VAR_8, 0, 0, ((void*)0));
  if (VAR_9 == 0) {
    return ((void*)0);
  }

  tSQLSyntaxNode *VAR_10 = ((void*)0);
  if (VAR_9 == VAR_1) {
    VAR_10 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
  } else {
    if (VAR_9 == VAR_3) {
      return ((void*)0);
    }
    VAR_10 = FUNC_8(VAR_5, VAR_6, &VAR_9);
  }

  if (VAR_10 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_9 = FUNC_10(VAR_7, VAR_8, 0, 0, ((void*)0));
  if (VAR_9 == 0 || VAR_9 == VAR_3) {
    if (VAR_10->nodeType != VAR_4) {
      FUNC_9(VAR_10, ((void*)0));
      return ((void*)0);
    }

    return VAR_10;
  }


  uint8_t VAR_11 = FUNC_2(&VAR_9);
  if (VAR_11 <= 0) {
    FUNC_5("not support binary operator:%d", VAR_9);
    FUNC_9(VAR_10, ((void*)0));
    return ((void*)0);
  }

  FUNC_0(VAR_10 != ((void*)0));
  tSQLSyntaxNode *VAR_12 = ((void*)0);

  if (VAR_9 == VAR_0 || VAR_9 == VAR_2 || VAR_9 == VAR_1) {
    VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
  } else {






    VAR_9 = FUNC_10(VAR_7, VAR_8, 1, 0, ((void*)0));
    if (VAR_9 == 0) {
      FUNC_9(VAR_10, ((void*)0));
      return ((void*)0);
    }

    if (VAR_9 == VAR_1) {
      VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
    } else {
      VAR_12 = FUNC_8(VAR_5, VAR_6, &VAR_9);
    }
  }

  if (VAR_12 == ((void*)0)) {
    FUNC_9(VAR_10, ((void*)0));
    return ((void*)0);
  }


  tSQLBinaryExpr *VAR_13 = (tSQLBinaryExpr *)FUNC_1(1, sizeof(tSQLBinaryExpr));
  FUNC_7(&VAR_10, &VAR_12, &VAR_11);

  VAR_13->filterOnPrimaryKey = FUNC_3(VAR_5[0].name, VAR_10, VAR_12);
  VAR_13->pLeft = VAR_10;
  VAR_13->pRight = VAR_12;
  VAR_13->nSQLBinaryOptr = VAR_11;

  VAR_9 = FUNC_10(VAR_7, VAR_8, 1, 0, ((void*)0));

  if (VAR_9 == 0 || VAR_9 == VAR_3) {
    tSQLSyntaxNode *VAR_14 = FUNC_4(sizeof(tSQLSyntaxNode));
    VAR_14->nodeType = VAR_4;
    VAR_14->pExpr = VAR_13;
    VAR_14->colId = -1;
    return VAR_14;
  } else {
    uint8_t VAR_15 = FUNC_2(&VAR_9);
    if (VAR_15 <= 0) {
      FUNC_5("not support binary operator:%d", VAR_9);
      return ((void*)0);
    }

    return FUNC_6(VAR_7, VAR_13, VAR_5, VAR_15, VAR_6, VAR_8);
  }
}
