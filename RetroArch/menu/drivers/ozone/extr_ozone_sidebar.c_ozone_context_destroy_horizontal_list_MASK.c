
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int content_icon; int icon; } ;
typedef TYPE_1__ ozone_node_t ;
struct TYPE_6__ {int horizontal_list; } ;
typedef TYPE_2__ ozone_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,char const**,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 size_t FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(ozone_handle_t *VAR_1)
{
   unsigned VAR_2;
   size_t VAR_3 = FUNC_2(VAR_1, VAR_0);

   for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   {
      const char *VAR_4 = ((void*)0);
      ozone_node_t *VAR_5 = (ozone_node_t*)FUNC_1(VAR_1->horizontal_list, VAR_2);

      if (!VAR_5)
         continue;

      FUNC_0(VAR_1->horizontal_list, VAR_2,
            &VAR_4, ((void*)0), ((void*)0), ((void*)0));

      if (!VAR_4 || !FUNC_3(VAR_4, ".lpl"))
         continue;

      FUNC_4(&VAR_5->icon);
      FUNC_4(&VAR_5->content_icon);
   }
}
