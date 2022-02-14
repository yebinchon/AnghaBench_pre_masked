
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {unsigned int vc_cols; unsigned int vc_x; scalar_t__ vc_need_wrap; int vc_video_erase_char; int vc_y; TYPE_1__* vc_sw; scalar_t__ vc_pos; } ;
struct TYPE_2__ {int (* con_clear ) (struct vc_data*,int ,unsigned int,int,unsigned int) ;} ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (unsigned short*,int ,int) ;
 int FUNC_2 (struct vc_data*,int ,unsigned int,int,unsigned int) ;
 int FUNC_3 (struct vc_data*,int ,unsigned int,int,unsigned int) ;
 int FUNC_4 (struct vc_data*,int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 unsigned short * VAR_3;

 switch (VAR_1) {
  case 0:
   VAR_2 = VAR_0->vc_cols - VAR_0->vc_x;
   VAR_3 = (unsigned short *)VAR_0->vc_pos;
   if (FUNC_0(VAR_0))
    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y, VAR_0->vc_x, 1,
           VAR_0->vc_cols - VAR_0->vc_x);
   break;
  case 1:
   VAR_3 = (unsigned short *)(VAR_0->vc_pos - (VAR_0->vc_x << 1));
   VAR_2 = VAR_0->vc_x + 1;
   if (FUNC_0(VAR_0))
    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y, 0, 1,
           VAR_0->vc_x + 1);
   break;
  case 2:
   VAR_3 = (unsigned short *)(VAR_0->vc_pos - (VAR_0->vc_x << 1));
   VAR_2 = VAR_0->vc_cols;
   if (FUNC_0(VAR_0))
    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y, 0, 1,
           VAR_0->vc_cols);
   break;
  default:
   return;
 }
 FUNC_1(VAR_3, VAR_0->vc_video_erase_char, 2 * VAR_2);
 VAR_0->vc_need_wrap = 0;
}
