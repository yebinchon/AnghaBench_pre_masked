
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_11__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_10__ {scalar_t__ pNext; TYPE_2__* pParse; int * pSrcList; } ;
struct TYPE_9__ {int * pVdbe; } ;
struct TYPE_8__ {int * pExpr; } ;
typedef int SrcList ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ NameContext ;
typedef TYPE_4__ ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_3__*,int *,char const**,char const**,char const**) ;
 int FUNC_1 (int *,int,int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_5,
  SrcList *VAR_6,
  ExprList *VAR_7
){

  Vdbe *VAR_8 = VAR_5->pVdbe;
  int VAR_9;
  NameContext VAR_10;
  VAR_10.pSrcList = VAR_6;
  VAR_10.pParse = VAR_5;
  VAR_10.pNext = 0;
  for(VAR_9=0; VAR_9<VAR_7->nExpr; VAR_9++){
    Expr *VAR_11 = VAR_7->a[VAR_9].pExpr;
    const char *VAR_12;
    VAR_12 = FUNC_0(&VAR_10, VAR_11, 0, 0, 0);

    FUNC_1(VAR_8, VAR_9, VAR_2, VAR_12, VAR_4);
  }

}
