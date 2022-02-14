
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {TYPE_3__* frame; int scaler; } ;
struct TYPE_5__ {TYPE_1__ menu; } ;
typedef TYPE_2__ sdl_video_t ;
typedef enum scaler_pix_fmt { ____Placeholder_scaler_pix_fmt } scaler_pix_fmt ;
struct TYPE_6__ {int pitch; int h; int w; int pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,double) ;
 int FUNC_1 (int *,int ,void const*,int,int ,int ,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, const void *VAR_4, bool VAR_5,
      unsigned VAR_6, unsigned VAR_7, float VAR_8)
{
   enum scaler_pix_fmt VAR_9 = VAR_5
      ? VAR_0 : VAR_1;
   sdl_video_t *VAR_10 = (sdl_video_t*)VAR_3;

   FUNC_1(
         &VAR_10->menu.scaler,
         VAR_10->menu.frame->pixels,
         VAR_4,
         VAR_9,
         VAR_10->menu.frame->w,
         VAR_10->menu.frame->h,
         VAR_10->menu.frame->pitch,
         VAR_6,
         VAR_7,
         VAR_6 * (VAR_5 ? sizeof(uint32_t) : sizeof(uint16_t))
         );

   FUNC_0(VAR_10->menu.frame, VAR_2, 255.0 * VAR_8);
}
