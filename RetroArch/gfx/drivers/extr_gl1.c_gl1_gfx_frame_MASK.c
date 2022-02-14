
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int xmb_shadows_enable; char const* stat_text; char const* chat_text; int input_driver_nonblock_state; scalar_t__ hard_sync; int context_data; int (* cb_swap_buffers ) (int ,TYPE_2__*) ;int runloop_is_paused; int runloop_is_slowmotion; scalar_t__ black_frame_insertion; int (* cb_update_window_title ) (int ,TYPE_2__*) ;scalar_t__ widgets_inited; int osd_stat_params; scalar_t__ statistics_show; int height; int width; scalar_t__ menu_is_alive; int (* cb_set_resize ) (int ,unsigned int,unsigned int) ;scalar_t__ menu_shader_pipeline; } ;
typedef TYPE_2__ video_frame_info_t ;
typedef int uint64_t ;
struct font_params {float y; float scale; } ;
struct TYPE_20__ {int height; int width; int y; int x; } ;
struct TYPE_22__ {int should_resize; unsigned int video_width; unsigned int video_height; unsigned int screen_width; unsigned int screen_height; scalar_t__ menu_texture_enable; scalar_t__ readback_buffer_screenshot; scalar_t__ overlay_enable; int menu_tex; TYPE_1__ vp; scalar_t__ menu_texture_full_screen; int tex; } ;
typedef TYPE_3__ gl1_t ;
struct TYPE_23__ {unsigned int width; unsigned int height; } ;
typedef TYPE_4__ gfx_ctx_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*,void const*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned char*,scalar_t__,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int,unsigned int,unsigned int,int ,void const*) ;
 int FUNC_3 (TYPE_2__*,int *,char const*,struct font_params const*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int ,int,int) ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned char* VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_8 (TYPE_3__*,int,int ,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 unsigned int VAR_13 ;
 unsigned char* VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (float,float,float,float) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 int FUNC_17 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,unsigned int,unsigned int) ;
 int FUNC_21 (int ,TYPE_2__*) ;
 int FUNC_22 (int ,TYPE_2__*) ;
 int FUNC_23 (int ,TYPE_2__*) ;
 int FUNC_24 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_25(void *VAR_18, const void *VAR_19,
      unsigned VAR_20, unsigned VAR_21, uint64_t VAR_22,
      unsigned VAR_23, const char *VAR_24, video_frame_info_t *VAR_25)
{
   gfx_ctx_mode_t VAR_26;
   const void *VAR_27 = ((void*)0);
   unsigned VAR_28 = 0;
   unsigned VAR_29 = 0;
   unsigned VAR_30 = VAR_13;
   bool VAR_31 = 1;
   gl1_t *VAR_32 = (gl1_t*)VAR_18;
   unsigned VAR_33 = 0;
   unsigned VAR_34 = 0;

   FUNC_6(VAR_32, 0);


   VAR_25->xmb_shadows_enable = 0;
   VAR_25->menu_shader_pipeline = 0;

   if (!VAR_19 || !VAR_20 || !VAR_21)
      return 1;

   if (VAR_32->should_resize)
   {
      gfx_ctx_mode_t VAR_35;

      VAR_32->should_resize = 0;

      VAR_35.width = VAR_28;
      VAR_35.height = VAR_29;

      VAR_25->cb_set_resize(VAR_25->context_data,
            VAR_35.width, VAR_35.height);

      FUNC_7(VAR_32, VAR_25, VAR_25->width, VAR_25->height, 0, 1);
   }

   FUNC_12(0.0f, 0.0f, 0.0f, 1.0f);
   FUNC_11(VAR_1);

   FUNC_13(VAR_0);
   FUNC_10(VAR_4, VAR_2);

   if ( VAR_17 != VAR_20 ||
         VAR_15 != VAR_21 ||
         VAR_16 != VAR_23)
   {
      if (VAR_20 > 4 && VAR_21 > 4)
      {
         VAR_17 = VAR_20;
         VAR_15 = VAR_21;
         VAR_16 = VAR_23;

         VAR_33 = FUNC_5(VAR_20);
         VAR_34 = FUNC_5(VAR_21);

         if (VAR_14)
            FUNC_4(VAR_14);

         VAR_14 = (unsigned char*)FUNC_16(VAR_33 * VAR_34 * 4);
      }
   }

   VAR_28 = VAR_17;
   VAR_29 = VAR_15;
   VAR_23 = VAR_16;

   VAR_33 = FUNC_5(VAR_28);
   VAR_34 = FUNC_5(VAR_29);

   if ( VAR_20 == 4 &&
         VAR_21 == 4 &&
         (VAR_20 < VAR_28 && VAR_21 < VAR_29)
      )
      VAR_31 = 0;

   if (VAR_31 && VAR_14)
   {
      if (VAR_30 == 32)
      {
         unsigned VAR_36;

         for (VAR_36 = 0; VAR_36 < VAR_29; VAR_36++)
            FUNC_17(VAR_14 + ((VAR_33 * (VAR_30 / 8)) * VAR_36), (const unsigned char*)VAR_19 + (VAR_23 * VAR_36), VAR_28 * (VAR_30 / 8));
      }
      else if (VAR_30 == 16)
         FUNC_0(VAR_14, VAR_19, VAR_28, VAR_29, VAR_33 * sizeof(unsigned), VAR_23);

      VAR_27 = VAR_14;
   }

   if (VAR_32->video_width != VAR_28 || VAR_32->video_height != VAR_29)
   {
      VAR_32->video_width = VAR_28;
      VAR_32->video_height = VAR_29;
   }

   FUNC_24(&VAR_26);

   VAR_32->screen_width = VAR_26.width;
   VAR_32->screen_height = VAR_26.height;

   if (VAR_31)
   {
      if (VAR_27)
      {
         FUNC_2(VAR_32, VAR_33, VAR_34, VAR_28, VAR_29, VAR_32->tex, VAR_27);
      }
   }

   if (VAR_7 && VAR_25->menu_is_alive)
   {
      VAR_27 = ((void*)0);
      VAR_28 = VAR_12;
      VAR_29 = VAR_8;
      VAR_23 = VAR_9;
      VAR_30 = VAR_6;

      VAR_33 = FUNC_5(VAR_28);
      VAR_34 = FUNC_5(VAR_29);

      if (VAR_10)
      {
         VAR_10 = 0;

         if (VAR_11)
         {
            FUNC_4(VAR_11);
            VAR_11 = ((void*)0);
         }
      }

      if (!VAR_11)
         VAR_11 = (unsigned char*)FUNC_16(VAR_33 * VAR_34 * 4);

      if (VAR_30 == 16 && VAR_11)
      {
         FUNC_1(VAR_11, VAR_7, VAR_28, VAR_29, VAR_33 * sizeof(unsigned), VAR_23);

         VAR_27 = VAR_11;

         if (VAR_32->menu_texture_full_screen)
         {
            FUNC_15(0, 0, VAR_25->width, VAR_25->height);
            FUNC_2(VAR_32, VAR_33, VAR_34, VAR_28, VAR_29, VAR_32->menu_tex, VAR_27);
            FUNC_15(VAR_32->vp.x, VAR_32->vp.y, VAR_32->vp.width, VAR_32->vp.height);
         }
         else
            FUNC_2(VAR_32, VAR_33, VAR_34, VAR_28, VAR_29, VAR_32->menu_tex, VAR_27);
      }
   }
   if (VAR_24)
      FUNC_3(VAR_25, ((void*)0), VAR_24, ((void*)0));

   VAR_25->cb_update_window_title(
         VAR_25->context_data, VAR_25);


   if (VAR_32->readback_buffer_screenshot)
      FUNC_8(VAR_32,
            4, VAR_3, VAR_5,
            VAR_32->readback_buffer_screenshot);





   if (
         VAR_25->black_frame_insertion
         && !VAR_25->input_driver_nonblock_state
         && !VAR_25->runloop_is_slowmotion
         && !VAR_25->runloop_is_paused)
   {
      VAR_25->cb_swap_buffers(VAR_25->context_data, VAR_25);
      FUNC_11(VAR_1);
   }


   VAR_25->cb_swap_buffers(VAR_25->context_data, VAR_25);


   if (VAR_25->hard_sync
         && !VAR_25->input_driver_nonblock_state
         && !VAR_32->menu_texture_enable)
   {
      FUNC_11(VAR_1);
      FUNC_14();
   }

   FUNC_6(VAR_32, 1);

   return 1;
}
