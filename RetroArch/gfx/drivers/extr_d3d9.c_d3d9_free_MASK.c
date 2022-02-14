
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * dev; struct TYPE_8__* shader_path; struct TYPE_8__* menu; scalar_t__ overlays_size; struct TYPE_8__* overlays; } ;
typedef TYPE_1__ d3d9_video_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
   d3d9_video_t *VAR_2 = (d3d9_video_t*)VAR_1;

   if (!VAR_2)
      return;
   FUNC_3(VAR_2, VAR_2->menu);
   if (VAR_2->menu)
      FUNC_5(VAR_2->menu);
   VAR_2->menu = ((void*)0);

   FUNC_0(VAR_2);

   if (!FUNC_6(VAR_2->shader_path))
      FUNC_5(VAR_2->shader_path);

   VAR_2->shader_path = ((void*)0);
   FUNC_2(VAR_2->dev, VAR_0);
   VAR_2->dev = ((void*)0);
   VAR_0 = ((void*)0);

   FUNC_1();


   FUNC_8();
   FUNC_7();

   FUNC_5(VAR_2);
}
