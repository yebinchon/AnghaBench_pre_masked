
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_22__ {unsigned int height; int width; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int task_percentage ;
struct TYPE_21__ {int video_font_size; } ;
struct TYPE_23__ {TYPE_3__ floats; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_24__ {int task_progress; float width; float alpha; int task_count; unsigned int offset_y; char* msg_new; int msg_transition_animation; char* msg; int hourglass_rotation; scalar_t__ task_finished; scalar_t__ task_error; } ;
typedef TYPE_6__ menu_widget_msg_t ;
struct TYPE_19__ {scalar_t__ vertices; } ;
struct TYPE_20__ {TYPE_1__ coords; } ;
struct TYPE_18__ {TYPE_2__ carr; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int ,unsigned int,int ,TYPE_4__*) ;
 TYPE_15__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,unsigned int,unsigned int,unsigned int,unsigned int,int ,unsigned int,float*) ;
 int FUNC_6 (int ,char*,scalar_t__,int,int ,int,unsigned int,int ,int,int,int ,int) ;
 int FUNC_7 (TYPE_4__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (float*,float) ;
 int FUNC_10 (TYPE_4__*,int,int,int ,int ,unsigned int,int ,unsigned int,int ,int,float*) ;
 int * VAR_7 ;
 float* VAR_8 ;
 float* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 float* VAR_15 ;
 float* VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 float VAR_20 ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void FUNC_13(menu_widget_msg_t *VAR_21, video_frame_info_t *VAR_22)
{
   unsigned VAR_23;
   unsigned VAR_24;

   unsigned VAR_25;
   unsigned VAR_26;
   unsigned VAR_27;
   unsigned VAR_28;

   float *VAR_29;
   float *VAR_30;

   unsigned VAR_31 = 0;
   char VAR_32[256] = {0};
   settings_t *VAR_33 = FUNC_1();

   VAR_31 = VAR_6 * (VAR_21->task_error ? 12 : 5) + VAR_20 * 1.25f;

   if (VAR_21->task_finished)
   {
      if (VAR_21->task_error)
         FUNC_12(VAR_32, "Task failed", sizeof(VAR_32));
      else
         FUNC_12(VAR_32, " ", sizeof(VAR_32));
   }
   else if (VAR_21->task_progress >= 0 && VAR_21->task_progress <= 100)
      FUNC_11(VAR_32, sizeof(VAR_32),
            "%i%%", VAR_21->task_progress);

   VAR_27 = VAR_20 + VAR_21->width + VAR_31;
   VAR_24 = VAR_27 * VAR_21->task_progress/100.0f;
   VAR_23 = FUNC_0(0xFFFFFF00, (unsigned)(VAR_21->alpha*255.0f));


   if (VAR_21->task_finished)
      if (VAR_21->task_count == 1)
         VAR_29 = VAR_15;
      else
         VAR_29 = VAR_16;
   else
      if (VAR_21->task_count == 1)
         VAR_29 = VAR_9;
      else
         VAR_29 = VAR_15;

   VAR_25 = VAR_13 - VAR_12;
   VAR_26 = VAR_22->height - VAR_21->offset_y;
   VAR_28 = VAR_11/2;

   FUNC_9(VAR_29, VAR_21->alpha);
   FUNC_5(VAR_22,
      VAR_25, VAR_26,
      VAR_27, VAR_28,
      VAR_22->width, VAR_22->height,
      VAR_29
   );


   if (!VAR_21->task_finished && VAR_21->task_progress >= 0 && VAR_21->task_progress <= 100)
   {
      if (VAR_21->task_count == 1)
         VAR_30 = VAR_15;
      else
         VAR_30 = VAR_16;

      FUNC_9(VAR_30, 1.0f);
      FUNC_5(VAR_22,
         VAR_17, VAR_22->height - VAR_21->offset_y,
         VAR_24, VAR_28,
         VAR_22->width, VAR_22->height,
         VAR_30
      );
   }


   FUNC_9(VAR_8, VAR_21->alpha);
   FUNC_3(VAR_22);
   FUNC_10(VAR_22,
      VAR_11/2,
      VAR_11/2,
      VAR_7[VAR_21->task_finished ? VAR_0 : VAR_1],
      VAR_14,
      VAR_22->height - VAR_21->offset_y,
      VAR_22->width,
      VAR_22->height,
      VAR_21->task_finished ? 0 : VAR_21->hourglass_rotation,
      1, VAR_8);
   FUNC_4(VAR_22);


   if (VAR_21->msg_new)
   {
      FUNC_2(VAR_22->width, VAR_22->height, VAR_5, VAR_22);
      VAR_4.carr.coords.vertices = 0;

      FUNC_7(VAR_22, VAR_25, VAR_26, VAR_27, VAR_28);
      FUNC_6(VAR_5,
         VAR_21->msg_new,
         VAR_18,
         VAR_22->height - VAR_21->offset_y + VAR_19 * VAR_33->floats.video_font_size + VAR_11/4 - VAR_33->floats.video_font_size/2.25f - VAR_11/2 + VAR_21->msg_transition_animation,
         VAR_22->width, VAR_22->height,
         VAR_23,
         VAR_2,
         VAR_19,
         0,
         0,
         1
      );
   }

   FUNC_6(VAR_5,
      VAR_21->msg,
      VAR_18,
      VAR_22->height - VAR_21->offset_y + VAR_19 * VAR_33->floats.video_font_size + VAR_11/4 - VAR_33->floats.video_font_size/2.25f + VAR_21->msg_transition_animation,
      VAR_22->width, VAR_22->height,
      VAR_23,
      VAR_2,
      VAR_19,
      0,
      0,
      1
   );

   if (VAR_21->msg_new)
   {
      FUNC_2(VAR_22->width, VAR_22->height, VAR_5, VAR_22);
      VAR_4.carr.coords.vertices = 0;

      FUNC_8(VAR_22);
   }


   VAR_23 = FUNC_0(0xFFFFFF00, (unsigned)(VAR_21->alpha/2*255.0f));
   FUNC_6(VAR_5,
      VAR_32,
      VAR_13 - VAR_12 + VAR_27 - VAR_10,
      VAR_22->height - VAR_21->offset_y + VAR_19 * VAR_33->floats.video_font_size + VAR_11/4 - VAR_33->floats.video_font_size/2.25f,
      VAR_22->width, VAR_22->height,
      VAR_23,
      VAR_3,
      VAR_19,
      0,
      0,
      1
   );
}
