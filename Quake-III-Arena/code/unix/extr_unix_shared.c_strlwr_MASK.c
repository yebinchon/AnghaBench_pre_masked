
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char FUNC_1 (char) ;

char *FUNC_2 (char *VAR_0) {
  if ( VAR_0==((void*)0) ) {
    FUNC_0(0);
    return VAR_0;
  }
  while (*VAR_0) {
    *VAR_0 = FUNC_1(*VAR_0);
    VAR_0++;
  }
  return VAR_0;
}
