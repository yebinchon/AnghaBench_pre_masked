
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int video_font_size; } ;
struct TYPE_12__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_13__ {char* title; int progress; int finished; int cancelled; int error; int alternative_look; TYPE_4__* frontend_userdata; int ident; } ;
typedef TYPE_3__ retro_task_t ;
typedef int msg_widget ;
struct TYPE_14__ {unsigned int duration; float alpha; int dying; int expired; int expiration_timer_started; float msg_transition_animation; int text_height; int unfolded; int unfolding; float unfold; char* msg; unsigned int msg_len; char* task_title_ptr; int task_count; int width; int task_progress; int task_finished; int task_cancelled; int task_error; int * msg_new; scalar_t__ expiration_timer; scalar_t__ hourglass_rotation; int task_ident; TYPE_3__* task_ptr; scalar_t__ offset_y; } ;
typedef TYPE_4__ menu_widget_msg_t ;
struct TYPE_15__ {uintptr_t tag; int duration; float target_value; float* subject; TYPE_4__* userdata; int (* cb ) (TYPE_4__*) ;int easing_enum; } ;
typedef TYPE_5__ menu_animation_ctx_entry_t ;
typedef enum message_queue_icon { ____Placeholder_message_queue_icon } message_queue_icon ;
typedef enum message_queue_category { ____Placeholder_message_queue_category } message_queue_category ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,TYPE_4__**,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (scalar_t__*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 float VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_9 ;
 void* FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,unsigned int,int,int) ;

void FUNC_12(
      retro_task_t *VAR_10, const char *VAR_11,
      unsigned VAR_12,
      char *VAR_13,
      enum message_queue_icon VAR_14,
      enum message_queue_category VAR_15,
      unsigned VAR_16, bool VAR_17)
{
   menu_widget_msg_t* VAR_18 = ((void*)0);

   if (FUNC_3(VAR_3) > 0)
   {

      if (VAR_10 && VAR_10->frontend_userdata)
      {
         VAR_18 = (menu_widget_msg_t*) VAR_10->frontend_userdata;
         VAR_18->task_ptr = VAR_10;
      }


      if (!VAR_18)
      {
         const char *VAR_19 = VAR_11;

         VAR_18 = (menu_widget_msg_t*)FUNC_0(1, sizeof(*VAR_18));

         if (VAR_10)
            VAR_19 = VAR_10->title;

         VAR_18->duration = VAR_12;
         VAR_18->offset_y = 0;
         VAR_18->alpha = 1.0f;

         VAR_18->dying = 0;
         VAR_18->expired = 0;

         VAR_18->expiration_timer = 0;
         VAR_18->task_ptr = VAR_10;
         VAR_18->expiration_timer_started = 0;

         VAR_18->msg_new = ((void*)0);
         VAR_18->msg_transition_animation = 0.0f;

         VAR_18->text_height = 0;

         if (VAR_6)
         {
            VAR_18->unfolded = 0;
            VAR_18->unfolding = 0;
            VAR_18->unfold = 0.0f;
         }
         else
         {
            VAR_18->unfolded = 1;
            VAR_18->unfolding = 0;
            VAR_18->unfold = 1.0f;
         }

         if (VAR_10)
         {
            VAR_18->msg = FUNC_9(VAR_19);
            VAR_18->msg_len = (unsigned)FUNC_10(VAR_19);

            VAR_18->task_error = VAR_10->error;
            VAR_18->task_cancelled = VAR_10->cancelled;
            VAR_18->task_finished = VAR_10->finished;
            VAR_18->task_progress = VAR_10->progress;
            VAR_18->task_ident = VAR_10->ident;
            VAR_18->task_title_ptr = VAR_10->title;
            VAR_18->task_count = 1;

            VAR_18->unfolded = 1;

            VAR_18->width = FUNC_4(VAR_2, VAR_19, VAR_18->msg_len, VAR_8) + VAR_9/2;

            VAR_10->frontend_userdata = VAR_18;

            VAR_18->hourglass_rotation = 0;
         }
         else
         {


            unsigned VAR_20 = (unsigned)FUNC_10(VAR_19);
            char *VAR_21 = FUNC_9(VAR_19);
            unsigned VAR_22 = VAR_4;
            unsigned VAR_23 = FUNC_4(VAR_2, VAR_19, VAR_20, VAR_8);
            settings_t *VAR_24 = FUNC_1();

            VAR_18->text_height = VAR_8 * VAR_24->floats.video_font_size;


            if (VAR_23 > VAR_22)
            {
               if (VAR_23/2 > VAR_22)
               {
                  VAR_22 = VAR_23/2;
                  VAR_22 += 10 * VAR_5;
               }

               FUNC_11(VAR_21, VAR_21, VAR_20/2 + 10, 0, 2);

               VAR_18->text_height *= 2.5f;
            }
            else
            {
               VAR_22 = VAR_23;
               VAR_18->text_height *= 1.35f;
            }

            VAR_18->msg = VAR_21;
            VAR_18->msg_len = (unsigned)FUNC_10(VAR_21);
            VAR_18->width = VAR_22 + VAR_9/2;
         }

         FUNC_2(VAR_3, &VAR_18, sizeof(VAR_18));
      }

      else
      {
         if (VAR_18->expiration_timer_started)
         {
            FUNC_7(&VAR_18->expiration_timer);
            VAR_18->expiration_timer_started = 0;
         }

         if (VAR_10->title != VAR_18->task_title_ptr)
         {
            unsigned VAR_25 = (unsigned)FUNC_10(VAR_10->title);
            unsigned VAR_26 = FUNC_4(VAR_2, VAR_10->title, VAR_25, VAR_8);

            if (VAR_18->msg_new)
            {
               FUNC_5(VAR_18->msg_new);
               VAR_18->msg_new = ((void*)0);
            }

            VAR_18->msg_new = FUNC_9(VAR_10->title);
            VAR_18->msg_len = VAR_25;
            VAR_18->task_title_ptr = VAR_10->title;
            VAR_18->msg_transition_animation = 0;

            if (!VAR_10->alternative_look)
            {
               menu_animation_ctx_entry_t VAR_27;

               VAR_27.easing_enum = VAR_0;
               VAR_27.tag = (uintptr_t) VAR_18;
               VAR_27.duration = VAR_1*2;
               VAR_27.target_value = VAR_7/2.0f;
               VAR_27.subject = &VAR_18->msg_transition_animation;
               VAR_27.cb = FUNC_8;
               VAR_27.userdata = VAR_18;

               FUNC_6(&VAR_27);
            }
            else
            {
               FUNC_8(VAR_18);
            }

            VAR_18->task_count++;

            VAR_18->width = VAR_26;
         }

         VAR_18->task_error = VAR_10->error;
         VAR_18->task_cancelled = VAR_10->cancelled;
         VAR_18->task_finished = VAR_10->finished;
         VAR_18->task_progress = VAR_10->progress;
      }
   }
}
