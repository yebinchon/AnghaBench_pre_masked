
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * path; int * label; int * path_c; int * path_b; int * exts; } ;
typedef TYPE_1__ menu_displaylist_info_t ;


 int FUNC_0 (int *) ;

void FUNC_1(menu_displaylist_info_t *VAR_0)
{
   if (!VAR_0)
      return;
   if (VAR_0->exts)
      FUNC_0(VAR_0->exts);
   if (VAR_0->path_b)
      FUNC_0(VAR_0->path_b);
   if (VAR_0->path_c)
      FUNC_0(VAR_0->path_c);
   if (VAR_0->label)
      FUNC_0(VAR_0->label);
   if (VAR_0->path)
      FUNC_0(VAR_0->path);
   VAR_0->exts = ((void*)0);
   VAR_0->path_b = ((void*)0);
   VAR_0->path_c = ((void*)0);
   VAR_0->label = ((void*)0);
   VAR_0->path = ((void*)0);
}
