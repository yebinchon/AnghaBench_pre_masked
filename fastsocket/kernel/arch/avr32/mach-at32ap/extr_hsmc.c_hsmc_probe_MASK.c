
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dev; } ;
struct hsmc {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_5__ {int regs; struct clk* mck; struct clk* pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (int *,char*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (int *,char*,unsigned long) ;
 TYPE_1__* VAR_5 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct clk *VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_10(VAR_6, VAR_4, 0);
 if (!VAR_7)
  return -VAR_2;
 VAR_8 = FUNC_4(&VAR_6->dev, "pclk");
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_9 = FUNC_4(&VAR_6->dev, "mck");
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out_put_pclk;
 }

 VAR_10 = -VAR_1;
 VAR_5 = FUNC_9(sizeof(struct hsmc), VAR_3);
 if (!VAR_5)
  goto out_put_clocks;

 FUNC_3(VAR_8);
 FUNC_3(VAR_9);

 VAR_5->pclk = VAR_8;
 VAR_5->mck = VAR_9;
 VAR_5->regs = FUNC_7(VAR_7->start, VAR_7->end - VAR_7->start + 1);
 if (!VAR_5->regs)
  goto out_disable_clocks;

 FUNC_6(&VAR_6->dev, "Atmel Static Memory Controller at 0x%08lx\n",
   (unsigned long)VAR_7->start);

 FUNC_11(VAR_6, VAR_5);

 return 0;

out_disable_clocks:
 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
 FUNC_8(VAR_5);
out_put_clocks:
 FUNC_5(VAR_9);
out_put_pclk:
 FUNC_5(VAR_8);
 VAR_5 = ((void*)0);
 return VAR_10;
}
