
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct i2400m {TYPE_2__ wimax_dev; } ;
struct i2400ms {int * tx_workqueue; int tx_wq_name; int tx_worker; struct i2400m i2400m; TYPE_1__* func; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int,struct device*,char*,struct i2400ms*,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_4 (struct device*,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int,char*,char*) ;

int FUNC_6(struct i2400ms *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = &VAR_2->func->dev;
 struct i2400m *VAR_5 = &VAR_2->i2400m;

 FUNC_3(5, VAR_4, "(i2400ms %p)\n", VAR_2);

 FUNC_0(&VAR_2->tx_worker, VAR_1);
 FUNC_5(VAR_2->tx_wq_name, sizeof(VAR_2->tx_wq_name),
   "%s-tx", VAR_5->wimax_dev.name);
 VAR_2->tx_workqueue =
  FUNC_1(VAR_2->tx_wq_name);
 if (((void*)0) == VAR_2->tx_workqueue) {
  FUNC_4(VAR_4, "TX: failed to create workqueue\n");
  VAR_3 = -VAR_0;
 } else
  VAR_3 = 0;
 FUNC_2(5, VAR_4, "(i2400ms %p) = %d\n", VAR_2, VAR_3);
 return VAR_3;
}
