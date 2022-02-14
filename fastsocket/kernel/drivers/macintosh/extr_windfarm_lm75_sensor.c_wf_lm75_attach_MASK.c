
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int name; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (struct device_node*,struct device_node*) ;
 char* FUNC_3 (struct device_node*,char*,int *) ;
 struct pmac_i2c_bus* FUNC_4 (struct i2c_adapter*) ;
 struct device_node* FUNC_5 (struct pmac_i2c_bus*) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,struct i2c_adapter*) ;
 int FUNC_8 (struct i2c_adapter*,scalar_t__,int,char const*) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_1)
{
 struct device_node *VAR_2, *VAR_3;
 struct pmac_i2c_bus *VAR_4;

 FUNC_0("wf_lm75: adapter %s detected\n", VAR_1->name);

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_2 = FUNC_5(VAR_4);

 FUNC_0("wf_lm75: bus found, looking for device...\n");


 for (VAR_3 = ((void*)0);
      (VAR_3 = FUNC_2(VAR_2, VAR_3)) != ((void*)0);) {
  const char *VAR_5 =
   FUNC_3(VAR_3, "hwsensor-location", ((void*)0));
  u8 VAR_6;




  if (!FUNC_7(VAR_3, VAR_1))
   continue;
  VAR_6 = FUNC_6(VAR_3);
  if (VAR_5 == ((void*)0) || VAR_6 == 0)
   continue;

  if (FUNC_1(VAR_3, "lm75"))
   FUNC_8(VAR_1, VAR_6, 0, VAR_5);

  else if (FUNC_1(VAR_3, "ds1775"))
   FUNC_8(VAR_1, VAR_6, 1, VAR_5);
 }
 return 0;
}
