
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rarch_main_wrap {char* content_path; char* sram_path; char* state_path; char* config_path; char* libretro_path; scalar_t__ verbose; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(
      const struct rarch_main_wrap *VAR_1,
      int *VAR_2, char **VAR_3)
{
   int VAR_4;

   *VAR_2 = 0;
   VAR_3[(*VAR_2)++] = FUNC_2("retroarch");

   if (VAR_1->content_path)
   {
      FUNC_0("Using content: %s.\n", VAR_1->content_path);
      VAR_3[(*VAR_2)++] = FUNC_2(VAR_1->content_path);
   }
   if (VAR_1->sram_path)
   {
      VAR_3[(*VAR_2)++] = FUNC_2("-s");
      VAR_3[(*VAR_2)++] = FUNC_2(VAR_1->sram_path);
   }

   if (VAR_1->state_path)
   {
      VAR_3[(*VAR_2)++] = FUNC_2("-S");
      VAR_3[(*VAR_2)++] = FUNC_2(VAR_1->state_path);
   }

   if (VAR_1->config_path)
   {
      VAR_3[(*VAR_2)++] = FUNC_2("-c");
      VAR_3[(*VAR_2)++] = FUNC_2(VAR_1->config_path);
   }
   if (VAR_1->verbose)
      VAR_3[(*VAR_2)++] = FUNC_2("-v");

   for (VAR_4 = 0; VAR_4 < *VAR_2; VAR_4++)
      FUNC_0("arg #%d: %s\n", VAR_4, VAR_3[VAR_4]);
}
