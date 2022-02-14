
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {TYPE_1__* elems; scalar_t__ size; } ;
struct TYPE_7__ {int* integer; } ;
struct TYPE_8__ {TYPE_2__ target; } ;
struct TYPE_9__ {TYPE_3__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
struct TYPE_6__ {char* data; } ;


 int FUNC_0 (char*,size_t,char*,size_t,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 struct string_list* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   if (VAR_0)
   {
      struct string_list *VAR_3 = FUNC_3(FUNC_2());

      if (VAR_3 && (*VAR_0->value.target.integer < (int)VAR_3->size) && !FUNC_1(VAR_3->elems[*VAR_0->value.target.integer].data))
         FUNC_0(VAR_1, VAR_2, "%d - %s", *VAR_0->value.target.integer, VAR_3->elems[*VAR_0->value.target.integer].data);
      else
         FUNC_0(VAR_1, VAR_2, "%d", *VAR_0->value.target.integer);
   }
}
