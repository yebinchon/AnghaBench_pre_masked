
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD_PTR ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int*,int*) ;

int
FUNC_2 (int *VAR_1)
{
  DWORD_PTR VAR_2;
  DWORD_PTR VAR_3;
  int VAR_4 = 0;







  if (FUNC_1 (FUNC_0 (),
         &VAR_2, &VAR_3))
    {
      DWORD_PTR VAR_5;
      int VAR_6 = 0;

      for (VAR_5 = 1; VAR_5 != 0; VAR_5 <<= 1)
 {
   if (VAR_2 & VAR_5)
     {
       VAR_6++;
     }
 }
      *VAR_1 = VAR_6;
    }
  else
    {
      VAR_4 = VAR_0;
    }



  return (VAR_4);
}
