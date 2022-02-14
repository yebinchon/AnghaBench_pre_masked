
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int height; int width; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_10__ {scalar_t__ video_font_size; } ;
struct TYPE_12__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ menu_texture_item ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 float VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,char const*,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int,unsigned int,unsigned int,int ,int ,int ) ;
 int FUNC_5 (int ,char const*,int,scalar_t__,int ,int ,int,int ,float,int,int ,int) ;
 int FUNC_6 (int ,float) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int,scalar_t__,int,int,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 char* FUNC_8 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(video_frame_info_t *VAR_7,
      menu_texture_item VAR_8, int VAR_9, int VAR_10,
      enum msg_hash_enums VAR_11)
{
   unsigned VAR_12;
   settings_t *VAR_13 = FUNC_0();

   FUNC_6(VAR_3, VAR_0);

   if (VAR_8)
   {
      unsigned VAR_14 = VAR_5 * 2;
      VAR_12 = VAR_14;

      FUNC_4(VAR_7,
         VAR_10 - VAR_12, VAR_9,
         VAR_12, VAR_14,
         VAR_7->width, VAR_7->height,
         VAR_3
      );

      FUNC_6(VAR_4, 1.0f);

      FUNC_2(VAR_7);
      FUNC_7(VAR_7, VAR_12, VAR_14,
         VAR_8, VAR_10 - VAR_12, VAR_9,
         VAR_7->width, VAR_7->height,
         0, 1, VAR_4
      );
      FUNC_3(VAR_7);
   }
   else
   {
      unsigned VAR_15 = VAR_5;
      const char *VAR_16 = FUNC_8(VAR_11);
      VAR_12 = FUNC_1(VAR_2, VAR_16, (unsigned)FUNC_9(VAR_16), 1) + VAR_6*2;

      FUNC_4(VAR_7,
         VAR_10 - VAR_12, VAR_9,
         VAR_12, VAR_15,
         VAR_7->width, VAR_7->height,
         VAR_3
      );

      FUNC_5(VAR_2,
         VAR_16,
         VAR_10 - VAR_12 + VAR_6, VAR_13->floats.video_font_size + VAR_6/4,
         VAR_7->width, VAR_7->height,
         0xFFFFFFFF, VAR_1,
         1.0f,
         0, 0, 0
      );
   }

   return VAR_12;
}
