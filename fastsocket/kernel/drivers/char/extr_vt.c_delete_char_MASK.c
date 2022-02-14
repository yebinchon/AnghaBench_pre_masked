
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {unsigned int vc_x; unsigned int vc_cols; int vc_video_erase_char; unsigned short vc_attr; int vc_y; TYPE_1__* vc_sw; scalar_t__ vc_need_wrap; scalar_t__ vc_pos; } ;
struct TYPE_2__ {int (* con_putc ) (struct vc_data*,int,int ,int) ;int (* con_bmove ) (struct vc_data*,int ,unsigned int,int ,unsigned int,int,unsigned int) ;} ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (unsigned short*,int,unsigned int) ;
 int FUNC_2 (unsigned short*) ;
 int FUNC_3 (int ,unsigned short*) ;
 int FUNC_4 (struct vc_data*,int ,unsigned int,int ,unsigned int,int,unsigned int) ;
 int FUNC_5 (struct vc_data*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->vc_x;
 unsigned short *VAR_3 = (unsigned short *)VAR_0->vc_pos;

 while (++VAR_2 <= VAR_0->vc_cols - VAR_1) {
  FUNC_3(FUNC_2(VAR_3+VAR_1), VAR_3);
  VAR_3++;
 }
 FUNC_1(VAR_3, VAR_0->vc_video_erase_char, VAR_1 * 2);
 VAR_0->vc_need_wrap = 0;
 if (FUNC_0(VAR_0)) {
  unsigned short VAR_4 = VAR_0->vc_attr;
  VAR_0->vc_sw->con_bmove(VAR_0, VAR_0->vc_y, VAR_0->vc_x + VAR_1, VAR_0->vc_y, VAR_0->vc_x, 1,
         VAR_0->vc_cols - VAR_0->vc_x - VAR_1);
  VAR_0->vc_attr = VAR_0->vc_video_erase_char >> 8;
  while (VAR_1--)
   VAR_0->vc_sw->con_putc(VAR_0, VAR_0->vc_video_erase_char, VAR_0->vc_y,
         VAR_0->vc_cols - 1 - VAR_1);
  VAR_0->vc_attr = VAR_4;
 }
}
