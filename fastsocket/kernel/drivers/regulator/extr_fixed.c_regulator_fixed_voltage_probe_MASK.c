
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct fixed_voltage_config* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int n_voltages; struct fixed_voltage_data* name; int * ops; int owner; int type; } ;
struct fixed_voltage_data {int enable_high; int is_enabled; TYPE_1__ desc; int microvolts; int dev; int gpio; } ;
struct fixed_voltage_config {int enable_high; int enabled_at_boot; int gpio; int init_data; int supply_name; int microvolts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,struct fixed_voltage_data*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct fixed_voltage_data*) ;
 struct fixed_voltage_data* FUNC_10 (int ,int ) ;
 struct fixed_voltage_data* FUNC_11 (int,int ) ;
 int FUNC_12 (struct platform_device*,struct fixed_voltage_data*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,int ,struct fixed_voltage_data*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct fixed_voltage_config *VAR_6 = VAR_5->dev.platform_data;
 struct fixed_voltage_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_11(sizeof(struct fixed_voltage_data), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_5->dev, "Failed to allocate device data\n");
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_7->desc.name = FUNC_10(VAR_6->supply_name, VAR_1);
 if (VAR_7->desc.name == ((void*)0)) {
  FUNC_3(&VAR_5->dev, "Failed to allocate supply name\n");
  VAR_8 = -VAR_0;
  goto err;
 }
 VAR_7->desc.type = VAR_2;
 VAR_7->desc.owner = VAR_3;
 VAR_7->desc.ops = &VAR_4;
 VAR_7->desc.n_voltages = 1;

 VAR_7->microvolts = VAR_6->microvolts;
 VAR_7->gpio = VAR_6->gpio;

 if (FUNC_7(VAR_6->gpio)) {
  VAR_7->enable_high = VAR_6->enable_high;
  if (!VAR_6->gpio)
   FUNC_4(&VAR_5->dev,
    "using GPIO 0 for regulator enable control\n");

  VAR_8 = FUNC_8(VAR_6->gpio, VAR_6->supply_name);
  if (VAR_8) {
   FUNC_3(&VAR_5->dev,
      "Could not obtain regulator enable GPIO %d: %d\n",
       VAR_6->gpio, VAR_8);
   goto err_name;
  }




  VAR_7->is_enabled = VAR_6->enabled_at_boot;
  VAR_8 = VAR_7->is_enabled ?
    VAR_6->enable_high : !VAR_6->enable_high;

  VAR_8 = FUNC_5(VAR_6->gpio, VAR_8);
  if (VAR_8) {
   FUNC_3(&VAR_5->dev,
      "Could not configure regulator enable GPIO %d direction: %d\n",
       VAR_6->gpio, VAR_8);
   goto err_gpio;
  }

 } else {



  VAR_7->is_enabled = 1;
 }

 VAR_7->dev = FUNC_13(&VAR_7->desc, &VAR_5->dev,
       VAR_6->init_data, VAR_7);
 if (FUNC_0(VAR_7->dev)) {
  VAR_8 = FUNC_1(VAR_7->dev);
  FUNC_3(&VAR_5->dev, "Failed to register regulator: %d\n", VAR_8);
  goto err_gpio;
 }

 FUNC_12(VAR_5, VAR_7);

 FUNC_2(&VAR_5->dev, "%s supplying %duV\n", VAR_7->desc.name,
  VAR_7->microvolts);

 return 0;

err_gpio:
 if (FUNC_7(VAR_6->gpio))
  FUNC_6(VAR_6->gpio);
err_name:
 FUNC_9(VAR_7->desc.name);
err:
 FUNC_9(VAR_7);
 return VAR_8;
}
