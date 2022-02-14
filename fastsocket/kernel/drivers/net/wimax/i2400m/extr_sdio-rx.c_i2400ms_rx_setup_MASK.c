
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct i2400m {int rx_lock; } ;
struct i2400ms {int bm_wait_result; int bm_wfa_wq; struct i2400m i2400m; struct sdio_func* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct i2400ms*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*,int,int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct i2400ms *VAR_3)
{
 int VAR_4;
 struct sdio_func *VAR_5 = VAR_3->func;
 struct device *VAR_6 = &VAR_5->dev;
 struct i2400m *VAR_7 = &VAR_3->i2400m;

 FUNC_1(5, VAR_6, "(i2400ms %p)\n", VAR_3);

 FUNC_3(&VAR_3->bm_wfa_wq);
 FUNC_9(&VAR_7->rx_lock);
 VAR_3->bm_wait_result = -VAR_0;
 FUNC_10(&VAR_7->rx_lock);

 FUNC_4(VAR_5);
 VAR_4 = FUNC_5(VAR_5, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_6, "Cannot claim IRQ: %d\n", VAR_4);
  goto error_irq_claim;
 }
 VAR_4 = 0;
 FUNC_8(VAR_5, 1, VAR_1, &VAR_4);
 if (VAR_4 < 0) {
  FUNC_7(VAR_5);
  FUNC_2(VAR_6, "Failed to enable interrupts %d\n", VAR_4);
 }
error_irq_claim:
 FUNC_6(VAR_5);
 FUNC_0(5, VAR_6, "(i2400ms %p) = %d\n", VAR_3, VAR_4);
 return VAR_4;
}
