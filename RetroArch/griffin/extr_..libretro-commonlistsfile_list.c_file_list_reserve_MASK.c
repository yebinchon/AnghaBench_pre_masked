
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct item_file {int dummy; } ;
struct TYPE_3__ {size_t capacity; struct item_file* list; } ;
typedef TYPE_1__ file_list_t ;


 int FUNC_0 (struct item_file*,int ,size_t const) ;
 scalar_t__ FUNC_1 (struct item_file*,size_t) ;

bool FUNC_2(file_list_t *VAR_0, size_t VAR_1)
{
   const size_t VAR_2 = sizeof(struct item_file);
   struct item_file *VAR_3;

   if (VAR_1 < VAR_0->capacity || VAR_1 > (size_t)-1/VAR_2)
      return 0;

   VAR_3 = (struct item_file*)FUNC_1(VAR_0->list, VAR_1 * VAR_2);

   if (!VAR_3)
      return 0;

   FUNC_0(&VAR_3[VAR_0->capacity], 0, VAR_2 * (VAR_1 - VAR_0->capacity));

   VAR_0->list = VAR_3;
   VAR_0->capacity = VAR_1;

   return 1;
}
