
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_8__ {void* aspect; } ;
struct TYPE_11__ {int num_modes; int is_valid; } ;
struct TYPE_10__ {int num_modes; int is_valid; } ;
struct TYPE_13__ {int notify_length; int copy_protect; int hdmi_preferred_mode; int hdmi_current_mode; int sdtv_current_colour; scalar_t__ to_exit; TYPE_2__* callbacks; int sdtv_current_cp_mode; TYPE_1__ sdtv_options; void* sdtv_current_mode; void* hdmi_current_group; int * notify_handle; void* hdmi_preferred_group; TYPE_4__ dmt_cache; TYPE_3__ cea_cache; int * notify_buffer; int initialised; } ;
struct TYPE_12__ {int state; } ;
struct TYPE_9__ {int notify_data; int (* notify_fn ) (int ,int,int,int) ;} ;
typedef TYPE_5__ TV_DISPLAY_STATE_T ;
typedef TYPE_6__ TVSERVICE_HOST_STATE_T ;
typedef void* SDTV_MODE_T ;
typedef int SDTV_CP_MODE_T ;
typedef void* SDTV_ASPECT_T ;
typedef void* HDMI_RES_GROUP_T ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ,int *,int ,TYPE_5__*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int *,int,int*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void *FUNC_13(void *VAR_11) {
   int32_t VAR_12;
   TVSERVICE_HOST_STATE_T *VAR_13 = (TVSERVICE_HOST_STATE_T *) VAR_11;
   TV_DISPLAY_STATE_T VAR_14;

   FUNC_12("TV service async thread started");

   VAR_12 = FUNC_4( VAR_9, ((void*)0), 0, &VAR_14, sizeof(TV_DISPLAY_STATE_T));
   if (VAR_12 != 0)
      return 0;
   if (VAR_14.state & 141)
   {

      if (VAR_14.state & (135 | 140))
      {

         FUNC_8(VAR_13->notify_handle[0]);
      }
   }

   if (VAR_14.state & (141|134))
      VAR_14.state &= ~(135 | 140);

   while(1) {
      VCOS_STATUS_T VAR_15 = FUNC_10(&VAR_10);
      if(VAR_15 != VAR_8 || !VAR_13->initialised || VAR_13->to_exit)
         break;

      do {
         uint32_t VAR_16, VAR_17, VAR_18;

         VAR_12 = FUNC_6( VAR_13->notify_handle[0], VAR_13->notify_buffer, sizeof(VAR_13->notify_buffer), &VAR_13->notify_length, VAR_6 );
         if(VAR_12 != 0 || VAR_13->notify_length < sizeof(uint32_t)*3 ) {
            FUNC_9(VAR_13->notify_length == sizeof(uint32_t)*3);
            break;
         }

         if(FUNC_2() != 0)
            break;



         VAR_16 = FUNC_0(VAR_13->notify_buffer[0]), VAR_17 = FUNC_0(VAR_13->notify_buffer[1]), VAR_18 = FUNC_0(VAR_13->notify_buffer[2]);
         FUNC_12("[%s] %s %d %d", VAR_7, FUNC_5(VAR_16),
                        VAR_17, VAR_18);
         switch(VAR_16) {
         case 134:
            if(VAR_14.state & (135|140)) {
               VAR_13->copy_protect = 0;
               if((VAR_14.state & 141) == 0) {
                  FUNC_7(VAR_13->notify_handle[0]);
               }
            }
            VAR_14.state &= ~(135|140|141|139);
            VAR_14.state |= (134 | 136);
            FUNC_12("[%s] invalidating caches", VAR_7);
            VAR_13->cea_cache.is_valid = VAR_13->cea_cache.num_modes = 0;
            VAR_13->dmt_cache.is_valid = VAR_13->dmt_cache.num_modes = 0;
            break;

         case 141:
            if(VAR_14.state & (135|140)) {
               VAR_13->copy_protect = 0;
               FUNC_7(VAR_13->notify_handle[0]);
            }
            VAR_14.state &= ~(135|140|134|139);
            VAR_14.state |= 141;
            VAR_13->hdmi_preferred_group = (HDMI_RES_GROUP_T) VAR_17;
            VAR_13->hdmi_preferred_mode = VAR_18;
            break;

         case 140:
            if(VAR_14.state & (141|134)) {
               FUNC_8(VAR_13->notify_handle[0]);
            }
            VAR_14.state &= ~(135|141|134);
            VAR_14.state |= 140;
            VAR_13->hdmi_current_group = (HDMI_RES_GROUP_T) VAR_17;
            VAR_13->hdmi_current_mode = VAR_18;
            break;

         case 135:
            if(VAR_14.state & (141|134)) {
               FUNC_8(VAR_13->notify_handle[0]);
            }
            VAR_14.state &= ~(140|141|134);
            VAR_14.state |= 135;
            VAR_13->hdmi_current_group = (HDMI_RES_GROUP_T) VAR_17;
            VAR_13->hdmi_current_mode = VAR_18;
            break;

         case 136:
            VAR_14.state &= ~139;
            VAR_14.state |= 136;
            VAR_13->copy_protect = 0;

            break;

         case 139:
            VAR_14.state &= ~136;
            VAR_14.state |= 139;
            VAR_13->copy_protect = 1;
            break;

         case 138:
         case 137:

            break;

         case 128:
            if(VAR_14.state & (129 | 130)) {
               VAR_13->copy_protect = 0;
            }
            VAR_14.state &= ~(133 | 129 | 130);
            VAR_14.state |= (128 | 131);
            VAR_13->sdtv_current_mode = VAR_4;
            break;

         case 133:
            VAR_14.state &= ~(128 | 129 | 130);
            VAR_14.state |= 133;
            VAR_13->sdtv_current_mode = VAR_4;
            break;

         case 130:
            VAR_14.state &= ~(128 | 133 | 129);
            VAR_14.state |= 130;
            VAR_13->sdtv_current_mode = (SDTV_MODE_T) VAR_17;
            VAR_13->sdtv_options.aspect = (SDTV_ASPECT_T) VAR_18;
            if(VAR_17 & VAR_0) {
               VAR_13->sdtv_current_colour = VAR_0;
            } else if(VAR_17 & VAR_2) {
               VAR_13->sdtv_current_colour = VAR_2;
            } else {
               VAR_13->sdtv_current_colour = VAR_1;
            }
            break;

         case 129:
            VAR_14.state &= ~(128 | 133 | 130);
            VAR_14.state |= 129;
            VAR_13->sdtv_current_mode = (SDTV_MODE_T) VAR_17;
            VAR_13->sdtv_options.aspect = (SDTV_ASPECT_T) VAR_18;
            if(VAR_17 & VAR_0) {
               VAR_13->sdtv_current_colour = VAR_0;
            } else if(VAR_17 & VAR_2) {
               VAR_13->sdtv_current_colour = VAR_2;
            } else {
               VAR_13->sdtv_current_colour = VAR_1;
            }
            break;

         case 131:
            VAR_14.state &= ~132;
            VAR_14.state |= 131;
            VAR_13->copy_protect = 0;
            VAR_13->sdtv_current_cp_mode = VAR_3;
            break;

         case 132:
            VAR_14.state &= ~131;
            VAR_14.state |= 132;
            VAR_13->copy_protect = 1;
            VAR_13->sdtv_current_cp_mode = (SDTV_CP_MODE_T) VAR_17;
            break;
         }

         FUNC_3();


         uint32_t VAR_19, VAR_20 = 0;
         for(VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
         {
            if(VAR_13->callbacks[VAR_19].notify_fn != ((void*)0))
            {
               VAR_20++;
               VAR_13->callbacks[VAR_19].notify_fn
                  (VAR_13->callbacks[VAR_19].notify_data, VAR_16, VAR_17, VAR_18);
            }
         }
         if(VAR_20 == 0) {
            FUNC_11("TV service: No callback handler specified, callback [%s] swallowed",
                          FUNC_5(VAR_16));
         }
      } while(VAR_12 == 0 && VAR_13->notify_length >= sizeof(uint32_t)*3);
   }

   if(VAR_13->to_exit)
      FUNC_12("TV service async thread exiting");

   return 0;
}
