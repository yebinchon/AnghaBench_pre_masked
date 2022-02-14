
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct aiptek {TYPE_1__* urb; int usbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aiptek* FUNC_0 (struct input_dev*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2)
{
 struct aiptek *VAR_3 = FUNC_0(VAR_2);

 VAR_3->urb->dev = VAR_3->usbdev;
 if (FUNC_1(VAR_3->urb, VAR_1) != 0)
  return -VAR_0;

 return 0;
}
