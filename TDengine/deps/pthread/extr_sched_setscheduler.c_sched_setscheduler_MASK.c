
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_4 (pid_t VAR_8, int VAR_9)
{







  if (0 != VAR_8)
    {
      int VAR_10 = (int) FUNC_1 ();

      if (VAR_8 != VAR_10)
 {
   HANDLE VAR_11 =
     FUNC_3 (VAR_4, VAR_5, (DWORD) VAR_8);

   if (((void*)0) == VAR_11)
     {
       VAR_7 =
  (FUNC_2 () ==
   (0xFF & VAR_2)) ? VAR_1 : VAR_3;
       return -1;
     }
   else
     FUNC_0(VAR_11);
 }
    }

  if (VAR_6 != VAR_9)
    {
      VAR_7 = VAR_0;
      return -1;
    }





  return VAR_6;
}
