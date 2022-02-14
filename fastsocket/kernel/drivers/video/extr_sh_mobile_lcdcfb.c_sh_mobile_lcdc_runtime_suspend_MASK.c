
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {int * saved_shared_regs; struct sh_mobile_lcdc_chan* ch; } ;
struct sh_mobile_lcdc_chan {int * saved_ch_regs; int enabled; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_2 (struct sh_mobile_lcdc_chan*,int) ;
 int * VAR_3 ;
 int FUNC_3 (struct sh_mobile_lcdc_priv*,int ,int ) ;
 struct sh_mobile_lcdc_priv* FUNC_4 (struct platform_device*) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_5(VAR_4);
 struct sh_mobile_lcdc_priv *VAR_6 = FUNC_4(VAR_5);
 struct sh_mobile_lcdc_chan *VAR_7;
 int VAR_8, VAR_9;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->ch); VAR_8++) {
  VAR_7 = &VAR_6->ch[VAR_8];
  if (!VAR_7->enabled)
   continue;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   VAR_7->saved_ch_regs[VAR_9] = FUNC_2(VAR_7, VAR_9);
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_6->saved_shared_regs[VAR_9] = FUNC_1(VAR_6, VAR_3[VAR_9]);


 FUNC_3(VAR_6, VAR_2, 0);
 return 0;
}
