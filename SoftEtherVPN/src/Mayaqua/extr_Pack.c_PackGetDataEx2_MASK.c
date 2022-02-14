
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int PACK ;
typedef int ELEMENT ;


 int FUNC_0 (void*,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int *,char*,int ) ;
 int VAR_0 ;

bool FUNC_4(PACK *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4, UINT VAR_5)
{
 ELEMENT *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }
 if (FUNC_2(VAR_6, VAR_5) != VAR_4)
 {
  return 0;
 }
 FUNC_0(VAR_3, FUNC_1(VAR_6, VAR_5), FUNC_2(VAR_6, VAR_5));
 return 1;
}
