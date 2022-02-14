
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_scr_end; int vc_pos; unsigned int vc_y; unsigned int vc_x; unsigned int vc_cols; unsigned int vc_rows; int vc_origin; unsigned short* vc_screenbuf; int vc_screenbuf_size; scalar_t__ vc_need_wrap; int vc_video_erase_char; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_clear ) (struct vc_data*,unsigned int,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (unsigned short*,int ,int) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_5 (struct vc_data*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_6 (struct vc_data*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (struct vc_data*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_8 (struct vc_data*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (struct vc_data*) ;

__attribute__((used)) static void FUNC_10(struct vc_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 unsigned short * VAR_3;

 switch (VAR_1) {
  case 0:
   VAR_2 = (VAR_0->vc_scr_end - VAR_0->vc_pos) >> 1;
   VAR_3 = (unsigned short *)VAR_0->vc_pos;
   if (FUNC_1(VAR_0)) {

    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y, VAR_0->vc_x, 1,
           VAR_0->vc_cols - VAR_0->vc_x);
    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y + 1, 0,
           VAR_0->vc_rows - VAR_0->vc_y - 1,
           VAR_0->vc_cols);
   }
   break;
  case 1:
   VAR_2 = ((VAR_0->vc_pos - VAR_0->vc_origin) >> 1) + 1;
   VAR_3 = (unsigned short *)VAR_0->vc_origin;
   if (FUNC_1(VAR_0)) {

    VAR_0->vc_sw->con_clear(VAR_0, 0, 0, VAR_0->vc_y,
           VAR_0->vc_cols);
    VAR_0->vc_sw->con_clear(VAR_0, VAR_0->vc_y, 0, 1,
           VAR_0->vc_x + 1);
   }
   break;
  case 3:
   FUNC_2(VAR_0->vc_screenbuf, VAR_0->vc_video_erase_char,
        VAR_0->vc_screenbuf_size >> 1);
   FUNC_3(VAR_0);
   if (FUNC_0(VAR_0))
    FUNC_9(VAR_0);

  case 2:
   VAR_2 = VAR_0->vc_cols * VAR_0->vc_rows;
   VAR_3 = (unsigned short *)VAR_0->vc_origin;
   if (FUNC_1(VAR_0))
    VAR_0->vc_sw->con_clear(VAR_0, 0, 0,
           VAR_0->vc_rows,
           VAR_0->vc_cols);
   break;
  default:
   return;
 }
 FUNC_2(VAR_3, VAR_0->vc_video_erase_char, 2 * VAR_2);
 VAR_0->vc_need_wrap = 0;
}
