
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {int lddckr; int dev; int hw_usecnt; int dot_clk; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1,
           int VAR_2,
           struct sh_mobile_lcdc_priv *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 switch (VAR_2) {
 case 130: VAR_4 = "bus_clk"; VAR_5 = 0; break;
 case 128: VAR_4 = "peripheral_clk"; VAR_5 = 1; break;
 case 129: VAR_4 = ((void*)0); VAR_5 = 2; break;
 default:
  return -VAR_0;
 }

 VAR_3->lddckr = VAR_5 << 16;

 if (VAR_4) {
  VAR_3->dot_clk = FUNC_3(&VAR_1->dev, VAR_4);
  if (FUNC_0(VAR_3->dot_clk)) {
   FUNC_4(&VAR_1->dev, "cannot get dot clock %s\n", VAR_4);
   return FUNC_1(VAR_3->dot_clk);
  }
 }
 FUNC_2(&VAR_3->hw_usecnt, -1);





 FUNC_5(VAR_3->dev);
 FUNC_6(VAR_3->dev);
 return 0;
}
