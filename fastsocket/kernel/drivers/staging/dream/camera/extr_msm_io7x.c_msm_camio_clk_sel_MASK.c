
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
typedef enum msm_camio_clk_src_type { ____Placeholder_msm_camio_clk_src_type } msm_camio_clk_src_type ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;


 struct clk* VAR_1 ;
 int FUNC_1 (struct clk*,int) ;

void FUNC_2(enum msm_camio_clk_src_type VAR_2)
{
 struct clk *VAR_3 = ((void*)0);

 VAR_3 = VAR_1;

 if (VAR_3 != ((void*)0) && VAR_3 != FUNC_0(-VAR_0)) {
  switch (VAR_2) {
  case 128:
   FUNC_1(VAR_3, 0x00000100 << 1);
   break;

  case 129:
   FUNC_1(VAR_3, 0x00000100);
   break;

  default:
   break;
  }
 }
}
