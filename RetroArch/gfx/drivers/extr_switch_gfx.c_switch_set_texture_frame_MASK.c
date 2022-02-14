
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scaler_ctx {unsigned int in_width; unsigned int in_height; unsigned int in_stride; unsigned int out_width; unsigned int out_height; int out_stride; int scaler_type; int out_fmt; int in_fmt; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; unsigned int tgtw; unsigned int tgth; scalar_t__ pixels; struct scaler_ctx scaler; } ;
struct TYPE_4__ {TYPE_1__ menu_texture; } ;
typedef TYPE_2__ switch_video_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__,void const*,unsigned int) ;
 int FUNC_4 (struct scaler_ctx*) ;
 int FUNC_5 (struct scaler_ctx*) ;

__attribute__((used)) static void FUNC_6(
      void *VAR_4, const void *VAR_5, bool VAR_6,
      unsigned VAR_7, unsigned VAR_8, float VAR_9)
{
   switch_video_t *VAR_10 = VAR_4;

   if ( !VAR_10->menu_texture.pixels ||
         VAR_10->menu_texture.width != VAR_7 ||
         VAR_10->menu_texture.height != VAR_8)
   {
      struct scaler_ctx *VAR_11;
      int VAR_12, VAR_13, VAR_14;
      if (VAR_10->menu_texture.pixels)
         FUNC_1(VAR_10->menu_texture.pixels);

      VAR_10->menu_texture.pixels = FUNC_2(VAR_7 * VAR_8 * (VAR_6 ? 4 : 2));
      if (!VAR_10->menu_texture.pixels)
      {
         FUNC_0("failed to allocate buffer for menu texture\n");
         return;
      }

      VAR_12 = 1280 / VAR_7;
      VAR_13 = 720 / VAR_8;
      VAR_14 = VAR_12;

      if (VAR_13 < VAR_14)
       VAR_14 = VAR_13;

      VAR_10->menu_texture.width = VAR_7;
      VAR_10->menu_texture.height = VAR_8;
      VAR_10->menu_texture.tgtw = VAR_7 * VAR_14;
      VAR_10->menu_texture.tgth = VAR_8 * VAR_14;

      VAR_11 = &VAR_10->menu_texture.scaler;
      FUNC_5(VAR_11);

      VAR_11->in_width = VAR_7;
      VAR_11->in_height = VAR_8;
      VAR_11->in_stride = VAR_7 * (VAR_6 ? 4 : 2);
      VAR_11->in_fmt = VAR_6 ? VAR_1 : VAR_2;

      VAR_11->out_width = VAR_10->menu_texture.tgtw;
      VAR_11->out_height = VAR_10->menu_texture.tgth;
      VAR_11->out_stride = 1280 * 4;
      VAR_11->out_fmt = VAR_0;

      VAR_11->scaler_type = VAR_3;

      if (!FUNC_4(VAR_11))
      {
         FUNC_0("failed to generate scaler for menu texture\n");
         return;
      }
   }

   FUNC_3(VAR_10->menu_texture.pixels, VAR_5, VAR_7 * VAR_8 * (VAR_6 ? 4 : 2));
}
