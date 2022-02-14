
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;


 int FUNC_0 (int *,char*,char*,int ) ;

bool FUNC_1(PACK *VAR_0, char *VAR_1, UINT VAR_2,
           char *VAR_3, UINT VAR_4)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0, "username", VAR_1, VAR_2) == 0)
 {
  return 0;
 }
 if (FUNC_0(VAR_0, "hubname", VAR_3, VAR_4) == 0)
 {
  return 0;
 }
 return 1;
}
