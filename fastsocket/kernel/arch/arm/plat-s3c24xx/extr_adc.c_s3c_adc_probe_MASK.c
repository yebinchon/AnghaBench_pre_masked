
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct adc_device {int prescale; scalar_t__ irq; int clk; int regs; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 struct adc_device* VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (scalar_t__,struct adc_device*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct adc_device*) ;
 struct adc_device* FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct adc_device*) ;
 int FUNC_16 (scalar_t__,int ,int ,int ,struct adc_device*) ;
 int FUNC_17 (struct resource*) ;
 int VAR_8 ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct adc_device *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_12(sizeof(struct adc_device), VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_10, "failed to allocate adc_device\n");
  return -VAR_1;
 }

 VAR_11->pdev = VAR_9;
 VAR_11->prescale = FUNC_2(49);

 VAR_11->irq = FUNC_13(VAR_9, 1);
 if (VAR_11->irq <= 0) {
  FUNC_6(VAR_10, "failed to get adc irq\n");
  VAR_13 = -VAR_0;
  goto err_alloc;
 }

 VAR_13 = FUNC_16(VAR_11->irq, VAR_8, 0, FUNC_8(VAR_10), VAR_11);
 if (VAR_13 < 0) {
  FUNC_6(VAR_10, "failed to attach adc irq\n");
  goto err_alloc;
 }

 VAR_11->clk = FUNC_4(VAR_10, "adc");
 if (FUNC_0(VAR_11->clk)) {
  FUNC_6(VAR_10, "failed to get adc clock\n");
  VAR_13 = FUNC_1(VAR_11->clk);
  goto err_irq;
 }

 VAR_12 = FUNC_14(VAR_9, VAR_4, 0);
 if (!VAR_12) {
  FUNC_6(VAR_10, "failed to find registers\n");
  VAR_13 = -VAR_2;
  goto err_clk;
 }

 VAR_11->regs = FUNC_10(VAR_12->start, FUNC_17(VAR_12));
 if (!VAR_11->regs) {
  FUNC_6(VAR_10, "failed to map registers\n");
  VAR_13 = -VAR_2;
  goto err_clk;
 }

 FUNC_3(VAR_11->clk);

 FUNC_18(VAR_11->prescale | VAR_6,
        VAR_11->regs + VAR_5);

 FUNC_7(VAR_10, "attached adc driver\n");

 FUNC_15(VAR_9, VAR_11);
 VAR_7 = VAR_11;

 return 0;

 err_clk:
 FUNC_5(VAR_11->clk);

 err_irq:
 FUNC_9(VAR_11->irq, VAR_11);

 err_alloc:
 FUNC_11(VAR_11);
 return VAR_13;
}
