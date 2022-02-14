
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
 int * VAR_2 ;
 int FUNC_1 (struct sh_mobile_lcdc_priv*,int ,int ) ;
 int FUNC_2 (struct sh_mobile_lcdc_chan*,int,int ) ;
 struct sh_mobile_lcdc_priv* FUNC_3 (struct platform_device*) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_4(VAR_3);
 struct sh_mobile_lcdc_priv *VAR_5 = FUNC_3(VAR_4);
 struct sh_mobile_lcdc_chan *VAR_6;
 int VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->ch); VAR_7++) {
  VAR_6 = &VAR_5->ch[VAR_7];
  if (!VAR_6->enabled)
   continue;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_2(VAR_6, VAR_8, VAR_6->saved_ch_regs[VAR_8]);
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_1(VAR_5, VAR_2[VAR_8], VAR_5->saved_shared_regs[VAR_8]);

 return 0;
}
