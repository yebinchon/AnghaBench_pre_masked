
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct sunxi_video {int pageflip_pending; int pending_mutex; TYPE_2__* sunxi_disp; int src_height; int src_width; TYPE_1__* nextPage; int src_pixels_per_line; int dst_pixels_per_line; int vsync_condition; } ;
struct TYPE_4__ {int xres; int bits_per_pixel; } ;
struct TYPE_3__ {int offset; int address; } ;


 int FUNC_0 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(const void *VAR_0, struct sunxi_video *VAR_1)
{
   FUNC_2(VAR_1->pending_mutex);

   if (VAR_1->pageflip_pending)
      FUNC_1(VAR_1->vsync_condition, VAR_1->pending_mutex);

   FUNC_3(VAR_1->pending_mutex);


   FUNC_0(
      VAR_1->src_width,
      VAR_1->src_height,
      VAR_1->nextPage->address,
      VAR_1->dst_pixels_per_line,
      (uint16_t*)VAR_0,
      VAR_1->src_pixels_per_line
      );


   FUNC_4(VAR_1->sunxi_disp, VAR_1->sunxi_disp->bits_per_pixel,
      VAR_1->nextPage->offset,
      VAR_1->src_width, VAR_1->src_height, VAR_1->sunxi_disp->xres);

   FUNC_2(VAR_1->pending_mutex);
   VAR_1->pageflip_pending = 1;
   FUNC_3(VAR_1->pending_mutex);
}
