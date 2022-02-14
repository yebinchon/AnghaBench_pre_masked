
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct i2400ms {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct i2400ms*) ;
 struct i2400ms* FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ,int*) ;
 int FUNC_6 (struct sdio_func*,int,int ,int*) ;

__attribute__((used)) static
void FUNC_7(struct sdio_func *VAR_2)
{
 int VAR_3;
 struct i2400ms *VAR_4 = FUNC_4(VAR_2);
 struct device *VAR_5 = &VAR_2->dev;
 int VAR_6;

 FUNC_1(6, VAR_5, "(i2400ms %p)\n", VAR_4);
 VAR_6 = FUNC_5(VAR_2, VAR_1, &VAR_3);
 if (VAR_3 < 0) {
  FUNC_2(VAR_5, "RX: Can't read interrupt status: %d\n", VAR_3);
  goto error_no_irq;
 }
 if (!VAR_6) {
  FUNC_2(VAR_5, "RX: BUG? got IRQ but no interrupt ready?\n");
  goto error_no_irq;
 }
 FUNC_6(VAR_2, 1, VAR_0, &VAR_3);
 FUNC_3(VAR_4);
error_no_irq:
 FUNC_0(6, VAR_5, "(i2400ms %p) = void\n", VAR_4);
 return;
}
