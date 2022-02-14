
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; struct da9030_battery_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_5__ {int notifier_call; } ;
struct da9030_charger {int charge_milliamp; int charge_millivolt; int work; TYPE_2__ nb; int master; int debug_file; int psy; int interval; int battery_critical; int battery_low; int battery_info; } ;
struct da9030_battery_info {int charge_milliamp; int charge_millivolt; int battery_critical; int battery_low; int battery_info; scalar_t__ batmon_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct da9030_charger*) ;
 int FUNC_3 (struct da9030_charger*) ;
 int FUNC_4 (struct da9030_charger*,struct da9030_battery_info*) ;
 int VAR_7 ;
 int FUNC_5 (struct da9030_charger*) ;
 int VAR_8 ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int FUNC_8 (struct da9030_charger*) ;
 struct da9030_charger* FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct platform_device*,struct da9030_charger*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct da9030_charger *VAR_10;
 struct da9030_battery_info *VAR_11 = VAR_9->dev.platform_data;
 int VAR_12;

 if (VAR_11 == ((void*)0))
  return -VAR_4;

 if (VAR_11->charge_milliamp >= 1500 ||
     VAR_11->charge_millivolt < 4000 ||
     VAR_11->charge_millivolt > 4350)
  return -VAR_4;

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_6);
 if (VAR_10 == ((void*)0))
  return -VAR_5;

 VAR_10->master = VAR_9->dev.parent;



 VAR_10->interval = FUNC_10(
  (VAR_11->batmon_interval ? : 10) * 1000);

 VAR_10->charge_milliamp = VAR_11->charge_milliamp;
 VAR_10->charge_millivolt = VAR_11->charge_millivolt;
 VAR_10->battery_info = VAR_11->battery_info;
 VAR_10->battery_low = VAR_11->battery_low;
 VAR_10->battery_critical = VAR_11->battery_critical;

 FUNC_4(VAR_10, VAR_11);

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12)
  goto err_charger_init;

 FUNC_0(&VAR_10->work, VAR_8);
 FUNC_13(&VAR_10->work, VAR_10->interval);

 VAR_10->nb.notifier_call = VAR_7;
 VAR_12 = FUNC_6(VAR_10->master, &VAR_10->nb,
           VAR_0 |
           VAR_3 |
           VAR_1 |
           VAR_2);
 if (VAR_12)
  goto err_notifier;

 FUNC_5(VAR_10);
 VAR_12 = FUNC_12(&VAR_9->dev, &VAR_10->psy);
 if (VAR_12)
  goto err_ps_register;

 VAR_10->debug_file = FUNC_2(VAR_10);
 FUNC_11(VAR_9, VAR_10);
 return 0;

err_ps_register:
 FUNC_7(VAR_10->master, &VAR_10->nb,
       VAR_0 | VAR_3 |
       VAR_1 | VAR_2);
err_notifier:
 FUNC_1(&VAR_10->work);

err_charger_init:
 FUNC_8(VAR_10);

 return VAR_12;
}
