
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int content_icon; int icon; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_8__ {int horizontal_list; } ;
typedef TYPE_2__ stripes_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,char const**,int *,int *,int *) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int) ;
 size_t FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(stripes_handle_t *VAR_1)
{
   unsigned VAR_2;
   size_t VAR_3 = FUNC_2(VAR_1, VAR_0);

   for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   {
      const char *VAR_4 = ((void*)0);
      stripes_node_t *VAR_5 = FUNC_1(VAR_1, VAR_2);

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
