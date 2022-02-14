
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int game_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const**,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(const char *VAR_3, bool VAR_4)
{

   bool VAR_5 = FUNC_10();
   FUNC_9();


   (void)VAR_4;

   FUNC_0("Attempt to load executable: [%s].\n", VAR_3);


   if (VAR_4 && !FUNC_4(VAR_2))
   {
      char VAR_6[256];
      FUNC_6(VAR_6, FUNC_3(VAR_2), sizeof(VAR_6));

      const char * const VAR_7[] = {
         VAR_6,
         ((void*)0)
      };

      FUNC_2(VAR_3,
            (const char** const)VAR_7, ((void*)0));
   }
   else

   {
      FUNC_2(VAR_3,
            ((void*)0), ((void*)0));
   }

   FUNC_5();
   FUNC_7();
   FUNC_1(VAR_1);
   FUNC_1(VAR_0);


   if (VAR_5)
      FUNC_9();
   else
      FUNC_8();

}
