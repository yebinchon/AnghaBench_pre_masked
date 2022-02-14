
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;

const char *FUNC_2(const char *VAR_0, const char *VAR_1){
  if( VAR_0==0 ) return 0;
  VAR_0 += FUNC_0(VAR_0) + 1;
  while( VAR_0[0] ){
    int VAR_2 = FUNC_1(VAR_0, VAR_1);
    VAR_0 += FUNC_0(VAR_0) + 1;
    if( VAR_2==0 ) return VAR_0;
    VAR_0 += FUNC_0(VAR_0) + 1;
  }
  return 0;
}
