
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
typedef enum msm_camio_clk_type { ____Placeholder_msm_camio_clk_type } msm_camio_clk_type ;





 int FUNC_0 (struct clk*) ;
 struct clk* VAR_0 ;
 struct clk* VAR_1 ;
 struct clk* VAR_2 ;
 int FUNC_1 (struct clk*) ;
 void* FUNC_2 (int *,char*) ;

int FUNC_3(enum msm_camio_clk_type VAR_3)
{
 int VAR_4 = -1;
 struct clk *VAR_5 = ((void*)0);

 switch (VAR_3) {
 case 128:
  VAR_5 = VAR_2 = FUNC_2(((void*)0), "vfe_mdc_clk");
  break;

 case 130:
  VAR_5 = VAR_0 = FUNC_2(((void*)0), "mdc_clk");
  break;

 case 129:
  VAR_5 = VAR_1 = FUNC_2(((void*)0), "vfe_clk");
  break;

 default:
  break;
 }

 if (!FUNC_0(VAR_5)) {
  FUNC_1(VAR_5);
  VAR_4 = 0;
 }

 return VAR_4;
}
