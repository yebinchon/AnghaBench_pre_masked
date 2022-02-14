
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int POLICY ;
typedef int PACK ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*,int ) ;

bool FUNC_2(PACK *VAR_0, char *VAR_1, UINT VAR_2,
        char *VAR_3, UINT VAR_4,
        POLICY **VAR_5)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_1(VAR_0, "session_name", VAR_1, VAR_2) == 0)
 {
  return 0;
 }


 if (FUNC_1(VAR_0, "connection_name", VAR_3, VAR_4) == 0)
 {
  return 0;
 }


 *VAR_5 = FUNC_0(VAR_0);
 if (*VAR_5 == ((void*)0))
 {
  return 0;
 }

 return 1;
}
