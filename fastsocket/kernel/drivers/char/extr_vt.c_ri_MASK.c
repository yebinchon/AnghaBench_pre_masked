
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_y; scalar_t__ vc_top; scalar_t__ vc_need_wrap; scalar_t__ vc_size_row; int vc_pos; int vc_bottom; } ;


 int FUNC_0 (struct vc_data*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0)
{



 if (VAR_0->vc_y == VAR_0->vc_top)
  FUNC_0(VAR_0, VAR_0->vc_top, VAR_0->vc_bottom, 1);
 else if (VAR_0->vc_y > 0) {
  VAR_0->vc_y--;
  VAR_0->vc_pos -= VAR_0->vc_size_row;
 }
 VAR_0->vc_need_wrap = 0;
}
