
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char * FUNC_2(char *VAR_0, UINT VAR_1) {
 char *VAR_2 = (char*)FUNC_0(VAR_1 + 1);
 if (!VAR_2) {
  return ((void*)0);
 }
 VAR_2[VAR_1] = '\0';
 FUNC_1(VAR_2, VAR_0, VAR_1);
 return VAR_2;
}
