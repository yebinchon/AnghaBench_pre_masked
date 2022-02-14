
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int secondary; int primary; } ;
struct TYPE_7__ {TYPE_1__ thumbnails; } ;
typedef TYPE_2__ materialui_node_t ;
struct TYPE_8__ {unsigned int size; } ;
typedef TYPE_3__ file_list_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,unsigned int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
   file_list_t *VAR_0 = FUNC_1(0);
   unsigned VAR_1;

   if (!VAR_0)
      return;


   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      materialui_node_t *VAR_2 = (materialui_node_t*)
            FUNC_0(VAR_0, VAR_1);

      if (!VAR_2)
         continue;

      FUNC_2(&VAR_2->thumbnails.primary);
      FUNC_2(&VAR_2->thumbnails.secondary);
   }
}
