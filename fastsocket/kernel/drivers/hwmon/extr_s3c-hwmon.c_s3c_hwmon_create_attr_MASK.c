
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* owner; void* mode; int name; } ;
struct TYPE_5__ {int show; TYPE_1__ attr; } ;
struct sensor_device_attribute {int index; TYPE_2__ dev_attr; } ;
struct s3c_hwmon_chcfg {scalar_t__ name; } ;
struct s3c_hwmon_attr {struct sensor_device_attribute in; int label_name; struct sensor_device_attribute label; int in_name; } ;
struct device {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,TYPE_2__*) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4,
     struct s3c_hwmon_chcfg *VAR_5,
     struct s3c_hwmon_attr *VAR_6,
     int VAR_7)
{
 struct sensor_device_attribute *VAR_8;
 int VAR_9;

 FUNC_3(VAR_6->in_name, sizeof(VAR_6->in_name), "in%d_input", VAR_7);

 VAR_8 = &VAR_6->in;
 VAR_8->index = VAR_7;
 VAR_8->dev_attr.attr.name = VAR_6->in_name;
 VAR_8->dev_attr.attr.mode = VAR_0;
 VAR_8->dev_attr.attr.owner = VAR_1;
 VAR_8->dev_attr.show = VAR_2;

 VAR_9 = FUNC_1(VAR_4, &VAR_8->dev_attr);
 if (VAR_9 < 0) {
  FUNC_0(VAR_4, "failed to create input attribute\n");
  return VAR_9;
 }


 if (VAR_5->name) {
  FUNC_3(VAR_6->label_name, sizeof(VAR_6->label_name),
    "in%d_label", VAR_7);

  VAR_8 = &VAR_6->label;
  VAR_8->index = VAR_7;
  VAR_8->dev_attr.attr.name = VAR_6->label_name;
  VAR_8->dev_attr.attr.mode = VAR_0;
  VAR_8->dev_attr.attr.owner = VAR_1;
  VAR_8->dev_attr.show = VAR_3;

  VAR_9 = FUNC_1(VAR_4, &VAR_8->dev_attr);
  if (VAR_9 < 0) {
   FUNC_2(VAR_4, &VAR_6->in.dev_attr);
   FUNC_0(VAR_4, "failed to create label attribute\n");
  }
 }

 return VAR_9;
}
