
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_file_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int *,char*,int ,int) ;
 int * VAR_3 ;
 int FUNC_9 (char const*) ;

bool FUNC_10(config_file_t *VAR_4, const char *VAR_5, bool VAR_6)
{
   if (!FUNC_9(VAR_5))
   {







      void* VAR_7 = ((void*)0);
      FILE *VAR_8 = (FILE*)FUNC_4(VAR_5, "wb");
      if (!VAR_8)
         return 0;



      VAR_7 = FUNC_0(1, 0x4000);
      FUNC_8(VAR_8, (char*)VAR_7, VAR_2, 0x4000);


      FUNC_1(VAR_4, VAR_8, VAR_6);

      if (VAR_8 != VAR_3)
         FUNC_3(VAR_8);
      if (VAR_7)
         FUNC_5(VAR_7);

   }
   else
      FUNC_1(VAR_4, VAR_3, VAR_6);

   return 1;
}
