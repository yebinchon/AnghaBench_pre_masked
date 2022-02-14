
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_9__ {int nMem; } ;
struct TYPE_8__ {int iLimit; double nSelectRow; int iOffset; int pOffset; int pLimit; } ;
typedef TYPE_1__ Select ;
typedef TYPE_2__ Parse ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(Parse *VAR_6, Select *VAR_7, int VAR_8){
  Vdbe *VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11;
  int VAR_12, VAR_13;
  if( VAR_7->iLimit ) return;







  FUNC_3(VAR_6);
  FUNC_2( VAR_7->pOffset==0 || VAR_7->pLimit!=0 );
  if( VAR_7->pLimit ){
    VAR_7->iLimit = VAR_10 = ++VAR_6->nMem;
    VAR_9 = FUNC_6(VAR_6);
    if( FUNC_0(VAR_9==0) ) return;
    if( FUNC_5(VAR_7->pLimit, &VAR_13) ){
      FUNC_8(VAR_9, VAR_4, VAR_13, VAR_10);
      FUNC_1((VAR_9, "LIMIT counter"));
      if( VAR_13==0 ){
        FUNC_8(VAR_9, VAR_1, 0, VAR_8);
      }else{
        if( VAR_7->nSelectRow > (double)VAR_13 ) VAR_7->nSelectRow = (double)VAR_13;
      }
    }else{
      FUNC_4(VAR_6, VAR_7->pLimit, VAR_10);
      FUNC_7(VAR_9, VAR_5, VAR_10);
      FUNC_1((VAR_9, "LIMIT counter"));
      FUNC_8(VAR_9, VAR_3, VAR_10, VAR_8);
    }
    if( VAR_7->pOffset ){
      VAR_7->iOffset = VAR_11 = ++VAR_6->nMem;
      VAR_6->nMem++;
      FUNC_4(VAR_6, VAR_7->pOffset, VAR_11);
      FUNC_7(VAR_9, VAR_5, VAR_11);
      FUNC_1((VAR_9, "OFFSET counter"));
      VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_11);
      FUNC_8(VAR_9, VAR_4, 0, VAR_11);
      FUNC_10(VAR_9, VAR_12);
      FUNC_9(VAR_9, VAR_0, VAR_10, VAR_11, VAR_11+1);
      FUNC_1((VAR_9, "LIMIT+OFFSET"));
      VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_10);
      FUNC_8(VAR_9, VAR_4, -1, VAR_11+1);
      FUNC_10(VAR_9, VAR_12);
    }
  }
}
