
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_pos; scalar_t__ vc_need_wrap; scalar_t__ vc_x; } ;


 int FUNC_0 (struct vc_data*,char) ;

__attribute__((used)) static inline void FUNC_1(struct vc_data *VAR_0)
{
 if (VAR_0->vc_x) {
  VAR_0->vc_pos -= 2;
  VAR_0->vc_x--;
  VAR_0->vc_need_wrap = 0;
  FUNC_0(VAR_0, '\b');
 }
}
