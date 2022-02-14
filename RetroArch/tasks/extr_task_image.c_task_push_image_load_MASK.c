
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int supports_rgba; int * pixels; scalar_t__ height; scalar_t__ width; } ;
struct nbio_image_handle {int is_blocking; int is_blocking_on_processing; int is_finished; unsigned int upscale_threshold; int type; TYPE_1__ ti; int * handle; scalar_t__ size; scalar_t__ frame_duration; scalar_t__ processing_final_state; int status; } ;
struct TYPE_8__ {int is_finished; void* user_data; int callback; int cleanup; int handler; struct TYPE_8__* state; struct nbio_image_handle* data; int type; int path; scalar_t__ status_flags; int * cb; int * msg_queue; int * handle; scalar_t__ pos_increment; int status; } ;
typedef TYPE_2__ retro_task_t ;
typedef int retro_task_callback_t ;
typedef TYPE_2__ nbio_handle_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;

bool FUNC_7(const char *VAR_16,
      bool VAR_17, unsigned VAR_18,
      retro_task_callback_t VAR_19, void *VAR_20)
{
   nbio_handle_t *VAR_21 = ((void*)0);
   struct nbio_image_handle *VAR_22 = ((void*)0);
   retro_task_t *VAR_23 = FUNC_5();

   if (!VAR_23)
      return 0;

   VAR_21 = (nbio_handle_t*)FUNC_2(sizeof(*VAR_21));

   if (!VAR_21)
   {
      FUNC_1(VAR_23);
      return 0;
   }

   VAR_21->type = VAR_10;
   VAR_21->is_finished = 0;
   VAR_21->status = VAR_7;
   VAR_21->pos_increment = 0;
   VAR_21->status_flags = 0;
   VAR_21->data = ((void*)0);
   VAR_21->handle = ((void*)0);
   VAR_21->msg_queue = ((void*)0);
   VAR_21->cb = &VAR_13;

   if (VAR_17)
      FUNC_0(VAR_21->status_flags, VAR_6);

   VAR_22 = (struct nbio_image_handle*)FUNC_2(sizeof(*VAR_22));
   if (!VAR_22)
   {
      FUNC_1(VAR_21);
      FUNC_1(VAR_23);
      return 0;
   }

   VAR_21->path = FUNC_3(VAR_16);

   VAR_22->type = VAR_3;
   VAR_22->status = VAR_0;
   VAR_22->is_blocking = 0;
   VAR_22->is_blocking_on_processing = 0;
   VAR_22->is_finished = 0;
   VAR_22->processing_final_state = 0;
   VAR_22->frame_duration = 0;
   VAR_22->size = 0;
   VAR_22->upscale_threshold = VAR_18;
   VAR_22->handle = ((void*)0);

   VAR_22->ti.width = 0;
   VAR_22->ti.height = 0;
   VAR_22->ti.pixels = ((void*)0);

   VAR_22->ti.supports_rgba = 0;

   if (FUNC_4(VAR_16, ".png"))
   {
      VAR_21->type = VAR_11;
      VAR_22->type = VAR_4;
   }
   else if (FUNC_4(VAR_16, ".jpeg")
         || FUNC_4(VAR_16, ".jpg"))
   {
      VAR_21->type = VAR_9;
      VAR_22->type = VAR_2;
   }
   else if (FUNC_4(VAR_16, ".bmp"))
   {
      VAR_21->type = VAR_8;
      VAR_22->type = VAR_1;
   }
   else if (FUNC_4(VAR_16, ".tga"))
   {
      VAR_21->type = VAR_12;
      VAR_22->type = VAR_5;
   }

   VAR_21->data = (struct nbio_image_handle*)VAR_22;

   VAR_23->state = VAR_21;
   VAR_23->handler = VAR_14;
   VAR_23->cleanup = VAR_15;
   VAR_23->callback = VAR_19;
   VAR_23->user_data = VAR_20;

   FUNC_6(VAR_23);

   return 1;
}
