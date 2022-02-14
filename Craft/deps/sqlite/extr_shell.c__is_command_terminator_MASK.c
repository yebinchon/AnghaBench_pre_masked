
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0){
  while( FUNC_0(VAR_0[0]) ){ VAR_0++; };
  if( VAR_0[0]=='/' && FUNC_2(&VAR_0[1]) ){
    return 1;
  }
  if( FUNC_1(VAR_0[0])=='g' && FUNC_1(VAR_0[1])=='o'
         && FUNC_2(&VAR_0[2]) ){
    return 1;
  }
  return 0;
}
