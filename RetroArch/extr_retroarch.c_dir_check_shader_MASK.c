
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rarch_dir_list {int ptr; TYPE_2__* list; } ;
struct TYPE_4__ {int size; TYPE_1__* elems; } ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(bool VAR_1, bool VAR_2)
{
   struct rarch_dir_list *VAR_3 = (struct rarch_dir_list*)&VAR_0;
   static bool VAR_4 = 0;

   if (!VAR_3 || !VAR_3->list)
      return;

   if (VAR_1)
   {
      if (VAR_4)
         VAR_3->ptr = (VAR_3->ptr + 1) %
            VAR_3->list->size;
   }
   else if (VAR_2)
   {
      if (VAR_3->ptr == 0)
         VAR_3->ptr = VAR_3->list->size - 1;
      else
         VAR_3->ptr--;
   }
   else
      return;
   VAR_4 = 1;

   FUNC_0(VAR_3->list->elems[VAR_3->ptr].data);
}
