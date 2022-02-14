
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,char*) ;

char *FUNC_1(const char *VAR_1, const char *VAR_2, int VAR_3) {
 char VAR_4[VAR_0];
 int VAR_5;

 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
  VAR_4[VAR_5] = VAR_2[VAR_5] + VAR_3;
 }
 VAR_4[VAR_5] = '\0';
 return FUNC_0(VAR_1, VAR_4);
}
