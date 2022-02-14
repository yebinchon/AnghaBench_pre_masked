
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int external_power_changed; int set_charged; int get_property; int num_properties; int properties; int type; int name; } ;
struct ds2760_device_info {char* raw; TYPE_1__ bat; int monitor_work; int monitor_wqueue; int set_charged_work; TYPE_2__* dev; int charge_status; int w1_dev; } ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct ds2760_device_info*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct ds2760_device_info*,scalar_t__) ;
 int VAR_14 ;
 int FUNC_7 (struct ds2760_device_info*,scalar_t__) ;
 int FUNC_8 (struct ds2760_device_info*,char) ;
 int FUNC_9 (struct ds2760_device_info*) ;
 struct ds2760_device_info* FUNC_10 (int,int ) ;
 int FUNC_11 (struct platform_device*,struct ds2760_device_info*) ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int *,int) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_17)
{
 char VAR_18;
 int VAR_19 = 0;
 struct ds2760_device_info *VAR_20;

 VAR_20 = FUNC_10(sizeof(*VAR_20), VAR_4);
 if (!VAR_20) {
  VAR_19 = -VAR_2;
  goto di_alloc_failed;
 }

 FUNC_11(VAR_17, VAR_20);

 VAR_20->dev = &VAR_17->dev;
 VAR_20->w1_dev = VAR_17->dev.parent;
 VAR_20->bat.name = FUNC_4(&VAR_17->dev);
 VAR_20->bat.type = VAR_7;
 VAR_20->bat.properties = VAR_11;
 VAR_20->bat.num_properties = FUNC_0(VAR_11);
 VAR_20->bat.get_property = VAR_10;
 VAR_20->bat.set_charged = VAR_12;
 VAR_20->bat.external_power_changed =
      VAR_9;

 VAR_20->charge_status = VAR_6;


 FUNC_5(VAR_20);
 VAR_18 = VAR_20->raw[VAR_1];
 if (VAR_15)
  VAR_18 |= VAR_0;
 else
  VAR_18 &= ~VAR_0;

 FUNC_8(VAR_20, VAR_18);


 if (VAR_16)
  FUNC_7(VAR_20, VAR_16);



 if (VAR_8)
  FUNC_6(VAR_20, VAR_8);

 VAR_19 = FUNC_12(&VAR_17->dev, &VAR_20->bat);
 if (VAR_19) {
  FUNC_3(VAR_20->dev, "failed to register battery\n");
  goto batt_failed;
 }

 FUNC_1(&VAR_20->monitor_work, VAR_14);
 FUNC_1(&VAR_20->set_charged_work,
     VAR_13);
 VAR_20->monitor_wqueue = FUNC_2(FUNC_4(&VAR_17->dev));
 if (!VAR_20->monitor_wqueue) {
  VAR_19 = -VAR_3;
  goto workqueue_failed;
 }
 FUNC_14(VAR_20->monitor_wqueue, &VAR_20->monitor_work, VAR_5 * 1);

 goto success;

workqueue_failed:
 FUNC_13(&VAR_20->bat);
batt_failed:
 FUNC_9(VAR_20);
di_alloc_failed:
success:
 return VAR_19;
}
