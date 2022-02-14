
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(void) {
 int VAR_3;
 char VAR_4[VAR_1], *VAR_5 = VAR_4;

 while ((VAR_3 = FUNC_0(VAR_2)) != VAR_0 && VAR_3 != ' ' && VAR_3 != '\n' && VAR_3 != '\t')
  if (VAR_5 - VAR_4 < (int)sizeof VAR_4 - 2)
   *VAR_5++ = VAR_3;
 *VAR_5 = 0;
 return VAR_5 == VAR_4 ? (char *)0 : FUNC_1(VAR_4);
}
