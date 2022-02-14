
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_keybind {scalar_t__ valid; } ;
struct TYPE_6__ {char* input_joypad_driver; } ;
struct TYPE_5__ {char* directory_autoconfig; } ;
struct TYPE_7__ {TYPE_2__ arrays; TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ int32_t ;
typedef int config_file_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (char*,char const*,char const*,size_t) ;
 int FUNC_8 (char*,char*,char*,size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned int) ;
 struct retro_keybind** VAR_2 ;
 char const* FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 int FUNC_14 (int *,char*,int ,struct retro_keybind const*,int) ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (char*) ;
 char* FUNC_17 (char const*) ;
 char* FUNC_18 (char*,scalar_t__) ;

bool FUNC_19(const char *VAR_4, unsigned VAR_5)
{
   unsigned VAR_6;
   config_file_t *VAR_7 = ((void*)0);
   size_t VAR_8 = VAR_0 * sizeof(char);
   int32_t VAR_9 = 0;
   int32_t VAR_10 = 0;
   bool VAR_11 = 0;
   settings_t *VAR_12 = FUNC_4();
   const char *VAR_13 = VAR_12->paths.directory_autoconfig;
   const char *VAR_14 = VAR_12->arrays.input_joypad_driver;
   char *VAR_15 = (char*)
      FUNC_15(VAR_0 * sizeof(char));
   char *VAR_16 = (char*)
      FUNC_15(VAR_0 * sizeof(char));
   char *VAR_17 = FUNC_17(VAR_4);
   VAR_15[0] = VAR_16[0] = '\0';

   for (VAR_6 = 0; VAR_3[VAR_6]; VAR_6++)
   {
      while (1)
      {
         char *VAR_18 = FUNC_18(VAR_17, VAR_3[VAR_6]);

         if (VAR_18)
            *VAR_18 = '_';
         else
            break;
      }
   }

   VAR_4 = VAR_17;

   FUNC_7(VAR_15, VAR_13, VAR_14, VAR_8);

   if (FUNC_16(VAR_15))
   {
      char *VAR_19 = (char*)FUNC_15(VAR_0 * sizeof(char));

      VAR_19[0] = '\0';

      FUNC_7(VAR_19, VAR_15,
            VAR_4, VAR_8);
      FUNC_8(VAR_16, VAR_19,
            ".cfg",
            VAR_8);

      FUNC_9(VAR_19);
   }
   else
   {
      FUNC_7(VAR_15, VAR_13,
            VAR_4, VAR_8);
      FUNC_8(VAR_16, VAR_15,
            ".cfg",
            VAR_8);
   }

   FUNC_9(VAR_15);
   FUNC_9(VAR_17);

   VAR_7 = FUNC_2(VAR_16);

   if (!VAR_7)
   {
      VAR_7 = FUNC_1();
      if (!VAR_7)
      {
         FUNC_9(VAR_16);
         return 0;
      }
   }

   FUNC_6(VAR_7, "input_driver",
         VAR_14);
   FUNC_6(VAR_7, "input_device",
         FUNC_11(VAR_5));

   VAR_9 = FUNC_12(VAR_5);
   VAR_10 = FUNC_13(VAR_5);

   if (VAR_9 && VAR_10)
   {
      FUNC_5(VAR_7, "input_vendor_id",
            VAR_10);
      FUNC_5(VAR_7, "input_product_id",
            VAR_9);
   }

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
      const struct retro_keybind *VAR_20 = &VAR_2[VAR_5][VAR_6];
      if (VAR_20->valid)
         FUNC_14(
               VAR_7, "input", FUNC_10(VAR_6),
               VAR_20, 0);
   }

   VAR_11 = FUNC_3(VAR_7, VAR_16, 0);

   FUNC_0(VAR_7);
   FUNC_9(VAR_16);
   return VAR_11;
}
