
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 struct pmac_i2c_bus* FUNC_3 (struct i2c_adapter*) ;
 struct device_node* FUNC_4 (struct pmac_i2c_bus*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,struct i2c_adapter*) ;
 int FUNC_7 (char*,char const*,scalar_t__) ;
 int FUNC_8 (struct i2c_adapter*,scalar_t__,char const*) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_1)
{
 struct device_node *VAR_2, *VAR_3 = ((void*)0);
 struct pmac_i2c_bus *VAR_4;
 const char *VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_2 = FUNC_4(VAR_4);

 while ((VAR_3 = FUNC_1(VAR_2, VAR_3)) != ((void*)0)) {
  u8 VAR_6;




  if (!FUNC_6(VAR_3, VAR_1))
   continue;
  if (!FUNC_0(VAR_3, "max6690"))
   continue;
  VAR_6 = FUNC_5(VAR_3);
  VAR_5 = FUNC_2(VAR_3, "hwsensor-location", ((void*)0));
  if (VAR_5 == ((void*)0) || VAR_6 == 0)
   continue;
  FUNC_7("found max6690, loc=%s addr=0x%02x\n", VAR_5, VAR_6);
  FUNC_8(VAR_1, VAR_6, VAR_5);
 }

 return 0;
}
