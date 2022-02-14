
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0) {
 char *VAR_1 = FUNC_0(VAR_0, ';');

 if (VAR_1) {
  char VAR_2[1024];
  FUNC_1(VAR_2, VAR_0, VAR_1-VAR_0);
  VAR_2[VAR_1-VAR_0] = '\0';
  return FUNC_2(VAR_2);
 } else
  return VAR_0;
}
