
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 struct pmac_i2c_bus* FUNC_2 (struct i2c_adapter*) ;
 struct device_node* FUNC_3 (struct pmac_i2c_bus*) ;
 int FUNC_4 (struct i2c_adapter*,struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1)
{
 struct device_node *VAR_2, *VAR_3 = ((void*)0);
 struct pmac_i2c_bus *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_2 = FUNC_3(VAR_4);

 while ((VAR_3 = FUNC_1(VAR_2, VAR_3)) != ((void*)0))
  if (FUNC_0(VAR_3, "smu-sat"))
   FUNC_4(VAR_1, VAR_3);
 return 0;
}
