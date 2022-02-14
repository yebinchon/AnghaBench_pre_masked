
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yColCache {int iReg; scalar_t__ tempReg; } ;
struct TYPE_3__ {struct yColCache* aColCache; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Parse *VAR_1, int VAR_2){
  int VAR_3;
  struct yColCache *VAR_4;
  for(VAR_3=0, VAR_4=VAR_1->aColCache; VAR_3<VAR_0; VAR_3++, VAR_4++){
    if( VAR_4->iReg==VAR_2 ){
      VAR_4->tempReg = 0;
    }
  }
}
