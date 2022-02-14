
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rarch_main_wrap {int touched; int * libretro_path; int * content_path; int * state_path; int * sram_path; int * config_path; int verbose; int no_content; } ;
struct TYPE_3__ {int load_no_content; } ;
typedef TYPE_1__ rarch_system_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(int *VAR_7, char *VAR_8[],
      void *VAR_9, void *VAR_10)
{
   struct rarch_main_wrap *VAR_11 = (struct rarch_main_wrap*)VAR_10;
   rarch_system_info_t *VAR_12 = FUNC_5();

   if (!VAR_11)
      return;

   VAR_11->no_content = VAR_12->load_no_content;

   if (!FUNC_4(VAR_3, ((void*)0)))
      VAR_11->verbose = FUNC_7();

   VAR_11->touched = 1;
   VAR_11->config_path = ((void*)0);
   VAR_11->sram_path = ((void*)0);
   VAR_11->state_path = ((void*)0);
   VAR_11->content_path = ((void*)0);

   if (!FUNC_3(VAR_4))
      VAR_11->config_path = FUNC_2(VAR_4);
   if (!FUNC_1(VAR_0))
      VAR_11->sram_path = FUNC_0(VAR_0);
   if (!FUNC_1(VAR_1))
      VAR_11->state_path = FUNC_0(VAR_1);
   if (!FUNC_3(VAR_5))
      VAR_11->content_path = FUNC_2(VAR_5);
   if (!FUNC_4(VAR_2, ((void*)0)))
      VAR_11->libretro_path = FUNC_6(FUNC_2(VAR_6)) ? ((void*)0) :
         FUNC_2(VAR_6);

}
