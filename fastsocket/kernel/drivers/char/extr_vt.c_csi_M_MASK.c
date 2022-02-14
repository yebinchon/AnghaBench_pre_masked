
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_rows; unsigned int vc_y; scalar_t__ vc_need_wrap; int vc_bottom; } ;


 int FUNC_0 (struct vc_data*,unsigned int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 > VAR_0->vc_rows - VAR_0->vc_y)
  VAR_1 = VAR_0->vc_rows - VAR_0->vc_y;
 else if (!VAR_1)
  VAR_1=1;
 FUNC_0(VAR_0, VAR_0->vc_y, VAR_0->vc_bottom, VAR_1);
 VAR_0->vc_need_wrap = 0;
}
