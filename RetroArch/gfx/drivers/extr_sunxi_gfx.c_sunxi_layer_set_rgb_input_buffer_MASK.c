
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct TYPE_9__ {uintptr_t layer_id; int layer_scaler_is_enabled; uintptr_t framebuffer_paddr; uintptr_t fb_id; int fd_disp; int layer_format; int layer_buf_h; int layer_buf_w; int layer_buf_y; int layer_buf_x; } ;
typedef TYPE_2__ sunxi_disp_t ;
typedef int fb ;
struct TYPE_10__ {int member_2; int member_3; int height; int width; int y; int x; int member_1; int member_0; } ;
typedef TYPE_3__ __disp_rect_t ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_11__ {uintptr_t* addr; int format; TYPE_1__ size; void* mode; int seq; } ;
typedef TYPE_4__ __disp_fb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,uintptr_t**) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(sunxi_disp_t *VAR_8,
   int VAR_9,
   uint32_t VAR_10,
   int VAR_11,
   int VAR_12,
   int VAR_13)
{
   __disp_fb_t VAR_14;
   uint32_t VAR_15[4];
   __disp_rect_t VAR_16 = { 0, 0, VAR_11, VAR_12 };

   FUNC_1(&VAR_14, 0, sizeof(VAR_14));

   if (VAR_8->layer_id < 0)
      return -1;

   if (!VAR_8->layer_scaler_is_enabled)
   {
      if (FUNC_2(VAR_8, VAR_4) == 0)
         VAR_8->layer_scaler_is_enabled = 1;
      else
         return -1;
   }

   VAR_14.addr[0] = VAR_8->framebuffer_paddr + VAR_10;
   VAR_14.size.height = VAR_12;

   if (VAR_9 == 32)
   {
      VAR_14.format = VAR_2;
      VAR_14.seq = VAR_6;
      VAR_14.mode = VAR_5;
      VAR_14.size.width = VAR_13;
   }
   else if (VAR_9 == 16)
   {
      VAR_14.format = VAR_3;
      VAR_14.seq = VAR_7;
      VAR_14.mode = VAR_5;
      VAR_14.size.width = VAR_13 * 2;
   }
   else
      return -1;

   VAR_15[0] = VAR_8->fb_id;
   VAR_15[1] = VAR_8->layer_id;
   VAR_15[2] = (uintptr_t)&VAR_14;

   if (FUNC_0(VAR_8->fd_disp, VAR_0, &VAR_15) < 0)
      return -1;

   VAR_8->layer_buf_x = VAR_16.x;
   VAR_8->layer_buf_y = VAR_16.y;
   VAR_8->layer_buf_w = VAR_16.width;
   VAR_8->layer_buf_h = VAR_16.height;
   VAR_8->layer_format = VAR_14.format;

   VAR_15[0] = VAR_8->fb_id;
   VAR_15[1] = VAR_8->layer_id;
   VAR_15[2] = (uintptr_t)&VAR_16;

   return FUNC_0(VAR_8->fd_disp, VAR_1, &VAR_15);
}
