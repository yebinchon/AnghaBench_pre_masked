
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int idx; unsigned int list_size; TYPE_2__* list; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_7__ {unsigned int size; } ;
typedef TYPE_2__ file_list_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(file_list_t *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++)
   {
      menu_ctx_list_t VAR_3;

      VAR_3.list = VAR_1;
      VAR_3.idx = VAR_2;
      VAR_3.list_size = VAR_1->size;

      FUNC_1(VAR_0, &VAR_3);
   }

   FUNC_0(VAR_1);
}
