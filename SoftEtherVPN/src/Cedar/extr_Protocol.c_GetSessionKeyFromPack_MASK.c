
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_0 ;

bool FUNC_3(PACK *VAR_1, UCHAR *VAR_2, UINT *VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_1, "session_key") != VAR_0)
 {
  return 0;
 }
 if (FUNC_0(VAR_1, "session_key", VAR_2) == 0)
 {
  return 0;
 }
 *VAR_3 = FUNC_2(VAR_1, "session_key_32");

 return 1;
}
