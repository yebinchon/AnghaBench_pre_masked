
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint16_t ;
struct TYPE_16__ {scalar_t__ menu_rgui_aspect_ratio_lock; int menu_rgui_aspect_ratio; } ;
struct TYPE_17__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_18__ {char* theme_preset_path; int bg_modified; int force_redraw; int menu_video_settings; int menu_aspect_ratio; } ;
typedef TYPE_3__ rgui_t ;
struct TYPE_21__ {unsigned int height; int width; int * data; } ;
struct TYPE_20__ {int start_x; int start_y; unsigned int width; int height; unsigned int value_maxlen; } ;
struct TYPE_19__ {int max_width; int max_height; int * data; } ;
struct TYPE_15__ {int width; int height; int * data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_5__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 TYPE_10__ VAR_9 ;
 int FUNC_6 () ;
 TYPE_9__ VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,int *,int) ;
 TYPE_6__ VAR_11 ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_11(rgui_t *VAR_12, bool VAR_13)
{
   unsigned VAR_14;
   settings_t *VAR_15 = FUNC_1();

   FUNC_7();
   FUNC_6();
   FUNC_9(&VAR_4);
   FUNC_9(&VAR_6);
   FUNC_9(&VAR_5);


   VAR_12->menu_aspect_ratio = VAR_15->uints.menu_rgui_aspect_ratio;
   VAR_10.height = 240;
   switch (VAR_12->menu_aspect_ratio)
   {
      case 129:
         VAR_10.width = 426;
         VAR_14 = VAR_10.width;
         break;
      case 128:
         VAR_10.width = 426;
         VAR_14 = 320;
         break;
      case 131:
         VAR_10.width = 384;
         VAR_14 = VAR_10.width;
         break;
      case 130:
         VAR_10.width = 384;
         VAR_14 = 320;
         break;
      default:

         VAR_10.width = 320;
         VAR_14 = VAR_10.width;
         break;
   }



   VAR_10.data = (uint16_t*)FUNC_0(
         VAR_10.width * VAR_10.height, sizeof(uint16_t));

   if (!VAR_10.data)
      return 0;


   FUNC_5(VAR_10.width);
   FUNC_4(VAR_10.height);
   FUNC_3(VAR_10.width * sizeof(uint16_t));


   VAR_11.start_x = (3 * 5) + 1;
   VAR_11.start_y = (3 * 5) + VAR_0;
   VAR_11.width = (VAR_14 - (2 * VAR_11.start_x)) / VAR_1;
   VAR_11.height = (VAR_10.height - (2 * VAR_11.start_y)) / VAR_0;
   VAR_11.value_maxlen = (unsigned)(((float)VAR_3 * (float)VAR_14 / 320.0f) + 0.5);


   VAR_11.start_x = (VAR_10.width - (VAR_11.width * VAR_1)) / 2;
   VAR_11.start_y = (VAR_10.height - (VAR_11.height * VAR_0)) / 2;


   VAR_9.width = VAR_10.width;
   VAR_9.height = VAR_10.height;
   VAR_9.data = (uint16_t*)FUNC_0(
         VAR_9.width * VAR_9.height, sizeof(uint16_t));

   if (!VAR_9.data)
      return 0;


   VAR_4.max_width = VAR_10.width;
   VAR_4.max_height = VAR_10.height;
   VAR_4.data = (uint16_t*)FUNC_0(
         VAR_4.max_width * VAR_4.max_height, sizeof(uint16_t));
   if (!VAR_4.data)
      return 0;


   VAR_8 = ((VAR_11.width - 4) > 19 ? 19 : (VAR_11.width - 4)) * VAR_1;
   VAR_7 = (unsigned)((VAR_11.height * VAR_0) * 0.5f) - 2;

   VAR_6.max_width = VAR_8;
   VAR_6.max_height = VAR_7;
   VAR_6.data = (uint16_t*)FUNC_0(
         VAR_6.max_width * VAR_6.max_height, sizeof(uint16_t));
   if (!VAR_6.data)
      return 0;

   VAR_5.max_width = VAR_8;
   VAR_5.max_height = VAR_7;
   VAR_5.data = (uint16_t*)FUNC_0(
         VAR_5.max_width * VAR_5.max_height, sizeof(uint16_t));
   if (!VAR_5.data)
      return 0;


   VAR_12->theme_preset_path[0] = '\0';
   VAR_12->bg_modified = 1;
   VAR_12->force_redraw = 1;



   if (VAR_15->uints.menu_rgui_aspect_ratio_lock != VAR_2)
   {
      FUNC_10(VAR_12);
      FUNC_8(VAR_12, &VAR_12->menu_video_settings, VAR_13);
   }

   return 1;
}
