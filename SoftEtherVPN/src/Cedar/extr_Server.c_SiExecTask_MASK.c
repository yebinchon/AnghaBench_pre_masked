
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;
typedef int FARM_TASK ;
typedef int FARM_MEMBER ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;

PACK *FUNC_2(FARM_MEMBER *VAR_0, PACK *VAR_1)
{
 FARM_TASK *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 return FUNC_1(VAR_2);
}
