
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {int size; TYPE_1__* elems; } ;
struct TYPE_7__ {int string; } ;
struct TYPE_8__ {TYPE_2__ target; } ;
struct TYPE_9__ {int size; TYPE_3__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
struct TYPE_6__ {int data; } ;


 struct string_list* FUNC_0 () ;
 int FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(rarch_setting_t *VAR_0, bool VAR_1)
{
   struct string_list *VAR_2 = FUNC_0();

   if (VAR_2 && VAR_2->size > 1)
   {
      int VAR_3 = FUNC_1(VAR_2, VAR_0->value.target.string);

      if (VAR_1 && VAR_3 == (int)VAR_2->size)
         VAR_3 = 0;
      if (VAR_3 >= 0 && VAR_3 < (int)VAR_2->size)
      {
         FUNC_2(VAR_0->value.target.string,
               VAR_2->elems[VAR_3].data, VAR_0->size);
         return 0;
      }
   }

   return -1;
}
