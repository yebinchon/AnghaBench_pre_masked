
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct TYPE_4__ {uintptr_t layer_id; uintptr_t fb_id; int fd_disp; } ;
typedef TYPE_1__ sunxi_disp_t ;
struct TYPE_5__ {int mode; } ;
typedef TYPE_2__ __disp_layer_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,uintptr_t*) ;

__attribute__((used)) static int FUNC_1(sunxi_disp_t *VAR_2, int VAR_3)
{
   __disp_layer_info_t VAR_4;
   uint32_t VAR_5[4];

   if (VAR_2->layer_id < 0)
      return -1;

   VAR_5[0] = VAR_2->fb_id;
   VAR_5[1] = VAR_2->layer_id;
   VAR_5[2] = (uintptr_t)&VAR_4;

   if (FUNC_0(VAR_2->fd_disp, VAR_0, VAR_5) < 0)
      return -1;

   VAR_4.mode = VAR_3;

   VAR_5[0] = VAR_2->fb_id;
   VAR_5[1] = VAR_2->layer_id;
   VAR_5[2] = (uintptr_t)&VAR_4;
   return FUNC_0(VAR_2->fd_disp, VAR_1, VAR_5);
}
