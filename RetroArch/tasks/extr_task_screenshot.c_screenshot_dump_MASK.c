
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char* shotname; char* filename; int is_idle; int is_paused; int bgr24; unsigned int height; unsigned int width; int pitch; int widgets_ready; int silence; unsigned int pixel_format_type; struct TYPE_13__* out_buffer; scalar_t__ title; int callback; int handler; struct TYPE_13__* state; int type; int history_list_enable; void* userbuf; void const* frame; } ;
typedef TYPE_2__ uint8_t ;
struct retro_system_info {char const* library_name; } ;
struct TYPE_12__ {scalar_t__ screenshots_in_content_dir; scalar_t__ auto_screenshot_filename; int history_list_enable; } ;
struct TYPE_14__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef TYPE_2__ screenshot_task_state_t ;
typedef int screenshot_path ;
typedef TYPE_2__ retro_task_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (struct retro_system_info*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char const*,char*,int) ;
 int FUNC_5 (char*,char const*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 char const* FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char const*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 () ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_20(
      const char *VAR_7,
      const char *VAR_8,
      const void *VAR_9,
      unsigned VAR_10,
      unsigned VAR_11,
      int VAR_12,
      bool VAR_13,
      void *VAR_14,
      bool VAR_15,
      bool VAR_16,
      bool VAR_17,
      bool VAR_18,
      bool VAR_19,
      unsigned VAR_20)
{
   struct retro_system_info VAR_21;
   uint8_t *VAR_22 = ((void*)0);
   settings_t *VAR_23 = FUNC_1();
   screenshot_task_state_t *VAR_24 = (screenshot_task_state_t*)FUNC_0(1, sizeof(*VAR_24));

   VAR_24->shotname[0] = '\0';



   if (VAR_18)
      FUNC_16(VAR_24->filename, VAR_8, sizeof(VAR_24->filename));

   VAR_24->is_idle = VAR_16;
   VAR_24->is_paused = VAR_17;
   VAR_24->bgr24 = VAR_13;
   VAR_24->height = VAR_11;
   VAR_24->width = VAR_10;
   VAR_24->pitch = VAR_12;
   VAR_24->frame = VAR_9;
   VAR_24->userbuf = VAR_14;



   VAR_24->widgets_ready = 0;

   VAR_24->silence = VAR_15;
   VAR_24->history_list_enable = VAR_23->bools.history_list_enable;
   VAR_24->pixel_format_type = VAR_20;

   if (!VAR_18)
   {
      if (VAR_15)
      {
         FUNC_16(VAR_24->filename,
               VAR_8, sizeof(VAR_24->filename));
         FUNC_15(VAR_24->filename, ".png", sizeof(VAR_24->filename));
      }
      else
      {
         if (VAR_23->bools.auto_screenshot_filename)
         {
            const char *VAR_25 = ((void*)0);

            if (FUNC_11(VAR_3))
            {
               if (!FUNC_2(&VAR_21))
                  return 0;

               if (FUNC_14(VAR_21.library_name))
                  VAR_25 = "RetroArch";
               else
                  VAR_25 = VAR_21.library_name;
            }
            else
               VAR_25 = FUNC_10(VAR_8);

            FUNC_5(VAR_24->shotname, VAR_25,
                  VAR_0, sizeof(VAR_24->shotname));
         }
         else
         {
            FUNC_16(VAR_24->shotname, FUNC_10(VAR_8),
                  sizeof(VAR_24->shotname));
            FUNC_15(VAR_24->shotname, ".png", sizeof(VAR_24->shotname));
         }

         if ( FUNC_14(VAR_7) ||
               VAR_23->bools.screenshots_in_content_dir)
         {
            char VAR_26[VAR_2];
            VAR_26[0] = '\0';
            FUNC_3(VAR_26, VAR_8,
                  sizeof(VAR_26));
            FUNC_4(VAR_24->filename, VAR_26,
                  VAR_24->shotname, sizeof(VAR_24->filename));
         }
         else
            FUNC_4(VAR_24->filename, VAR_7,
                  VAR_24->shotname, sizeof(VAR_24->filename));
      }
   }
   if (VAR_19)
   {
      retro_task_t *VAR_27 = FUNC_18();

      VAR_27->type = VAR_4;
      VAR_27->state = VAR_24;
      VAR_27->handler = VAR_6;
      {
         if (!VAR_15)
            VAR_27->title = FUNC_13(FUNC_9(VAR_1));
      }

      if (FUNC_19(VAR_27))
         return 1;


      if (VAR_27->title)
         FUNC_17(VAR_27);

      FUNC_6(VAR_27);

      if (VAR_24->out_buffer)
         FUNC_6(VAR_24->out_buffer);

      FUNC_6(VAR_24);

      return 0;
   }

   return FUNC_12(VAR_24);
}
