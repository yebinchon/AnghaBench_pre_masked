
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct string_list {unsigned int size; TYPE_2__* elems; } ;
struct retro_subsystem_info {TYPE_1__* roms; } ;
struct TYPE_7__ {int block_extract; int need_fullpath; scalar_t__ set_supports_no_game_enable; } ;
typedef TYPE_3__ content_information_ctx_t ;
struct TYPE_6__ {char* data; } ;
struct TYPE_5__ {int block_extract; int need_fullpath; int required; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 char* FUNC_1 (int ) ;
 struct string_list* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct string_list*,char*,union string_list_elem_attr) ;

__attribute__((used)) static void FUNC_5(
      struct string_list *VAR_2,
      const struct retro_subsystem_info *VAR_3,
      content_information_ctx_t *VAR_4,
      char **VAR_5,
      union string_list_elem_attr *VAR_6)
{
   struct string_list *VAR_7 = FUNC_2();

   VAR_6->i = 0;

   if (!FUNC_3(VAR_1) && VAR_3)
   {
      unsigned VAR_8;

      for (VAR_8 = 0; VAR_8 < VAR_7->size; VAR_8++)
      {
         VAR_6->i = VAR_3->roms[VAR_8].block_extract;
         VAR_6->i |= VAR_3->roms[VAR_8].need_fullpath << 1;
         VAR_6->i |= VAR_3->roms[VAR_8].required << 2;

         FUNC_4(VAR_2, VAR_7->elems[VAR_8].data, *VAR_6);
      }
   }
   else
   {
      bool VAR_9 = 0;
      bool VAR_10 = 0;
      bool VAR_11 = FUNC_3(VAR_0);

      FUNC_0(&VAR_9, &VAR_10);

      VAR_6->i = VAR_4->block_extract;
      VAR_6->i |= VAR_4->need_fullpath << 1;
      VAR_6->i |= (!VAR_9) << 2;

      if (VAR_11
            && VAR_9
            && VAR_4->set_supports_no_game_enable)
         FUNC_4(VAR_2, "", *VAR_6);
      else if (!VAR_11)
         FUNC_4(VAR_2, FUNC_1(VAR_0), *VAR_6);
   }
}
