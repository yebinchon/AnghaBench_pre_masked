
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;
typedef int ELEMENT ;


 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*,int ) ;
 int VAR_0 ;

bool FUNC_4(PACK *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4)
{
 ELEMENT *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }
 FUNC_0(VAR_3, FUNC_1(VAR_5, VAR_4), FUNC_2(VAR_5, VAR_4));
 return 1;
}
