
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SOCK ;


 int * FUNC_0 (int,int) ;

SOCK *FUNC_1(bool VAR_0, bool VAR_1)
{
 UINT VAR_2;
 SOCK *VAR_3;
 for (VAR_2 = 40000;VAR_2 < 65536;VAR_2++)
 {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (VAR_3 != ((void*)0))
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
