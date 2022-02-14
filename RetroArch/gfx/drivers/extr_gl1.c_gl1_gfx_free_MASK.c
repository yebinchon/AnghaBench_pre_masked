
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * extensions; scalar_t__ menu_tex; scalar_t__ tex; } ;
typedef TYPE_1__ gl1_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
   gl1_t *VAR_4 = (gl1_t*)VAR_3;

   FUNC_2(VAR_4, 0);

   if (VAR_0)
   {
      FUNC_1(VAR_0);
      VAR_0 = ((void*)0);
   }

   if (VAR_2)
   {
      FUNC_1(VAR_2);
      VAR_2 = ((void*)0);
   }

   if (VAR_1)
   {
      FUNC_1(VAR_1);
      VAR_1 = ((void*)0);
   }

   if (!VAR_4)
      return;

   if (VAR_4->tex)
   {
      FUNC_4(1, &VAR_4->tex);
      VAR_4->tex = 0;
   }

   if (VAR_4->menu_tex)
   {
      FUNC_4(1, &VAR_4->menu_tex);
      VAR_4->menu_tex = 0;
   }





   if (VAR_4->extensions)
   {
      FUNC_5(VAR_4->extensions);
      VAR_4->extensions = ((void*)0);
   }

   FUNC_0();
   FUNC_6();
   FUNC_1(VAR_4);
}
