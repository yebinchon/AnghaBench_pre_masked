
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yColCache {int iReg; scalar_t__ tempReg; } ;
struct TYPE_3__ {int nColCache; struct yColCache* aColCache; } ;
typedef TYPE_1__ Parse ;



__attribute__((used)) static void FUNC_0(Parse *VAR_0, int VAR_1){
  int VAR_2;
  struct yColCache *VAR_3;
  for(VAR_2=0, VAR_3=VAR_0->aColCache; VAR_2<VAR_0->nColCache; VAR_2++, VAR_3++){
    if( VAR_3->iReg==VAR_1 ){
      VAR_3->tempReg = 0;
    }
  }
}
