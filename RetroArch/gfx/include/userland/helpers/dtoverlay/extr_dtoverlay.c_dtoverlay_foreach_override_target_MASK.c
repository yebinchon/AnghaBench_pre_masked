
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* override_callback_t ) (int,TYPE_1__*,int,char*,int,int,int,void*) ;
struct TYPE_5__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int*,char const**,int*,char const**,int*,int*,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;

int FUNC_7(DTBLOB_T *VAR_2, const char *VAR_3,
          const char *VAR_4, int VAR_5,
          override_callback_t VAR_6,
          void *VAR_7)
{
   int VAR_8 = 0;
   int VAR_9 = 0;
   char *VAR_10;



   if (!VAR_5)
      return 0;


   VAR_10 = FUNC_5(VAR_5);
   if (!VAR_10)
   {
      FUNC_1("  out of memory");
      return FUNC_0(VAR_1);
   }

   FUNC_6(VAR_10, VAR_4, VAR_5);
   VAR_4 = VAR_10;

   while (VAR_8 == 0)
   {
      const char *VAR_11 = ((void*)0);
      char *VAR_12 = ((void*)0);
      int VAR_13 = 0;
      int VAR_14 = 0;
      int VAR_15 = 0;
      int VAR_16;
      int VAR_17 = 0;

      VAR_16 = FUNC_2(VAR_3,
                                                &VAR_9,
                                                &VAR_4, &VAR_5,
                                                &VAR_11, &VAR_13,
                                                &VAR_14, &VAR_15);



      if (VAR_9 != 0)
      {
         VAR_17 = FUNC_3(VAR_2->fdt, VAR_9);
         if (VAR_17 < 0)
         {
            FUNC_1("  phandle %d not found", VAR_9);
            VAR_8 = FUNC_0(VAR_17);
            break;
         }
      }

      if (VAR_11)
      {

         VAR_12 = FUNC_5(VAR_13 + 1);
         if (!VAR_12)
         {
            FUNC_1("  out of memory");
            VAR_8 = FUNC_0(VAR_1);
            break;
         }
         FUNC_6(VAR_12, VAR_11, VAR_13);
         VAR_12[VAR_13] = '\0';
      }

      VAR_8 = VAR_6(VAR_16, VAR_2, VAR_17, VAR_12,
       VAR_9, VAR_14, VAR_15,
       VAR_7);

      if (VAR_12)
         FUNC_4(VAR_12);

      if (VAR_16 == VAR_0)
         break;
   }

   FUNC_4(VAR_10);

   return VAR_8;
}
