
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int Vdbe ;
struct TYPE_11__ {scalar_t__ op; scalar_t__ pLeft; scalar_t__ pRight; } ;
struct TYPE_10__ {int nMem; } ;
struct TYPE_9__ {int iLimit; scalar_t__ nSelectRow; int iOffset; int selFlags; TYPE_3__* pLimit; } ;
typedef TYPE_1__ Select ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int*) ;
 int * FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(Parse *VAR_6, Select *VAR_7, int VAR_8){
  Vdbe *VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11;
  int VAR_12;
  Expr *VAR_13 = VAR_7->pLimit;

  if( VAR_7->iLimit ) return;







  FUNC_3(VAR_6);
  if( VAR_13 ){
    FUNC_2( VAR_13->op==VAR_5 );
    FUNC_2( VAR_13->pLeft!=0 );
    VAR_7->iLimit = VAR_10 = ++VAR_6->nMem;
    VAR_9 = FUNC_6(VAR_6);
    FUNC_2( VAR_9!=0 );
    if( FUNC_5(VAR_13->pLeft, &VAR_12) ){
      FUNC_9(VAR_9, VAR_1, VAR_12, VAR_10);
      FUNC_0((VAR_9, "LIMIT counter"));
      if( VAR_12==0 ){
        FUNC_11(VAR_9, VAR_8);
      }else if( VAR_12>=0 && VAR_7->nSelectRow>FUNC_7((u64)VAR_12) ){
        VAR_7->nSelectRow = FUNC_7((u64)VAR_12);
        VAR_7->selFlags |= VAR_4;
      }
    }else{
      FUNC_4(VAR_6, VAR_13->pLeft, VAR_10);
      FUNC_8(VAR_9, VAR_2, VAR_10); FUNC_1(VAR_9);
      FUNC_0((VAR_9, "LIMIT counter"));
      FUNC_9(VAR_9, VAR_0, VAR_10, VAR_8); FUNC_1(VAR_9);
    }
    if( VAR_13->pRight ){
      VAR_7->iOffset = VAR_11 = ++VAR_6->nMem;
      VAR_6->nMem++;
      FUNC_4(VAR_6, VAR_13->pRight, VAR_11);
      FUNC_8(VAR_9, VAR_2, VAR_11); FUNC_1(VAR_9);
      FUNC_0((VAR_9, "OFFSET counter"));
      FUNC_10(VAR_9, VAR_3, VAR_10, VAR_11+1, VAR_11);
      FUNC_0((VAR_9, "LIMIT+OFFSET"));
    }
  }
}
