
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xmb_node_t ;
struct TYPE_8__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_7__ {int * userdata; } ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(file_list_t *VAR_0, bool VAR_1)
{
   unsigned VAR_2, VAR_3 = (unsigned)FUNC_1(VAR_0);

   for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
   {
      FUNC_3((xmb_node_t*)FUNC_2(VAR_0, VAR_2));


      VAR_0->list[VAR_2].userdata = ((void*)0);

      if (VAR_1)
         FUNC_0(VAR_0, VAR_2);
   }
}
