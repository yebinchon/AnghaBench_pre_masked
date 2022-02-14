
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
typedef int ssid ;
struct TYPE_4__ {unsigned int size; TYPE_1__* elems; } ;
struct TYPE_3__ {char* data; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct string_list* VAR_2)
{
   unsigned VAR_3;
   union string_list_elem_attr VAR_4;
   VAR_4.i = VAR_0;

   if (!VAR_1)
      return;

   for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++)
   {
      char VAR_5[20];
      const char *VAR_6 = VAR_1->elems[VAR_3].data;

      FUNC_1(VAR_5, VAR_6+4, sizeof(VAR_5));
      FUNC_0(VAR_2, VAR_5, VAR_4);
   }
}
