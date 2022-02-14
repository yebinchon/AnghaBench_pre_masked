
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {unsigned int pwm_id; unsigned int tcon_base; void* clk; void* clk_div; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {unsigned int id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int ) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,int ,int ,char*,int) ;
 int FUNC_9 (struct pwm_device*) ;
 struct pwm_device* FUNC_10 (int,int ) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (struct platform_device*,struct pwm_device*) ;
 int FUNC_14 (struct pwm_device*,char*,int) ;
 scalar_t__ FUNC_15 (struct pwm_device*) ;
 int FUNC_16 (struct pwm_device*) ;
 unsigned long FUNC_17 (struct pwm_device*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct pwm_device *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9 = VAR_4->id;
 int VAR_10;

 if (VAR_9 == 4) {
  FUNC_7(VAR_5, "TIMER4 is currently not supported\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_10(sizeof(struct pwm_device), VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_5, "failed to allocate pwm_device\n");
  return -VAR_0;
 }

 VAR_6->pdev = VAR_4;
 VAR_6->pwm_id = VAR_9;


 VAR_6->tcon_base = VAR_9 == 0 ? 0 : (VAR_9 * 4) + 4;

 VAR_6->clk = FUNC_4(VAR_5, "pwm-tin");
 if (FUNC_0(VAR_6->clk)) {
  FUNC_7(VAR_5, "failed to get pwm tin clk\n");
  VAR_10 = FUNC_1(VAR_6->clk);
  goto err_alloc;
 }

 VAR_6->clk_div = FUNC_4(VAR_5, "pwm-tdiv");
 if (FUNC_0(VAR_6->clk_div)) {
  FUNC_7(VAR_5, "failed to get pwm tdiv clk\n");
  VAR_10 = FUNC_1(VAR_6->clk_div);
  goto err_clk_tin;
 }

 FUNC_12(VAR_7);

 VAR_8 = FUNC_2(VAR_3);
 VAR_8 |= FUNC_17(VAR_6);
 FUNC_3(VAR_8, VAR_3);

 FUNC_11(VAR_7);


 VAR_10 = FUNC_16(VAR_6);
 if (VAR_10) {
  FUNC_7(VAR_5, "failed to register pwm\n");
  goto err_clk_tdiv;
 }

 FUNC_14(VAR_6, "config bits %02x\n",
  (FUNC_2(VAR_3) >> VAR_6->tcon_base) & 0x0f);

 FUNC_8(VAR_5, "tin at %lu, tdiv at %lu, tin=%sclk, base %d\n",
   FUNC_5(VAR_6->clk),
   FUNC_5(VAR_6->clk_div),
   FUNC_15(VAR_6) ? "div" : "ext", VAR_6->tcon_base);

 FUNC_13(VAR_4, VAR_6);
 return 0;

 err_clk_tdiv:
 FUNC_6(VAR_6->clk_div);

 err_clk_tin:
 FUNC_6(VAR_6->clk);

 err_alloc:
 FUNC_9(VAR_6);
 return VAR_10;
}
