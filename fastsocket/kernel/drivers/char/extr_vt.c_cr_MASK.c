
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_pos; int vc_x; int vc_need_wrap; } ;


 int FUNC_0 (struct vc_data*,char) ;

__attribute__((used)) static inline void FUNC_1(struct vc_data *VAR_0)
{
 VAR_0->vc_pos -= VAR_0->vc_x << 1;
 VAR_0->vc_need_wrap = VAR_0->vc_x = 0;
 FUNC_0(VAR_0, '\r');
}
