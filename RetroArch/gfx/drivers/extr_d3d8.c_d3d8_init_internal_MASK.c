
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {unsigned int width; unsigned int height; int fullscreen; } ;
typedef TYPE_3__ video_info_t ;
struct TYPE_26__ {int input_joypad_driver; int input_driver; } ;
struct TYPE_25__ {int video_windowed_fullscreen; } ;
struct TYPE_28__ {TYPE_2__ arrays; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_29__ {int* tex_coords; int* vert_coords; } ;
typedef TYPE_5__ overlay_t ;
typedef int input_driver_t ;
struct TYPE_33__ {int lpfnWndProc; } ;
struct TYPE_30__ {TYPE_3__ video_info; int cur_mon_id; TYPE_9__ windowClass; TYPE_5__* menu; } ;
typedef TYPE_6__ d3d8_video_t ;
struct TYPE_31__ {unsigned int right; unsigned int left; unsigned int bottom; unsigned int top; int member_0; } ;
struct TYPE_32__ {TYPE_7__ rcMonitor; } ;
typedef TYPE_7__ RECT ;
typedef TYPE_8__ MONITORINFOEX ;
typedef int HMONITOR ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__*,unsigned int*,unsigned int*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int **,void**) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_7 (TYPE_9__*,int ,int) ;
 int FUNC_8 (unsigned int*,unsigned int*) ;
 int FUNC_9 (unsigned int*,unsigned int*) ;
 int FUNC_10 (TYPE_8__*,int *,int *) ;
 int FUNC_11 (TYPE_8__*,int *,unsigned int*,unsigned int*,int ,int,TYPE_7__*,TYPE_7__*,int *) ;
 int FUNC_12 (unsigned int*,unsigned int*,int ,int,TYPE_7__*) ;
 int FUNC_13 (TYPE_6__*,int ,TYPE_7__*,unsigned int,unsigned int,int ) ;
 int FUNC_14 (TYPE_9__*,int,int *) ;

__attribute__((used)) static bool FUNC_15(d3d8_video_t *VAR_3,
      const video_info_t *VAR_4, input_driver_t **VAR_5,
      void **VAR_6)
{
   unsigned VAR_7 = 0;
   unsigned VAR_8 = 0;
   settings_t *VAR_9 = FUNC_2();
   overlay_t *VAR_10 = (overlay_t*)FUNC_1(1, sizeof(*VAR_10));

   if (!VAR_10)
      return 0;

   VAR_3->menu = VAR_10;
   VAR_3->cur_mon_id = 0;
   VAR_3->menu->tex_coords[0] = 0;
   VAR_3->menu->tex_coords[1] = 0;
   VAR_3->menu->tex_coords[2] = 1;
   VAR_3->menu->tex_coords[3] = 1;
   VAR_3->menu->vert_coords[0] = 0;
   VAR_3->menu->vert_coords[1] = 1;
   VAR_3->menu->vert_coords[2] = 1;
   VAR_3->menu->vert_coords[3] = -1;
   FUNC_3(VAR_3, &VAR_7, &VAR_8);

   {
      unsigned VAR_11 = VAR_4->fullscreen ? VAR_7 : VAR_4->width;
      unsigned VAR_12 = VAR_4->fullscreen ? VAR_8 : VAR_4->height;
      FUNC_9(&VAR_11, &VAR_12);
   }
   if (!FUNC_4(VAR_3))
      return 0;

   VAR_3->video_info = *VAR_4;
   if (!FUNC_5(VAR_3, &VAR_3->video_info))
      return 0;

   FUNC_6(VAR_9->arrays.input_driver, VAR_9->arrays.input_joypad_driver, VAR_5, VAR_6);

   FUNC_0("[D3D8]: Init complete.\n");
   return 1;
}
