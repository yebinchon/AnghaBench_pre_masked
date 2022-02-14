
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;


 int FUNC_0 (int *,char*,void*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 scalar_t__ VAR_0 ;

bool FUNC_4(PACK *VAR_1, void *VAR_2, UINT *VAR_3, UINT *VAR_4, char *VAR_5, UINT VAR_6)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_3(VAR_1, "hello", VAR_5, VAR_6) == 0)
 {
  return 0;
 }
 *VAR_3 = FUNC_2(VAR_1, "version");
 *VAR_4 = FUNC_2(VAR_1, "build");
 if (FUNC_1(VAR_1, "random") != VAR_0)
 {
  return 0;
 }
 if (FUNC_0(VAR_1, "random", VAR_2) == 0)
 {
  return 0;
 }

 return 1;
}
