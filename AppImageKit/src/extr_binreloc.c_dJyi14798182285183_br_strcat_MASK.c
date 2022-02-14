
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

char *
FUNC_3 (const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3, VAR_4;

 if (VAR_0 == ((void*)0))
  VAR_0 = "";
 if (VAR_1 == ((void*)0))
  VAR_1 = "";

 VAR_3 = FUNC_2 (VAR_0);
 VAR_4 = FUNC_2 (VAR_1);

 VAR_2 = (char *) FUNC_0 (VAR_3 + VAR_4 + 1);
 FUNC_1 (VAR_2, VAR_0, VAR_3);
 FUNC_1 (VAR_2 + VAR_3, VAR_1, VAR_4);
 VAR_2[VAR_3 + VAR_4] = '\0';

 return VAR_2;
}
