
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,char*,char*) ;

char *FUNC_2 (char *VAR_1)
{
 static char VAR_2[1024];
 if (!VAR_0)
  FUNC_0 ("ExpandPath called without qdir set");
 if (VAR_1[0] == '/' || VAR_1[0] == '\\' || VAR_1[1] == ':')
  return VAR_1;
 FUNC_1 (VAR_2, "%s%s", VAR_0, VAR_1);
 return VAR_2;
}
