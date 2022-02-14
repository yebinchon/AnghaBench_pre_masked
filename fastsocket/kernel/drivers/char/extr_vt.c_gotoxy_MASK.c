
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_x; int vc_cols; int vc_top; int vc_bottom; int vc_rows; int vc_y; int vc_size_row; scalar_t__ vc_need_wrap; scalar_t__ vc_origin; scalar_t__ vc_pos; scalar_t__ vc_decom; } ;



__attribute__((used)) static void FUNC_0(struct vc_data *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1 < 0)
  VAR_0->vc_x = 0;
 else {
  if (VAR_1 >= VAR_0->vc_cols)
   VAR_0->vc_x = VAR_0->vc_cols - 1;
  else
   VAR_0->vc_x = VAR_1;
 }

  if (VAR_0->vc_decom) {
  VAR_3 = VAR_0->vc_top;
  VAR_4 = VAR_0->vc_bottom;
 } else {
  VAR_3 = 0;
  VAR_4 = VAR_0->vc_rows;
 }
 if (VAR_2 < VAR_3)
  VAR_0->vc_y = VAR_3;
 else if (VAR_2 >= VAR_4)
  VAR_0->vc_y = VAR_4 - 1;
 else
  VAR_0->vc_y = VAR_2;
 VAR_0->vc_pos = VAR_0->vc_origin + VAR_0->vc_y * VAR_0->vc_size_row + (VAR_0->vc_x<<1);
 VAR_0->vc_need_wrap = 0;
}
