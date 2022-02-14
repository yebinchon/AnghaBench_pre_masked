
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ value; int wait; } ;
struct usb_line6_pod {TYPE_1__ clipping; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int state; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct usb_line6_pod* FUNC_6 (struct usb_interface*) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
     struct device_attribute *VAR_6, char *VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_5(VAR_5);
 struct usb_line6_pod *VAR_9 = FUNC_6(VAR_8);
 int VAR_10 = 0;
 FUNC_0(VAR_4, VAR_3);
 VAR_9->clipping.value = 0;
 FUNC_1(&VAR_9->clipping.wait, &VAR_4);
 VAR_3->state = VAR_1;

 while (VAR_9->clipping.value == 0) {
  if (FUNC_4(VAR_3)) {
   VAR_10 = -VAR_0;
   break;
  } else
   FUNC_3();
 }

 VAR_3->state = VAR_2;
 FUNC_2(&VAR_9->clipping.wait, &VAR_4);
 return VAR_10;
}
