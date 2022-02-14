
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
typedef enum msm_camio_clk_src_type { ____Placeholder_msm_camio_clk_src_type } msm_camio_clk_src_type ;




 struct clk* VAR_0 ;
 int FUNC_0 (struct clk*,int) ;

void FUNC_1(enum msm_camio_clk_src_type VAR_1)
{
 struct clk *VAR_2 = ((void*)0);

 VAR_2 = VAR_0;

 if (VAR_2 != ((void*)0)) {
  switch (VAR_1) {
  case 128:
   FUNC_0(VAR_2, 0x00000100 << 1);
   break;

  case 129:
   FUNC_0(VAR_2, 0x00000100);
   break;

  default:
   break;
  }
 }
}
