
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_2 (char*,char*,char*,char const*) ;

char *FUNC_3 (const char *VAR_2)
{
 char *VAR_3;
 char VAR_4[1024];

 VAR_3 = FUNC_0 (VAR_2);

 if (VAR_0)
 {
  FUNC_2 (VAR_4, "%s/%s", VAR_1, VAR_2);
  FUNC_1 (VAR_3, VAR_4);
 }
 return VAR_3;
}
