
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int * bus; } ;
struct ccw_device {TYPE_2__* private; struct device dev; } ;
struct TYPE_3__ {int devno; int ssid; } ;
struct TYPE_4__ {TYPE_1__ dev_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 int VAR_3;

 VAR_2->bus = &VAR_0;
 VAR_3 = FUNC_0(&VAR_1->dev, "0.%x.%04x", VAR_1->private->dev_id.ssid,
      VAR_1->private->dev_id.devno);
 if (VAR_3)
  return VAR_3;
 return FUNC_1(VAR_2);
}
