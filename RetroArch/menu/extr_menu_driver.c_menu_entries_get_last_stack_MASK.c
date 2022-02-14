
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int enum_idx; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_8__ {int size; TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
struct TYPE_6__ {scalar_t__ actiondata; } ;


 int FUNC_0 (TYPE_3__*,char const**,char const**,unsigned int*,size_t*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,int ) ;

void FUNC_2(const char **VAR_1, const char **VAR_2,
      unsigned *VAR_3, enum msg_hash_enums *VAR_4, size_t *VAR_5)
{
   file_list_t *VAR_6 = ((void*)0);
   if (!VAR_0)
      return;

   VAR_6 = FUNC_1(VAR_0, 0);

   FUNC_0(VAR_6,
         VAR_1, VAR_2, VAR_3, VAR_5);

   if (VAR_4)
   {
      menu_file_list_cbs_t *VAR_7 = (menu_file_list_cbs_t*)
         VAR_6->list[VAR_6->size - 1].actiondata;

      if (VAR_7)
         *VAR_4 = VAR_7->enum_idx;
   }
}
