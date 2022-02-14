
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,char const*) ;
 int FUNC_2 (char*,char const*) ;

char *FUNC_3 (const char *VAR_2)
{
 static char VAR_3[1024];
 if (!VAR_1)
  FUNC_0 ("ExpandGamePath called without qdir set");
 if (VAR_2[0] == '/' || VAR_2[0] == '\\' || VAR_2[1] == ':') {
  FUNC_2( VAR_3, VAR_2 );
  return VAR_3;
 }
 FUNC_1 (VAR_3, "%s%s", VAR_0, VAR_2);
 return VAR_3;
}
