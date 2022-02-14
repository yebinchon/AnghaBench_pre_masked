
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
 struct clk* VAR_3 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

int FUNC_3(enum msm_camio_clk_type VAR_4)
{
 int VAR_5 = 0;
 struct clk *VAR_6 = ((void*)0);

 switch (VAR_4) {
 case 128:
  VAR_6 = VAR_3;
  break;

 case 131:
  VAR_6 = VAR_0;
  break;

 case 129:
  VAR_6 = VAR_2;
  break;

 case 130:
  VAR_6 = VAR_1;
  break;

 default:
  break;
 }

 if (!FUNC_0(VAR_6)) {
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
 } else
  VAR_5 = -1;

 return VAR_5;
}
