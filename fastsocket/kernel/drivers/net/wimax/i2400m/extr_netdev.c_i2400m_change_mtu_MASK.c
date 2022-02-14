
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 struct device* FUNC_1 (struct i2400m*) ;
 struct i2400m* FUNC_2 (struct net_device*) ;

__attribute__((used)) static
int FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 int VAR_4;
 struct i2400m *VAR_5 = FUNC_2(VAR_2);
 struct device *VAR_6 = FUNC_1(VAR_5);

 if (VAR_3 >= VAR_1) {
  FUNC_0(VAR_6, "Cannot change MTU to %d (max is %d)\n",
   VAR_3, VAR_1);
  VAR_4 = -VAR_0;
 } else {
  VAR_2->mtu = VAR_3;
  VAR_4 = 0;
 }
 return VAR_4;
}
