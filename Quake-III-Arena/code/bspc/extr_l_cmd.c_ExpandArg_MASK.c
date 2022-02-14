
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

char *FUNC_3 (char *VAR_0)
{
 static char VAR_1[1024];

 if (VAR_0[0] != '/' && VAR_0[0] != '\\' && VAR_0[1] != ':')
 {
  FUNC_0 (VAR_1);
  FUNC_1 (VAR_1, VAR_0);
 }
 else
  FUNC_2 (VAR_1, VAR_0);
 return VAR_1;
}
