
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_cols; unsigned int vc_x; } ;


 int FUNC_0 (struct vc_data*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 > VAR_0->vc_cols - VAR_0->vc_x)
  VAR_1 = VAR_0->vc_cols - VAR_0->vc_x;
 else if (!VAR_1)
  VAR_1 = 1;
 FUNC_0(VAR_0, VAR_1);
}
