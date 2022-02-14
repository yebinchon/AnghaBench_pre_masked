
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_mixer_userdata {int is_finished; int slot_selection_type; int slot_selection_idx; int handle; struct audio_mixer_userdata* data; struct audio_mixer_userdata* path; struct audio_mixer_userdata* user_data; int cleanup; int handler; struct audio_mixer_userdata* state; int status; int * cb; int stream_type; int callback; int type; } ;
struct audio_mixer_handle {int is_finished; int slot_selection_type; int slot_selection_idx; int handle; struct audio_mixer_handle* data; struct audio_mixer_handle* path; struct audio_mixer_handle* user_data; int cleanup; int handler; struct audio_mixer_handle* state; int status; int * cb; int stream_type; int callback; int type; } ;
typedef struct audio_mixer_userdata retro_task_t ;
typedef int retro_task_callback_t ;
typedef struct audio_mixer_userdata nbio_handle_t ;
typedef enum audio_mixer_slot_selection_type { ____Placeholder_audio_mixer_slot_selection_type } audio_mixer_slot_selection_type ;


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
 int VAR_14 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct audio_mixer_userdata*) ;
 int FUNC_3 (int ) ;
 struct audio_mixer_userdata* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct audio_mixer_userdata*) ;
 int FUNC_7 (struct audio_mixer_userdata*,char const*,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct audio_mixer_userdata* FUNC_9 () ;
 int FUNC_10 (struct audio_mixer_userdata*) ;

bool FUNC_11(
      const char *VAR_24, retro_task_callback_t VAR_25, void *VAR_26,
      bool VAR_27,
      enum audio_mixer_slot_selection_type VAR_28,
      int VAR_29)
{
   nbio_handle_t *VAR_30 = ((void*)0);
   struct audio_mixer_handle *VAR_31 = ((void*)0);
   retro_task_t *VAR_32 = FUNC_9();
   struct audio_mixer_userdata *VAR_33 = (struct audio_mixer_userdata*)FUNC_1(1, sizeof(*VAR_33));

   if (!VAR_32 || !VAR_33)
      goto error;

   VAR_30 = (nbio_handle_t*)FUNC_1(1, sizeof(*VAR_30));

   if (!VAR_30)
      goto error;

   VAR_30->path = FUNC_4(VAR_24);

   VAR_31 = (struct audio_mixer_handle*)FUNC_1(1, sizeof(*VAR_31));
   if (!VAR_31)
      goto error;

   VAR_31->is_finished = 0;

   FUNC_7(VAR_31->path, VAR_24, sizeof(VAR_31->path));

   VAR_30->type = VAR_12;
   VAR_31->type = VAR_3;

   if (FUNC_8(VAR_24, ".wav"))
   {
      VAR_31->type = VAR_5;
      VAR_30->type = VAR_14;
      VAR_32->callback = VAR_21;
   }
   else if (FUNC_8(VAR_24, ".ogg"))
   {
      VAR_31->type = VAR_4;
      VAR_30->type = VAR_13;
      VAR_32->callback = VAR_20;
   }
   else if (FUNC_8(VAR_24, ".mp3"))
   {
      VAR_31->type = VAR_2;
      VAR_30->type = VAR_11;
      VAR_32->callback = VAR_19;
   }
   else if (FUNC_8(VAR_24, ".flac"))
   {
      VAR_31->type = VAR_0;
      VAR_30->type = VAR_9;
      VAR_32->callback = VAR_17;
   }
   else if (
         FUNC_8(VAR_24, ".mod") ||
         FUNC_8(VAR_24, ".s3m") ||
         FUNC_8(VAR_24, ".xm"))
   {
      VAR_31->type = VAR_1;
      VAR_30->type = VAR_10;
      VAR_32->callback = VAR_18;
   }

   if (VAR_27)
      VAR_33->stream_type = VAR_6;
   else
      VAR_33->stream_type = VAR_7;

   VAR_33->slot_selection_type = VAR_28;
   VAR_33->slot_selection_idx = VAR_29;

   VAR_30->data = (struct audio_mixer_handle*)VAR_31;
   VAR_30->is_finished = 0;
   VAR_30->cb = &VAR_15;
   VAR_30->status = VAR_8;

   VAR_32->state = VAR_30;
   VAR_32->handler = VAR_23;
   VAR_32->cleanup = VAR_22;
   VAR_32->user_data = VAR_33;

   FUNC_10(VAR_32);

   return 1;

error:
   if (VAR_30)
   {
      if (!FUNC_6(VAR_30->path))
         FUNC_2(VAR_30->path);
      if (VAR_30->data)
         FUNC_2(VAR_30->data);
      FUNC_3(VAR_30->handle);
      FUNC_2(VAR_30);
   }
   if (VAR_33)
      FUNC_2(VAR_33);
   if (VAR_32)
      FUNC_2(VAR_32);

   FUNC_0("[audio mixer load] Failed to open '%s': %s.\n",
         VAR_24, FUNC_5(VAR_16));

   return 0;
}
