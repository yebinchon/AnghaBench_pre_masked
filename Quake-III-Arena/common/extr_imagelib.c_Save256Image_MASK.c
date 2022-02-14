
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int *,int,int,int *) ;
 int FUNC_4 (char const*,int *,int,int,int *) ;

void FUNC_5 (const char *VAR_0, byte *VAR_1, byte *VAR_2,
       int VAR_3, int VAR_4)
{
 char VAR_5[128];

 FUNC_1 (VAR_0, VAR_5);
 if (!FUNC_2 (VAR_5, "lbm"))
 {
  FUNC_3 (VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
 }
 else if (!FUNC_2 (VAR_5, "pcx"))
 {
  FUNC_4 (VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
 }
 else
  FUNC_0 ("%s doesn't have a known image extension", VAR_0);
}
