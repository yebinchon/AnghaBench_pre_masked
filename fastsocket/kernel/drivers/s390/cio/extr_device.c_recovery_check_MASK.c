
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {int devno; int ssid; } ;
struct TYPE_3__ {int state; TYPE_2__ dev_id; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;


 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ccw_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, void *VAR_2)
{
 struct ccw_device *VAR_3 = FUNC_4(VAR_1);
 int *VAR_4 = VAR_2;

 FUNC_2(VAR_3->ccwlock);
 switch (VAR_3->private->state) {
 case 129:
  FUNC_0(3, "recovery: trigger 0.%x.%04x\n",
         VAR_3->private->dev_id.ssid,
         VAR_3->private->dev_id.devno);
  FUNC_1(VAR_3, VAR_0);
  *VAR_4 = 1;
  break;
 case 128:
  *VAR_4 = 1;
  break;
 }
 FUNC_3(VAR_3->ccwlock);

 return 0;
}
