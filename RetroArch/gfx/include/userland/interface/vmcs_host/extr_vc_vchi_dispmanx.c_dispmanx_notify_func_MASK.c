
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_2__ {scalar_t__ pending_update_handle; int vsync_callback_param; int (* vsync_callback ) (scalar_t__,int ) ;int update_callback_param; int (* update_callback ) (scalar_t__,int ) ;int * notify_handle; scalar_t__* notify_buffer; int notify_length; int initialised; } ;
typedef scalar_t__ DISPMANX_UPDATE_HANDLE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void *FUNC_6( void *VAR_4 ) {
   int32_t VAR_5;
   VCOS_STATUS_T VAR_6;

   (void)VAR_4;

   while (1) {
      DISPMANX_UPDATE_HANDLE_T VAR_7;
      VAR_6 = FUNC_5(&VAR_3);
      if (VAR_6 != VAR_1 || !VAR_2.initialised)
         break;

      while (1) {
         VAR_5 = FUNC_2( VAR_2.notify_handle[0], VAR_2.notify_buffer, sizeof(VAR_2.notify_buffer), &VAR_2.notify_length, VAR_0 );
         if (VAR_5 != 0)
            break;

         VAR_7 = (DISPMANX_UPDATE_HANDLE_T)VAR_2.notify_buffer[0];
         if (VAR_7) {


            FUNC_3(VAR_2.notify_handle[0]);
            if (VAR_2.update_callback ) {
               FUNC_4( VAR_2.pending_update_handle == VAR_7);
               VAR_2.update_callback(VAR_7, VAR_2.update_callback_param);
            }
         } else {

            if (VAR_2.vsync_callback ) {
               VAR_2.vsync_callback(VAR_7, VAR_2.vsync_callback_param);
            }
         }
      }
   }
   return 0;
}
