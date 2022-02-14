
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LIST ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

bool FUNC_10(IP *VAR_2)
{
 UINT VAR_3;
 LIST *VAR_4;
 UINT VAR_5;
 bool VAR_6 = 0;
 IP VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (FUNC_4(VAR_2) == 0)
 {
  return 0;
 }
 if (FUNC_7(VAR_2))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 & VAR_1)
 {
  return 1;
 }

 if ((VAR_3 & VAR_0) == 0)
 {
  return 0;
 }

 FUNC_3(&VAR_7, 64);

 VAR_4 = FUNC_1();

 VAR_6 = 0;

 for (VAR_5 = 0;VAR_5 < FUNC_9(VAR_4);VAR_5++)
 {
  IP *VAR_8 = FUNC_8(VAR_4, VAR_5);

  if (FUNC_4(VAR_8))
  {
   if (FUNC_7(VAR_8) == 0)
   {
    if (FUNC_6(VAR_8) == 0)
    {
     if (FUNC_5(VAR_8, VAR_2, &VAR_7))
     {
      VAR_6 = 1;
     }
    }
   }
  }
 }

 FUNC_0(VAR_4);

 return VAR_6;
}
