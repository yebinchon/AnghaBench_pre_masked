
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct core_option {int key; } ;
struct TYPE_9__ {size_t size; TYPE_3__* opts; } ;
typedef TYPE_4__ core_option_manager_t ;
typedef int config_file_t ;
struct TYPE_8__ {size_t index; TYPE_2__* vals; } ;
struct TYPE_7__ {TYPE_1__* elems; } ;
struct TYPE_6__ {int data; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(
      config_file_t *VAR_0,
      core_option_manager_t *VAR_1,
      const char *VAR_2)
{
   size_t VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++)
   {
      struct core_option *VAR_4 = (struct core_option*)&VAR_1->opts[VAR_3];

      if (VAR_4)
         FUNC_0(VAR_0, VAR_4->key,
               VAR_1->opts[VAR_3].vals->elems[VAR_1->opts[VAR_3].index].data);
   }
}
