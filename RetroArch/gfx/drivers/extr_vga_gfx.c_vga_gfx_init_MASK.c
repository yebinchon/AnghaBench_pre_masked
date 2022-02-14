
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int is_threaded; scalar_t__ font_enable; scalar_t__ rgb32; int height; } ;
typedef TYPE_1__ video_info_t ;
typedef void vga_t ;
typedef int input_driver_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned char* VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void *FUNC_4(const video_info_t *VAR_9,
      input_driver_t **VAR_10, void **VAR_11)
{
   vga_t *VAR_12 = (vga_t*)FUNC_0(1, sizeof(*VAR_12));

   *VAR_10 = ((void*)0);
   *VAR_11 = ((void*)0);

   VAR_8 = VAR_9->width;
   VAR_6 = VAR_9->height;
   VAR_4 = VAR_9->rgb32;

   if (VAR_9->rgb32)
   {
      VAR_7 = VAR_9->width * 4;
      VAR_5 = 32;
   }
   else
   {
      VAR_7 = VAR_9->width * 2;
      VAR_5 = 16;
   }

   VAR_3 = (unsigned char*)FUNC_2(VAR_2 * VAR_1);

   FUNC_3();

   if (VAR_9->font_enable)
      FUNC_1(((void*)0), 0,
            VAR_9->is_threaded, VAR_0);

   return VAR_12;
}
