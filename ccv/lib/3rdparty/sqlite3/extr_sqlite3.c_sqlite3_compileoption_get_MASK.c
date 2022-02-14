
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int*) ;

const char *FUNC_1(int VAR_0){
  int VAR_1;
  const char **VAR_2;
  VAR_2 = FUNC_0(&VAR_1);
  if( VAR_0>=0 && VAR_0<VAR_1 ){
    return VAR_2[VAR_0];
  }
  return 0;
}
