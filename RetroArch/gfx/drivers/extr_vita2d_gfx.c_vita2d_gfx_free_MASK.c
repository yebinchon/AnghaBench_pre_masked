
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * texture; } ;
struct TYPE_4__ {int * texture; TYPE_1__ menu; } ;
typedef TYPE_2__ vita_video_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   vita_video_t *VAR_1 = (vita_video_t *)VAR_0;

   FUNC_1();

   if (VAR_1->menu.texture)
   {
      FUNC_2(VAR_1->menu.texture);
      VAR_1->menu.texture = ((void*)0);
   }

   if (VAR_1->texture)
   {
      FUNC_2(VAR_1->texture);
      VAR_1->texture = ((void*)0);
   }

   FUNC_0();
}
