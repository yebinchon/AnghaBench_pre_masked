
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {unsigned int n_hwmon; struct hwmon_attr* hwmon_list; } ;
struct TYPE_8__ {int * sensor; } ;
struct TYPE_9__ {TYPE_1__ thermal_sensor_data; } ;
struct TYPE_10__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {TYPE_6__ ixgbe_hwmon_buff; TYPE_5__* pdev; TYPE_3__ hw; } ;
struct TYPE_11__ {int name; int mode; } ;
struct TYPE_14__ {TYPE_4__ attr; int * store; int show; } ;
struct hwmon_attr {TYPE_7__ dev_attr; int name; TYPE_3__* hw; int * sensor; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_6,
    unsigned int VAR_7, int VAR_8) {
 int VAR_9;
 unsigned int VAR_10;
 struct hwmon_attr *VAR_11;

 VAR_10 = VAR_6->ixgbe_hwmon_buff.n_hwmon;
 VAR_11 = &VAR_6->ixgbe_hwmon_buff.hwmon_list[VAR_10];

 switch (VAR_8) {
 case 130:
  VAR_11->dev_attr.show = VAR_3;
  FUNC_1(VAR_11->name, sizeof(VAR_11->name),
    "temp%u_label", VAR_7);
  break;
 case 128:
  VAR_11->dev_attr.show = VAR_5;
  FUNC_1(VAR_11->name, sizeof(VAR_11->name),
    "temp%u_input", VAR_7);
  break;
 case 131:
  VAR_11->dev_attr.show = VAR_2;
  FUNC_1(VAR_11->name, sizeof(VAR_11->name),
    "temp%u_max", VAR_7);
  break;
 case 129:
  VAR_11->dev_attr.show = VAR_4;
  FUNC_1(VAR_11->name, sizeof(VAR_11->name),
    "temp%u_crit", VAR_7);
  break;
 default:
  VAR_9 = -VAR_0;
  return VAR_9;
 }


 VAR_11->sensor =
  &VAR_6->hw.mac.thermal_sensor_data.sensor[VAR_7];
 VAR_11->hw = &VAR_6->hw;
 VAR_11->dev_attr.store = ((void*)0);
 VAR_11->dev_attr.attr.mode = VAR_1;
 VAR_11->dev_attr.attr.name = VAR_11->name;

 VAR_9 = FUNC_0(&VAR_6->pdev->dev,
    &VAR_11->dev_attr);

 if (VAR_9 == 0)
  ++VAR_6->ixgbe_hwmon_buff.n_hwmon;

 return VAR_9;
}
