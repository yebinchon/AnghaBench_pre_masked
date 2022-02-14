
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {float width; float height; int * texture; scalar_t__ active; } ;
struct TYPE_11__ {float width; float height; int y; int x; } ;
struct TYPE_13__ {unsigned int width; unsigned int height; scalar_t__ format; float const rotation; TYPE_2__ menu; scalar_t__ fullscreen; scalar_t__ overlay_enable; TYPE_1__ vp; int * texture; scalar_t__ should_resize; int tex_filter; } ;
typedef TYPE_3__ vita_video_t ;
struct TYPE_14__ {char const* stat_text; int osd_stat_params; scalar_t__ statistics_show; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct font_params {int dummy; } ;


 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int *,char const*,struct font_params const*) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (unsigned int,unsigned int,scalar_t__) ;
 int FUNC_6 (int ,int ,float,float,int ) ;
 int FUNC_7 (int *,float,float,float,float) ;
 int FUNC_8 (int *,int ,int ,float,float,float const) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 void const* FUNC_16 (int *) ;
 unsigned int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_19(void *VAR_3, const void *VAR_4,
      unsigned VAR_5, unsigned VAR_6, uint64_t VAR_7,
      unsigned VAR_8, const char *VAR_9, video_frame_info_t *VAR_10)
{
   void *VAR_11;
   vita_video_t *VAR_12 = (vita_video_t *)VAR_3;

   if (VAR_4)
   {
      if(!(VAR_12->texture&&FUNC_16(VAR_12->texture)==VAR_4))
      {
         unsigned VAR_13;
         unsigned int VAR_14;

         if ((VAR_5 != VAR_12->width || VAR_6 != VAR_12->height) && VAR_12->texture)
         {
            FUNC_10(VAR_12->texture);
            VAR_12->texture = ((void*)0);
         }

         if (!VAR_12->texture)
         {
            FUNC_0("Creating texture: %ix%i\n", VAR_5, VAR_6);
            VAR_12->width = VAR_5;
            VAR_12->height = VAR_6;
            VAR_12->texture = FUNC_5(VAR_5, VAR_6, VAR_12->format);
            FUNC_18(VAR_12->texture,VAR_12->tex_filter,VAR_12->tex_filter);
         }
         VAR_11 = FUNC_16(VAR_12->texture);
         VAR_14 = FUNC_17(VAR_12->texture);

         if (VAR_12->format == VAR_2)
         {
            VAR_14 /= 4;
            VAR_8 /= 4;
            uint32_t *VAR_15 = VAR_11;
            const uint32_t *VAR_16 = VAR_4;

            for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
               FUNC_2(&VAR_15[VAR_13*VAR_14],&VAR_16[VAR_13*VAR_8],VAR_8*sizeof(uint32_t));
         }
         else
         {
            VAR_14 /= 2;
            VAR_8 /= 2;
            uint16_t *VAR_17 = VAR_11;
            const uint16_t *VAR_18 = VAR_4;

            for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
               FUNC_2(&VAR_17[VAR_13*VAR_14],&VAR_18[VAR_13*VAR_8],VAR_5*sizeof(uint16_t));
         }
      }
   }

   if (VAR_12->should_resize)
      FUNC_12(VAR_12, VAR_10);

   FUNC_14();

   FUNC_6(0,0,VAR_1,VAR_0,FUNC_11());

   if (VAR_12->texture)
   {
      if (VAR_12->fullscreen)
         FUNC_7(VAR_12->texture,
               0, 0,
               VAR_1 / (float)VAR_12->width,
               VAR_0 / (float)VAR_12->height);
      else
      {
         const float VAR_19 = 90 * 0.0174532925f;
         const float VAR_20 = VAR_12->rotation * VAR_19;
         float VAR_21 = VAR_12->vp.width / (float)VAR_12->width;
         float VAR_22 = VAR_12->vp.height / (float)VAR_12->height;
         FUNC_8(VAR_12->texture,VAR_12->vp.x,
               VAR_12->vp.y, VAR_21, VAR_22, VAR_20);
      }
   }






   if (VAR_12->menu.active)
   {




      if(VAR_12->menu.texture)
      {
         if (VAR_12->fullscreen)
            FUNC_7(VAR_12->menu.texture,
                  0, 0,
                  VAR_1 / (float)VAR_12->menu.width,
                  VAR_0 / (float)VAR_12->menu.height);
         else
         {
            if (VAR_12->menu.width > VAR_12->menu.height)
            {
               float VAR_23 = VAR_0 / (float)VAR_12->menu.height;
               float VAR_24 = VAR_12->menu.width * VAR_23;
               FUNC_7(VAR_12->menu.texture,
                     VAR_1 / 2.0f - VAR_24/2.0f, 0.0f,
                     VAR_23, VAR_23);
            }
            else
            {
               float VAR_25 = VAR_1 / (float)VAR_12->menu.width;
               float VAR_26 = VAR_12->menu.height * VAR_25;
               FUNC_7(VAR_12->menu.texture,
                     0.0f, VAR_0 / 2.0f - VAR_26/2.0f,
                     VAR_25, VAR_25);
            }
         }
      }
   }
   else if (VAR_10->statistics_show)
   {
      struct font_params *VAR_27 = (struct font_params*)
         &VAR_10->osd_stat_params;

      if (VAR_27)
      {
         FUNC_1(VAR_10, ((void*)0), VAR_10->stat_text,
               (const struct font_params*)&VAR_10->osd_stat_params);
      }
   }

   if(!FUNC_4(VAR_9))
      FUNC_1(VAR_10, ((void*)0), VAR_9, ((void*)0));

   FUNC_9();
   FUNC_15();

   return 1;
}
