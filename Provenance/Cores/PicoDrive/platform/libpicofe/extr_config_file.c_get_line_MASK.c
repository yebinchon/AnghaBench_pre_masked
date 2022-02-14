
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, size_t VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;

 for (VAR_3 = VAR_2; *VAR_3 != '\r' && *VAR_3 != '\n' && *VAR_3 != 0; VAR_3++)
  ;
 VAR_4 = VAR_3 - VAR_2;
 if (VAR_4 > VAR_1 - 1)
  VAR_4 = VAR_1 - 1;
 FUNC_1(VAR_0, VAR_2, VAR_4);
 VAR_0[VAR_4] = 0;

 FUNC_0(VAR_0);
}
