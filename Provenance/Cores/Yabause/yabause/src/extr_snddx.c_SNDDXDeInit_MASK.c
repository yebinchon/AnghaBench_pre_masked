
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

void FUNC_4(void)
{
   DWORD VAR_4=0;

   if (VAR_3)
   {
      FUNC_1(VAR_3, &VAR_4);

      if(VAR_4 == VAR_0)
         FUNC_3(VAR_3);

      FUNC_2(VAR_3);
      VAR_3 = ((void*)0);
   }

   if (VAR_2)
   {
      FUNC_2(VAR_2);
      VAR_2 = ((void*)0);
   }

   if (VAR_1)
   {
      FUNC_0(VAR_1);
      VAR_1 = ((void*)0);
   }
}
