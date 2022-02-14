
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {scalar_t__ dot_clk; int dev; int hw_usecnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sh_mobile_lcdc_priv *VAR_0)
{
 if (FUNC_0(&VAR_0->hw_usecnt)) {
  FUNC_2(VAR_0->dev);
  if (VAR_0->dot_clk)
   FUNC_1(VAR_0->dot_clk);
 }
}
