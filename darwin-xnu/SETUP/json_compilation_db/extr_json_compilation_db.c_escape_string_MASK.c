
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0);
 size_t VAR_2, VAR_3;
 char *VAR_4 = FUNC_0(VAR_1 * 4 + 1);

 for (VAR_2=0, VAR_3=0; VAR_2 < VAR_1; VAR_2++) {
  char VAR_5 = VAR_0[VAR_2];

  if (VAR_5 == '\\' || VAR_5 == '"') {
   VAR_4[VAR_3++] = '\\';
   VAR_4[VAR_3++] = '\\';
   VAR_4[VAR_3++] = '\\';
  }
  VAR_4[VAR_3++] = VAR_5;
 }

 VAR_4[VAR_3] = '\0';

 return VAR_4;
}
