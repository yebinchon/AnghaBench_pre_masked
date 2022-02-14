
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * decl; int * buffer; } ;
struct TYPE_6__ {TYPE_1__ menu_display; } ;
typedef TYPE_2__ d3d8_video_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(d3d8_video_t *VAR_0)
{
   if (!VAR_0)
      return;

   FUNC_2();

   FUNC_0(VAR_0);
   FUNC_1(VAR_0->menu_display.buffer, VAR_0->menu_display.decl);
   VAR_0->menu_display.buffer = ((void*)0);
   VAR_0->menu_display.decl = ((void*)0);
}
