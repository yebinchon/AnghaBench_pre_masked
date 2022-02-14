
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;

void FUNC_3(PACK *VAR_0)
{
 BUF *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_2(VAR_0, "DynList");
 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1);

 FUNC_1(VAR_1);
}
