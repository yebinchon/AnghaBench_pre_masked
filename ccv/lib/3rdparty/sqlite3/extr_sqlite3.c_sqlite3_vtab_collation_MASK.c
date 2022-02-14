
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nConstraint; TYPE_1__* aConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_16__ {char* zName; } ;
struct TYPE_15__ {int pRight; scalar_t__ pLeft; } ;
struct TYPE_14__ {int pParse; TYPE_3__* pWC; } ;
struct TYPE_12__ {TYPE_2__* a; } ;
struct TYPE_11__ {TYPE_6__* pExpr; } ;
struct TYPE_10__ {int iTermOffset; } ;
typedef TYPE_5__ HiddenIndexInfo ;
typedef TYPE_6__ Expr ;
typedef TYPE_7__ CollSeq ;


 TYPE_7__* FUNC_0 (int ,scalar_t__,int ) ;

const char *FUNC_1(sqlite3_index_info *VAR_0, int VAR_1){
  HiddenIndexInfo *VAR_2 = (HiddenIndexInfo*)&VAR_0[1];
  const char *VAR_3 = 0;
  if( VAR_1>=0 && VAR_1<VAR_0->nConstraint ){
    CollSeq *VAR_4 = 0;
    int VAR_5 = VAR_0->aConstraint[VAR_1].iTermOffset;
    Expr *VAR_6 = VAR_2->pWC->a[VAR_5].pExpr;
    if( VAR_6->pLeft ){
      VAR_4 = FUNC_0(VAR_2->pParse, VAR_6->pLeft, VAR_6->pRight);
    }
    VAR_3 = (VAR_4 ? VAR_4->zName : "BINARY");
  }
  return VAR_3;
}
