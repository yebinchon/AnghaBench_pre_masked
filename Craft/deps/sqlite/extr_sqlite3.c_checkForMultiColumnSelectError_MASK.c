
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eDest; } ;
typedef TYPE_1__ SelectDest ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(
  Parse *VAR_2,
  SelectDest *VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_3->eDest;
  if( VAR_4>1 && (VAR_5==VAR_0 || VAR_5==VAR_1) ){
    FUNC_0(VAR_2, "only a single result allowed for "
       "a SELECT that is part of an expression");
    return 1;
  }else{
    return 0;
  }
}
