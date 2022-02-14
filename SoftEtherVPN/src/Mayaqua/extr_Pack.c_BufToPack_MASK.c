
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

PACK *FUNC_3(BUF *VAR_0)
{
 PACK *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1();
 if (FUNC_2(VAR_0, VAR_1) == 0)
 {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
