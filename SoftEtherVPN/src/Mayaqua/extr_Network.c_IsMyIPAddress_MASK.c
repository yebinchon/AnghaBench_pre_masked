
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

bool FUNC_5(IP *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_2();

 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_1);VAR_2++)
 {
  IP *VAR_4 = FUNC_3(VAR_1, VAR_2);

  if (FUNC_0(VAR_0, VAR_4) == 0)
  {
   VAR_3 = 1;
   break;
  }
 }

 FUNC_1(VAR_1);

 return VAR_3;
}
