
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 char* FUNC_0 (char**,int ) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2(char **VAR_2, const char **VAR_3) {
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 && VAR_4[0] != 0) {
  *(VAR_3) = FUNC_1(VAR_4);
  return VAR_1;
 }
 return VAR_0;
}
