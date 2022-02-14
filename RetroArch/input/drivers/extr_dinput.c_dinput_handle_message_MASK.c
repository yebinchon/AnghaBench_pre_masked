
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pointer_status {void* pointer_id; } ;
struct dinput_input {int mouse_wu; int mouse_wd; int mouse_hwu; int mouse_hwd; int joypad_driver_name; TYPE_2__* joypad; int window_pos_y; int window_pos_x; } ;
typedef int WPARAM ;
typedef int UINT ;
struct TYPE_4__ {int (* destroy ) () ;} ;
struct TYPE_3__ {int dbch_devicetype; } ;
typedef TYPE_1__* PDEV_BROADCAST_HDR ;
typedef int PDEV_BROADCAST_DEVICEINTERFACE ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;







 int FUNC_5 (struct dinput_input*,struct pointer_status*) ;
 int FUNC_6 (struct dinput_input*,int) ;
 struct pointer_status* FUNC_7 (struct dinput_input*,int) ;
 int FUNC_8 (struct pointer_status*,int ) ;
 TYPE_2__* FUNC_9 (int ,struct dinput_input*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;

bool FUNC_12(void *VAR_3, UINT VAR_4, WPARAM VAR_5, LPARAM VAR_6)
{
   struct dinput_input *VAR_7 = (struct dinput_input *)VAR_3;
   switch (VAR_4)
   {
      case 132:
         VAR_7->window_pos_x = FUNC_1(VAR_6);
         VAR_7->window_pos_y = FUNC_2(VAR_6);
         break;
      case 130:
         {
            struct pointer_status *VAR_8 =
               (struct pointer_status *)FUNC_10(sizeof(struct pointer_status));

            if (!VAR_8)
            {
               FUNC_4("[DINPUT]: dinput_handle_message: pointer allocation in WM_POINTERDOWN failed.\n");
               return 0;
            }

            VAR_8->pointer_id = FUNC_0(VAR_5);
            FUNC_8(VAR_8, VAR_6);
            FUNC_5(VAR_7, VAR_8);
            return 1;
         }
      case 129:
         {
            int VAR_9 = FUNC_0(VAR_5);
            FUNC_6(VAR_7, VAR_9);
            return 1;
         }
      case 128:
         {
            int VAR_10 = FUNC_0(VAR_5);
            struct pointer_status *VAR_11 = FUNC_7(VAR_7, VAR_10);
            if (VAR_11)
               FUNC_8(VAR_11, VAR_6);
            return 1;
         }
      case 134:
         break;
      case 131:
            if (((short) FUNC_3(VAR_5))/120 > 0)
               VAR_7->mouse_wu = 1;
            if (((short) FUNC_3(VAR_5))/120 < 0)
               VAR_7->mouse_wd = 1;
         break;
      case 133:
         {
            if (((short) FUNC_3(VAR_5))/120 > 0)
               VAR_7->mouse_hwu = 1;
            if (((short) FUNC_3(VAR_5))/120 < 0)
               VAR_7->mouse_hwd = 1;
         }
         break;
   }

   return 0;
}
