
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_device {TYPE_1__* ll_driver; } ;
struct TYPE_2__ {int (* open ) (struct hid_device*) ;} ;


 struct hid_device* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct hid_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ll_driver->open(VAR_1);
}
