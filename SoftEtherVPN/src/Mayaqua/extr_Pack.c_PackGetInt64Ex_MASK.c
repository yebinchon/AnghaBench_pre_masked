
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;
typedef int PACK ;
typedef int ELEMENT ;


 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

UINT64 FUNC_2(PACK *VAR_1, char *VAR_2, UINT VAR_3)
{
 ELEMENT *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }
 return FUNC_1(VAR_4, VAR_3);
}
