
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_24__ {int height; int width; } ;
typedef TYPE_5__ video_frame_info_t ;
struct TYPE_25__ {float alpha; int width; int unfold; int offset_y; int text_height; scalar_t__ unfolding; int unfolded; int msg; } ;
typedef TYPE_6__ menu_widget_msg_t ;
typedef scalar_t__ menu_texture_item ;
struct TYPE_22__ {scalar_t__ vertices; } ;
struct TYPE_23__ {TYPE_3__ coords; } ;
struct TYPE_20__ {scalar_t__ vertices; } ;
struct TYPE_21__ {TYPE_1__ coords; } ;
struct TYPE_19__ {TYPE_4__ carr; } ;
struct TYPE_18__ {TYPE_2__ carr; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,TYPE_5__*) ;
 TYPE_16__ VAR_3 ;
 TYPE_15__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,int,unsigned int,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int,int ,int,unsigned int,int ,int ,int,int ,int) ;
 int FUNC_6 (TYPE_5__*,int,int ,int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,float) ;
 int FUNC_9 (TYPE_5__*,int ,int ,scalar_t__,scalar_t__,int,int ,int,int ,int,int ) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static void FUNC_10(menu_widget_msg_t *VAR_27, video_frame_info_t *VAR_28)
{
   menu_texture_item VAR_29 = 0;

   unsigned VAR_30;
   unsigned VAR_31;

   if (!VAR_29)
      VAR_29 = VAR_6[VAR_0];


   FUNC_8(VAR_17, VAR_27->alpha);
   FUNC_8(VAR_7, VAR_27->alpha);
   FUNC_8(VAR_8, VAR_27->alpha);

   if (!VAR_27->unfolded || VAR_27->unfolding)
   {
      FUNC_1(VAR_28->width, VAR_28->height, VAR_5, VAR_28);
      FUNC_1(VAR_28->width, VAR_28->height, VAR_2, VAR_28);

      VAR_4.carr.coords.vertices = 0;
      VAR_3.carr.coords.vertices = 0;

      FUNC_6(VAR_28, VAR_23, 0,
         (VAR_23 + VAR_27->width - VAR_26*2) * VAR_27->unfold, VAR_28->height);
   }

   if (VAR_9)
   {
      FUNC_2(VAR_28);


      FUNC_9(VAR_28,
         VAR_15, VAR_16,
         VAR_14, VAR_24, (int)(VAR_28->height - VAR_27->offset_y - VAR_12),
         VAR_28->width, VAR_28->height,
         0, 1, VAR_8);

      FUNC_3(VAR_28);
   }


   VAR_30 = VAR_26 + VAR_27->width;

   FUNC_4(VAR_28,
      VAR_20, VAR_28->height - VAR_27->offset_y,
      VAR_30, VAR_10,
      VAR_28->width, VAR_28->height,
      VAR_8
   );


   VAR_31 = FUNC_0(0xFFFFFF00, (unsigned)(VAR_27->alpha*255.0f));

   FUNC_5(VAR_5,
      VAR_27->msg,
      VAR_22 - ((1.0f-VAR_27->unfold) * VAR_27->width/2),
      VAR_28->height - VAR_27->offset_y + VAR_21 - VAR_27->text_height/2,
      VAR_28->width, VAR_28->height,
      VAR_31,
      VAR_1,
      VAR_25, 0, 0, 1
   );

   if (!VAR_27->unfolded || VAR_27->unfolding)
   {
      FUNC_1(VAR_28->width, VAR_28->height, VAR_5, VAR_28);
      FUNC_1(VAR_28->width, VAR_28->height, VAR_2, VAR_28);

      VAR_4.carr.coords.vertices = 0;
      VAR_3.carr.coords.vertices = 0;

      FUNC_7(VAR_28);
   }

   if (VAR_9)
   {
      FUNC_2(VAR_28);

      FUNC_9(VAR_28,
         VAR_15, VAR_16,
         VAR_11, VAR_24, VAR_28->height - VAR_27->offset_y - VAR_12,
         VAR_28->width, VAR_28->height,
         0, 1, VAR_17);

      FUNC_9(VAR_28,
         VAR_15, VAR_16,
         VAR_13, VAR_24, VAR_28->height - VAR_27->offset_y - VAR_12,
         VAR_28->width, VAR_28->height,
         0, 1, VAR_7);

      FUNC_9(VAR_28,
         VAR_19, VAR_19,
         VAR_29, VAR_24 + VAR_18, VAR_28->height - VAR_27->offset_y - VAR_12 + VAR_18,
         VAR_28->width, VAR_28->height,
         0, 1, VAR_7);

      FUNC_3(VAR_28);
   }
}
