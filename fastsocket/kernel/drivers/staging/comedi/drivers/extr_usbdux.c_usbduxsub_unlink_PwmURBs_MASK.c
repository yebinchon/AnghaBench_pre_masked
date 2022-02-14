
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {TYPE_1__* interface; scalar_t__ urbPwm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct usbduxsub *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0 && VAR_0->urbPwm) {
  if (VAR_0->urbPwm)
   FUNC_1(VAR_0->urbPwm);
  FUNC_0(&VAR_0->interface->dev,
   "comedi: unlinked PwmURB: res=%d\n", VAR_1);
 }
 return VAR_1;
}
