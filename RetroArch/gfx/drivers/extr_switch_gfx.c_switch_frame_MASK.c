
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int osd_stat_params; int stat_text; scalar_t__ statistics_show; } ;
typedef TYPE_2__ video_frame_info_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {unsigned int in_width; unsigned int in_height; unsigned int in_stride; int out_width; int out_height; int out_stride; int scaler_type; int out_fmt; int in_fmt; } ;
struct TYPE_10__ {void const* pixels; int tgth; int tgtw; TYPE_5__ scaler; scalar_t__ fullscreen; scalar_t__ enable; } ;
struct TYPE_12__ {int* image; unsigned int last_width; unsigned int last_height; int surface; TYPE_1__ menu_texture; TYPE_5__ scaler; scalar_t__ rgb32; } ;
typedef TYPE_3__ switch_video_t ;
struct font_params {int dummy; } ;
typedef scalar_t__ result_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,struct font_params const*) ;
 int FUNC_5 (int *,int*,int,int,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int*,void const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;

__attribute__((used)) static bool FUNC_15(void *VAR_5, const void *VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      uint64_t VAR_9, unsigned VAR_10,
      const char *VAR_11, video_frame_info_t *VAR_12)
{
 static uint64_t VAR_13 = 0;

   unsigned VAR_14, VAR_15;
   result_t VAR_16;
   int VAR_17, VAR_18, VAR_19, VAR_20;
   uint32_t *VAR_21 = ((void*)0);
   switch_video_t *VAR_22 = VAR_5;
   int VAR_23 = 1280 / VAR_7;
   int VAR_24 = 720 / VAR_8;
   int VAR_25 = VAR_23;

   if (VAR_24 < VAR_25)
      VAR_25 = VAR_24;

   VAR_17 = VAR_7 * VAR_25;
   VAR_18 = VAR_8 * VAR_25;
   VAR_19 = (1280-VAR_17)/2;
   VAR_20 = (720-VAR_18)/2;


   for(VAR_15 = 0; VAR_15 < 720; VAR_15++)
   {
      for(VAR_14 = 0; VAR_14 < 1280; VAR_14++)
         VAR_22->image[VAR_15*1280+VAR_14] = 0xFF000000;
   }

   if(VAR_7 > 0 && VAR_8 > 0)
   {
    if(VAR_22->last_width != VAR_7 ||
       VAR_22->last_height != VAR_8)
      {
         FUNC_8(&VAR_22->scaler);

         VAR_22->scaler.in_width = VAR_7;
         VAR_22->scaler.in_height = VAR_8;
         VAR_22->scaler.in_stride = VAR_10;
         VAR_22->scaler.in_fmt = VAR_22->rgb32 ? VAR_2 : VAR_3;

         VAR_22->scaler.out_width = VAR_17;
         VAR_22->scaler.out_height = VAR_18;
         VAR_22->scaler.out_stride = 1280 * sizeof(uint32_t);
         VAR_22->scaler.out_fmt = VAR_1;

         VAR_22->scaler.scaler_type = VAR_4;

         if(!FUNC_7(&VAR_22->scaler))
         {
            FUNC_0("failed to generate scaler for main image\n");
            return 0;
         }

         VAR_22->last_width = VAR_7;
         VAR_22->last_height = VAR_8;
      }

    FUNC_9(&VAR_22->scaler, VAR_22->image + (VAR_20 * 1280) + VAR_19, VAR_6);
   }
   if (VAR_11 && FUNC_10(VAR_11) > 0)
      FUNC_1("message: %s\n", VAR_11);

   VAR_16 = FUNC_11(&VAR_22->surface, &VAR_21);
   if(VAR_16 != VAR_0)
    return 1;

   VAR_16 = FUNC_13(&VAR_22->surface);
   if(VAR_16 != VAR_0)
    return 1;
   FUNC_5(VAR_21, VAR_22->image, 1280, 720, 0, 0);

   VAR_16 = FUNC_12(&VAR_22->surface);

   if (VAR_16 != VAR_0)
      return 0;

   VAR_13 = FUNC_14();
   return 1;
}
