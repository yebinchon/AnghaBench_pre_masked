
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i2400m {scalar_t__ ready; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,struct net_device*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 int FUNC_2 (struct device*,char*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 struct i2400m* FUNC_4 (struct net_device*) ;

__attribute__((used)) static
int FUNC_5(struct net_device *VAR_1)
{
 int VAR_2;
 struct i2400m *VAR_3 = FUNC_4(VAR_1);
 struct device *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(3, VAR_4, "(net_dev %p [i2400m %p])\n", VAR_1, VAR_3);
 if (VAR_3->ready == 0) {
  FUNC_2(VAR_4, "Device is still initializing\n");
  VAR_2 = -VAR_0;
 } else
  VAR_2 = 0;
 FUNC_0(3, VAR_4, "(net_dev %p [i2400m %p]) = %d\n",
  VAR_1, VAR_3, VAR_2);
 return VAR_2;
}
