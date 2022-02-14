
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct TYPE_9__ {uintptr_t fb_id; uintptr_t layer_id; int layer_has_scaler; void* layer_format; scalar_t__ layer_scaler_is_enabled; int fd_disp; int framebuffer_paddr; } ;
typedef TYPE_3__ sunxi_disp_t ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {int mode; int seq; void* format; TYPE_1__ size; int * addr; } ;
struct TYPE_10__ {int pipe; int alpha_en; int alpha_val; TYPE_2__ fb; } ;
typedef TYPE_4__ __disp_layer_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 uintptr_t VAR_4 ;
 uintptr_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*,uintptr_t) ;

__attribute__((used)) static int FUNC_2(sunxi_disp_t *VAR_8)
{
   __disp_layer_info_t VAR_9;
   uint32_t VAR_10[4];



   VAR_10[0] = VAR_8->fb_id;
   VAR_10[1] = VAR_4;
   VAR_8->layer_id = FUNC_0(VAR_8->fd_disp, VAR_1, &VAR_10);
   if (VAR_8->layer_id < 0)
      return -1;



   VAR_10[0] = VAR_8->fb_id;
   VAR_10[1] = VAR_8->layer_id;
   VAR_10[2] = (uintptr_t)&VAR_9;
   if (FUNC_0(VAR_8->fd_disp, VAR_0, VAR_10) < 0)
      return -1;


   VAR_9.pipe = 1;
   VAR_9.alpha_en = 1;
   VAR_9.alpha_val = 255;

   VAR_9.fb.addr[0] = VAR_8->framebuffer_paddr;
   VAR_9.fb.size.width = 1;
   VAR_9.fb.size.height = 1;
   VAR_9.fb.format = VAR_3;
   VAR_9.fb.seq = VAR_7;
   VAR_9.fb.mode = VAR_6;

   VAR_10[0] = VAR_8->fb_id;
   VAR_10[1] = VAR_8->layer_id;
   VAR_10[2] = (uintptr_t)&VAR_9;
   if (FUNC_0(VAR_8->fd_disp, VAR_2, VAR_10) < 0)
      return -1;


   if (FUNC_1(VAR_8, VAR_5) == 0)
      VAR_8->layer_has_scaler = 1;


   FUNC_1(VAR_8, VAR_4);
   VAR_8->layer_scaler_is_enabled = 0;
   VAR_8->layer_format = VAR_3;

   return VAR_8->layer_id;
}
