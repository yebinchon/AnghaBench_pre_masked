
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int UINT ;
typedef int CEDAR ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,...) ;

char *FUNC_3(CEDAR *VAR_1, UINT VAR_2, bool VAR_3)
{
 char VAR_4[VAR_0];
 char *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2);

 if (VAR_5 == ((void*)0))
 {
  FUNC_2(VAR_4, sizeof(VAR_4), "%u", VAR_2);
 }
 else
 {
  FUNC_2(VAR_4, sizeof(VAR_4), "%s(%u)", VAR_5, VAR_2);
 }

 return FUNC_0(VAR_4);
}
