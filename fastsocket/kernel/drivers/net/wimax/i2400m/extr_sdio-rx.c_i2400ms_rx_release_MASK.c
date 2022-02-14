
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct i2400m {int rx_lock; } ;
struct i2400ms {int bm_wfa_wq; int bm_ack_size; struct i2400m i2400m; struct sdio_func* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct i2400ms*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct i2400ms *VAR_2)
{
 int VAR_3;
 struct sdio_func *VAR_4 = VAR_2->func;
 struct device *VAR_5 = &VAR_4->dev;
 struct i2400m *VAR_6 = &VAR_2->i2400m;

 FUNC_1(5, VAR_5, "(i2400ms %p)\n", VAR_2);
 FUNC_6(&VAR_6->rx_lock);
 VAR_2->bm_ack_size = -VAR_0;
 FUNC_7(&VAR_6->rx_lock);
 FUNC_8(&VAR_2->bm_wfa_wq);
 FUNC_2(VAR_4);
 FUNC_5(VAR_4, 0, VAR_1, &VAR_3);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 FUNC_0(5, VAR_5, "(i2400ms %p) = %d\n", VAR_2, VAR_3);
}
