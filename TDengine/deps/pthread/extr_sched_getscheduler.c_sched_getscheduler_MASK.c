
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
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_4 (pid_t VAR_7)
{





  if (0 != VAR_7)
    {
      int VAR_8 = (int) FUNC_1 ();

      if (VAR_7 != VAR_8)
 {
   HANDLE VAR_9 =
     FUNC_3 (VAR_3, VAR_4, (DWORD) VAR_7);

   if (((void*)0) == VAR_9)
     {
       VAR_6 =
  (FUNC_2 () ==
   (0xFF & VAR_1)) ? VAR_0 : VAR_2;
       return -1;
     }
   else
     FUNC_0(VAR_9);
 }
    }

  return VAR_5;
}
