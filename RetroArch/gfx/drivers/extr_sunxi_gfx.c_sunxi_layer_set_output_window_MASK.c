
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct TYPE_4__ {scalar_t__ layer_id; int layer_win_x; int layer_win_y; uintptr_t fb_id; int fd_disp; } ;
typedef TYPE_1__ sunxi_disp_t ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_2__ __disp_rect_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,uintptr_t**) ;

__attribute__((used)) static int FUNC_1(sunxi_disp_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
   __disp_rect_t VAR_6 = { VAR_2, VAR_3, VAR_4, VAR_5 };
   uint32_t VAR_7[4];

   if (VAR_1->layer_id < 0 || VAR_4 <= 0 || VAR_5 <= 0)
      return -1;


   VAR_1->layer_win_x = VAR_2;
   VAR_1->layer_win_y = VAR_3;

   VAR_7[0] = VAR_1->fb_id;
   VAR_7[1] = VAR_1->layer_id;
   VAR_7[2] = (uintptr_t)&VAR_6;
   return FUNC_0(VAR_1->fd_disp, VAR_0, &VAR_7);
}
