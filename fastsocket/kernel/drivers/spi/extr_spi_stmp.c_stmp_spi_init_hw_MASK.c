
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmp_spi {TYPE_1__* master_dev; int dma; int regs; int clk; } ;
struct TYPE_2__ {void* platform_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct stmp_spi *VAR_0)
{
 int VAR_1 = 0;
 void *VAR_2 = VAR_0->master_dev->platform_data;

 VAR_1 = FUNC_7(VAR_2, FUNC_4(VAR_0->master_dev));
 if (VAR_1)
  goto out;

 VAR_0->clk = FUNC_3(((void*)0), "ssp");
 if (FUNC_0(VAR_0->clk)) {
  VAR_1 = FUNC_1(VAR_0->clk);
  goto out_free_pins;
 }
 FUNC_2(VAR_0->clk);

 FUNC_8(VAR_0->regs, 0);
 FUNC_5(VAR_0->dma);

 return 0;

out_free_pins:
 FUNC_6(VAR_2, FUNC_4(VAR_0->master_dev));
out:
 return VAR_1;
}
