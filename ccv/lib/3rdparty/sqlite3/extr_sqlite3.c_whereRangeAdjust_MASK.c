
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ truthProb; int wtFlags; } ;
typedef TYPE_1__ WhereTerm ;
typedef int LogEst ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static LogEst FUNC_2(WhereTerm *VAR_1, LogEst VAR_2){
  LogEst VAR_3 = VAR_2;
  if( VAR_1 ){
    if( VAR_1->truthProb<=0 ){
      VAR_3 += VAR_1->truthProb;
    }else if( (VAR_1->wtFlags & VAR_0)==0 ){
      VAR_3 -= 20; FUNC_0( 20==FUNC_1(4) );
    }
  }
  return VAR_3;
}
