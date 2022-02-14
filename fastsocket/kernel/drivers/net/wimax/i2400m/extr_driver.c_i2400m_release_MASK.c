
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* net_dev; } ;
struct i2400m {int bm_cmd_buf; int bm_ack_buf; TYPE_2__ wimax_dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int FUNC_0 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (struct i2400m*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int VAR_0 ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(struct i2400m *VAR_1)
{
 struct device *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(3, VAR_2, "(i2400m %p)\n", VAR_1);
 FUNC_6(VAR_1->wimax_dev.net_dev);

 FUNC_2(VAR_1);
 FUNC_7(&VAR_1->wimax_dev.net_dev->dev.kobj,
      &VAR_0);
 FUNC_9(&VAR_1->wimax_dev);
 FUNC_4(VAR_1);
 FUNC_8(VAR_1->wimax_dev.net_dev);
 FUNC_5(VAR_1->bm_ack_buf);
 FUNC_5(VAR_1->bm_cmd_buf);
 FUNC_0(3, VAR_2, "(i2400m %p) = void\n", VAR_1);
}
