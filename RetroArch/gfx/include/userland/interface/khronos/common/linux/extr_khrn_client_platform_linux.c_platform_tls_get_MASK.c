
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLATFORM_TLS_T ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (int ) ;

void *FUNC_6(PLATFORM_TLS_T VAR_3)
{
   void *VAR_4;

   if (!VAR_2)

   {
      FUNC_3("Attaching process");
      FUNC_0();
      VAR_2 = 1;
      VAR_3 = VAR_1;

      FUNC_2();
   }

   VAR_4 = FUNC_5(VAR_3);
   if (!VAR_4)
   {






      FUNC_1();
      FUNC_4(VAR_0, ((void*)0));
      VAR_4 = FUNC_5(VAR_3);
   }
   return VAR_4;
}
