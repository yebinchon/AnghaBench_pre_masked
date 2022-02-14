
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(Vdbe *VAR_1){
  if( VAR_1==0 ){
    FUNC_0(VAR_0, "API called with NULL prepared statement");
    return 1;
  }else{
    return FUNC_1(VAR_1);
  }
}
