
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct i2400ms {int debugfs_dentry; struct i2400m i2400m; } ;


 int FUNC_0 (int,struct device*,char*,struct sdio_func*) ;
 int FUNC_1 (int,struct device*,char*,struct sdio_func*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400ms*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 struct i2400ms* FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*,int *) ;

__attribute__((used)) static
void FUNC_11(struct sdio_func *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct i2400ms *VAR_2 = FUNC_8(VAR_0);
 struct i2400m *VAR_3 = &VAR_2->i2400m;
 struct net_device *VAR_4 = VAR_3->wimax_dev.net_dev;

 FUNC_1(3, VAR_1, "SDIO func %p\n", VAR_0);
 FUNC_2(VAR_2->debugfs_dentry);
 FUNC_5(VAR_2);
 FUNC_4(VAR_3);
 FUNC_10(VAR_0, ((void*)0));
 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
 FUNC_9(VAR_0);
 FUNC_3(VAR_4);
 FUNC_0(3, VAR_1, "SDIO func %p\n", VAR_0);
}
