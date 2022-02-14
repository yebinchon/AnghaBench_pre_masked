
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {scalar_t__ clk; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned long) ;

int FUNC_1(struct msm_adsp_module *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->clk && VAR_2)
  return FUNC_0(VAR_1->clk, VAR_2);

 return -VAR_0;
}
