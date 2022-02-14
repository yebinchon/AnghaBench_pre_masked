
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * path_c; int path; int * path_b; } ;
typedef TYPE_1__ menu_displaylist_info_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
      menu_displaylist_info_t *VAR_1)
{
   if (!FUNC_3(VAR_1->path_b))
      FUNC_1(VAR_1->path_b);
   if (!FUNC_3(VAR_1->path_c))
      FUNC_1(VAR_1->path_c);

   VAR_1->path_b = FUNC_2(VAR_1->path);
   VAR_1->path_c = ((void*)0);

   return FUNC_0(VAR_1, VAR_0);
}
