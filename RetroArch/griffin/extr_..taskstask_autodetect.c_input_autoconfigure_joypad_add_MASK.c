
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int retro_task_t ;
typedef int msg ;
typedef int display_name ;
typedef int device_type ;
struct TYPE_8__ {char* path; } ;
typedef TYPE_1__ config_file_t ;
struct TYPE_9__ {size_t idx; char* name; } ;
typedef TYPE_2__ autoconfig_params_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int*) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,char const*,char*,size_t) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void FUNC_17(config_file_t *VAR_4,
      autoconfig_params_t *VAR_5, retro_task_t *VAR_6)
{
   char VAR_7[128], VAR_8[128], VAR_9[128];


   bool VAR_10 =



      VAR_3[VAR_5->idx]
      && !FUNC_11(VAR_5->name);


   VAR_7[0] = VAR_8[0] = VAR_9[0] = '\0';

   FUNC_0(VAR_4, "input_device_display_name",
         VAR_8, sizeof(VAR_8));
   FUNC_0(VAR_4, "input_device_type", VAR_9,
         sizeof(VAR_9));

   VAR_3[VAR_5->idx] = 1;

   FUNC_2(VAR_4,
         VAR_1[VAR_5->idx]);

   if (FUNC_12(VAR_9, "remote"))
   {
      static bool VAR_11 = 0;
      const char *VAR_12 = (FUNC_11(VAR_8) &&
            !FUNC_11(VAR_5->name)) ? VAR_5->name : (!FUNC_11(VAR_8) ? VAR_8 : "N/A");
      FUNC_14(VAR_7, VAR_12, sizeof(VAR_7));
      FUNC_13(VAR_7, " configured.", sizeof(VAR_7));

      if (!VAR_11)
      {
         FUNC_15(VAR_6);
         FUNC_16(VAR_6, FUNC_10(VAR_7));
      }
      VAR_11 = 1;
      if (VAR_5->idx == 0)
         VAR_2 = 1;
   }
   else
   {
      bool VAR_13 = 0;
      const char *VAR_14 = (FUNC_11(VAR_8) &&
            !FUNC_11(VAR_5->name))
            ? VAR_5->name : (!FUNC_11(VAR_8) ? VAR_8 : "N/A");

      FUNC_9(VAR_7, sizeof(VAR_7), "%s %s #%u.",
            VAR_14,
            FUNC_7(VAR_0),
            VAR_5->idx);


      if (VAR_5->idx == 0)
      {
         if (FUNC_1(VAR_4, "input_swap_override", &VAR_13))
            VAR_2 = VAR_13;
         else
            VAR_2 = 0;
      }

      if (!VAR_10)
      {
         FUNC_15(VAR_6);
         FUNC_16(VAR_6, FUNC_10(VAR_7));
      }
   }
   if (!FUNC_11(VAR_8))
      FUNC_6(VAR_5->idx, VAR_8);
   else
      FUNC_6(VAR_5->idx, VAR_5->name);
   if (!FUNC_11(VAR_4->path))
   {
      FUNC_4(VAR_5->idx, FUNC_8(VAR_4->path));
      FUNC_5(VAR_5->idx, VAR_4->path);
   }
   else
   {
      FUNC_4(VAR_5->idx, "N/A");
      FUNC_5(VAR_5->idx, "N/A");
   }

   FUNC_3();
}
