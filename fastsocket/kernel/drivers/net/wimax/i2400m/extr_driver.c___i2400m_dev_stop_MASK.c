
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct i2400m {int work_queue; int (* bus_dev_stop ) (struct i2400m*) ;scalar_t__ ready; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int ) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400m*) ;
 int FUNC_8 (struct wimax_dev*,int ) ;

__attribute__((used)) static
void FUNC_9(struct i2400m *VAR_2)
{
 struct wimax_dev *VAR_3 = &VAR_2->wimax_dev;
 struct device *VAR_4 = FUNC_3(VAR_2);

 FUNC_1(3, VAR_4, "(i2400m %p)\n", VAR_2);
 FUNC_8(VAR_3, VAR_1);
 FUNC_4(VAR_2);
 VAR_2->ready = 0;
 VAR_2->bus_dev_stop(VAR_2);
 FUNC_2(VAR_2->work_queue);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 FUNC_8(VAR_3, VAR_0);
 FUNC_0(3, VAR_4, "(i2400m %p) = 0\n", VAR_2);
}
