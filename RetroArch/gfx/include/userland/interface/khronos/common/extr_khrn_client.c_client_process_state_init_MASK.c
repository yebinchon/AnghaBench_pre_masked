
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int make_current_func; } ;
struct TYPE_5__ {int inited; int next_surface; int next_context; int next_sync; int next_global_image_egl_image; int perf_monitor_inited; int connected; TYPE_2__ khrn_connection; int global_image_egl_images; int windows; int surfaces; int contexts; int syncs; } ;
typedef TYPE_1__ CLIENT_PROCESS_STATE_T ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int VAR_2 ;

bool FUNC_8(CLIENT_PROCESS_STATE_T *VAR_3)
{
   if (!VAR_3->inited) {
      if (!FUNC_3(&VAR_3->contexts, 64))
         return 0;

      if (!FUNC_3(&VAR_3->surfaces, 64))
      {
         FUNC_4(&VAR_3->contexts);
         return 0;
      }
      if (!FUNC_3(&VAR_3->windows, 64))
      {
         FUNC_4(&VAR_3->contexts);
         FUNC_4(&VAR_3->surfaces);
         return 0;
      }
      VAR_3->next_surface = 1;
      VAR_3->next_context = 1;
      VAR_3->inited = 1;
   }





   FUNC_1(0);



   return 1;
}
