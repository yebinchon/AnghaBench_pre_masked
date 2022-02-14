
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int frame; int scaler; } ;
struct TYPE_4__ {int width; int bytes_per_pixel; int height; TYPE_1__ menu; } ;
typedef TYPE_2__ omap_video_t ;
typedef enum scaler_pix_fmt { ____Placeholder_scaler_pix_fmt } scaler_pix_fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void const*,int,int,int ,int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, const void *VAR_3, bool VAR_4,
      unsigned VAR_5, unsigned VAR_6, float VAR_7)
{
   omap_video_t *VAR_8 = (omap_video_t*)VAR_2;
   enum scaler_pix_fmt VAR_9 = VAR_4 ? VAR_0 : VAR_1;

   FUNC_0(
         &VAR_8->menu.scaler,
         VAR_8->menu.frame,
         VAR_3,
         VAR_9,
         VAR_8->width,
         VAR_8->height,
         VAR_8->width * VAR_8->bytes_per_pixel,
         VAR_5,
         VAR_6,
         VAR_5 * (VAR_4 ? sizeof(uint32_t) : sizeof(uint16_t)));
}
