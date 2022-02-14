
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_36__ {unsigned int width; unsigned int height; int fullscreen; } ;
typedef TYPE_4__ video_info_t ;
typedef int version_str ;
struct TYPE_34__ {int input_joypad_driver; } ;
struct TYPE_33__ {int video_windowed_fullscreen; } ;
struct TYPE_37__ {TYPE_2__ arrays; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_38__ {int* tex_coords; int* vert_coords; } ;
typedef TYPE_6__ overlay_t ;
typedef int input_driver_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
struct TYPE_31__ {int lpfnWndProc; } ;
struct TYPE_39__ {TYPE_4__ video_info; int cur_mon_id; TYPE_11__ windowClass; TYPE_6__* menu; } ;
typedef TYPE_7__ d3d9_video_t ;
struct TYPE_40__ {unsigned int right; unsigned int left; unsigned int bottom; unsigned int top; int member_0; } ;
struct TYPE_41__ {TYPE_8__ rcMonitor; } ;
struct TYPE_35__ {int LowPart; int HighPart; } ;
struct TYPE_32__ {int get_flags; } ;
struct TYPE_30__ {int Description; TYPE_3__ DriverVersion; int member_0; } ;
typedef TYPE_8__ RECT ;
typedef TYPE_9__ MONITORINFOEX ;
typedef int HMONITOR ;
typedef int DWORD ;
typedef TYPE_10__ D3DADAPTER_IDENTIFIER9 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_10__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int,int) ;
 TYPE_5__* FUNC_5 () ;
 TYPE_19__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_7__*,unsigned int*,unsigned int*) ;
 int FUNC_7 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_7__*,int,char const*) ;
 int FUNC_9 (int ,int ,int **,void**) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_10 (TYPE_11__*,int ,int) ;
 char* FUNC_11 () ;
 int FUNC_12 (char*,int,char*,int,int,int,int) ;
 int FUNC_13 (TYPE_19__*) ;
 int FUNC_14 (unsigned int*,unsigned int*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned int*,unsigned int*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (TYPE_9__*,int *,int *) ;
 int FUNC_20 (TYPE_9__*,int *,unsigned int*,unsigned int*,int ,int,TYPE_8__*,TYPE_8__*,int *) ;
 int FUNC_21 (unsigned int*,unsigned int*,int ,int,TYPE_8__*) ;
 int FUNC_22 (TYPE_7__*,int ,TYPE_8__*,unsigned int,unsigned int,int ) ;
 int FUNC_23 (TYPE_11__*,int,int *) ;

__attribute__((used)) static bool FUNC_24(d3d9_video_t *VAR_6,
      const video_info_t *VAR_7, input_driver_t **VAR_8,
      void **VAR_9)
{
   unsigned VAR_10 = 0;
   unsigned VAR_11 = 0;
   settings_t *VAR_12 = FUNC_5();
   overlay_t *VAR_13 = (overlay_t*)FUNC_4(1, sizeof(*VAR_13));

   if (!VAR_13)
      return 0;

   VAR_6->menu = VAR_13;
   VAR_6->cur_mon_id = 0;
   VAR_6->menu->tex_coords[0] = 0;
   VAR_6->menu->tex_coords[1] = 0;
   VAR_6->menu->tex_coords[2] = 1;
   VAR_6->menu->tex_coords[3] = 1;
   VAR_6->menu->vert_coords[0] = 0;
   VAR_6->menu->vert_coords[1] = 1;
   VAR_6->menu->vert_coords[2] = 1;
   VAR_6->menu->vert_coords[3] = -1;
   {
      FUNC_6(VAR_6, &VAR_10, &VAR_11);
   }

   {
      unsigned VAR_14 = VAR_7->fullscreen ? VAR_10 : VAR_7->width;
      unsigned VAR_15 = VAR_7->fullscreen ? VAR_11 : VAR_7->height;
      FUNC_17(&VAR_14, &VAR_15);
   }
   VAR_6->video_info = *VAR_7;

   if (!FUNC_7(VAR_6, &VAR_6->video_info))
      return 0;

   {

      VAR_1.get_flags = VAR_2;
      FUNC_13(&VAR_1);
   }

   FUNC_9(VAR_12->arrays.input_joypad_driver,
      VAR_12->arrays.input_joypad_driver, VAR_8, VAR_9);

   {
      char VAR_16[128];
      D3DADAPTER_IDENTIFIER9 VAR_17 = {0};

      FUNC_1(VAR_3, 0, 0, &VAR_17);

      VAR_16[0] = '\0';

      FUNC_12(VAR_16, sizeof(VAR_16), "%u.%u.%u.%u", FUNC_0(VAR_17.DriverVersion.HighPart), FUNC_2(VAR_17.DriverVersion.HighPart), FUNC_0(VAR_17.DriverVersion.LowPart), FUNC_2(VAR_17.DriverVersion.LowPart));

      FUNC_3("[D3D9]: Using GPU: %s\n", VAR_17.Description);
      FUNC_3("[D3D9]: GPU API Version: %s\n", VAR_16);

      FUNC_16(VAR_17.Description);
      FUNC_15(VAR_16);
   }

   FUNC_3("[D3D9]: Init complete.\n");
   return 1;
}
