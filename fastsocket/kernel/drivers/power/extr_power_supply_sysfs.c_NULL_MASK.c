
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int num_properties; size_t* properties; int name; int dev; } ;
struct kobj_uevent_env {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device_attribute*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kobj_uevent_env*,char*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct power_supply* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int ) ;
 struct device_attribute* VAR_3 ;
 int FUNC_8 (struct device*,struct device_attribute*,char*) ;
 int FUNC_9 (struct device*,struct device_attribute*,char*) ;
 struct device_attribute* VAR_4 ;
 char* FUNC_10 (char*,char) ;

int FUNC_11(struct device *VAR_5, struct kobj_uevent_env *VAR_6)
{
 struct power_supply *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = 0, VAR_9;
 char *VAR_10;
 char *VAR_11;

 FUNC_2(VAR_5, "uevent\n");

 if (!VAR_7 || !VAR_7->dev) {
  FUNC_2(VAR_5, "No power supply yet\n");
  return VAR_8;
 }

 FUNC_2(VAR_5, "POWER_SUPPLY_NAME=%s\n", VAR_7->name);

 VAR_8 = FUNC_1(VAR_6, "POWER_SUPPLY_NAME=%s", VAR_7->name);
 if (VAR_8)
  return VAR_8;

 VAR_10 = (char *)FUNC_5(VAR_2);
 if (!VAR_10)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  struct device_attribute *VAR_12;
  char *VAR_13;

  VAR_12 = &VAR_4[VAR_9];

  VAR_8 = FUNC_9(VAR_5, VAR_12, VAR_10);
  if (VAR_8 < 0)
   goto out;

  VAR_13 = FUNC_10(VAR_10, '\n');
  if (VAR_13)
   *VAR_13 = 0;

  VAR_11 = FUNC_7(VAR_12->attr.name, VAR_2);
  if (!VAR_11) {
   VAR_8 = -VAR_1;
   goto out;
  }

  FUNC_2(VAR_5, "Static prop %s=%s\n", VAR_11, VAR_10);

  VAR_8 = FUNC_1(VAR_6, "POWER_SUPPLY_%s=%s", VAR_11, VAR_10);
  FUNC_6(VAR_11);
  if (VAR_8)
   goto out;
 }

 FUNC_2(VAR_5, "%zd dynamic props\n", VAR_7->num_properties);

 for (VAR_9 = 0; VAR_9 < VAR_7->num_properties; VAR_9++) {
  struct device_attribute *VAR_14;
  char *VAR_15;

  VAR_14 = &VAR_3[VAR_7->properties[VAR_9]];

  VAR_8 = FUNC_8(VAR_5, VAR_14, VAR_10);
  if (VAR_8 == -VAR_0) {


   VAR_8 = 0;
   continue;
  }

  if (VAR_8 < 0)
   goto out;

  VAR_15 = FUNC_10(VAR_10, '\n');
  if (VAR_15)
   *VAR_15 = 0;

  VAR_11 = FUNC_7(VAR_14->attr.name, VAR_2);
  if (!VAR_11) {
   VAR_8 = -VAR_1;
   goto out;
  }

  FUNC_2(VAR_5, "prop %s=%s\n", VAR_11, VAR_10);

  VAR_8 = FUNC_1(VAR_6, "POWER_SUPPLY_%s=%s", VAR_11, VAR_10);
  FUNC_6(VAR_11);
  if (VAR_8)
   goto out;
 }

out:
 FUNC_4((unsigned long)VAR_10);

 return VAR_8;
}
