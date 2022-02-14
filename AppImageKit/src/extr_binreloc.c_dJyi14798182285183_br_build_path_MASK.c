
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char const*) ;

char *
FUNC_3 (const char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_2 (VAR_0);
 if (VAR_4 > 0 && VAR_0[VAR_4 - 1] != '/') {
  VAR_2 = FUNC_0 (VAR_0, "/");
  VAR_5 = 1;
 } else
  VAR_2 = (char *) VAR_0;

 VAR_3 = FUNC_0 (VAR_2, VAR_1);
 if (VAR_5)
  FUNC_1 (VAR_2);
 return VAR_3;
}
