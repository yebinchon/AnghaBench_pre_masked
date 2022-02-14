
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flexcop_usb {int uintf; TYPE_1__* udev; } ;
struct TYPE_2__ {int speed; } ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,struct flexcop_usb*) ;

__attribute__((used)) static int FUNC_4(struct flexcop_usb *VAR_1)
{

 FUNC_2(VAR_1->udev,0,1);
 switch (VAR_1->udev->speed) {
 case 129:
  FUNC_0("cannot handle USB speed because it is too slow.");
  return -VAR_0;
  break;
 case 131:
  FUNC_1("running at FULL speed.");
  break;
 case 130:
  FUNC_1("running at HIGH speed.");
  break;
 case 128:
 default:
  FUNC_0("cannot handle USB speed because it is unknown.");
  return -VAR_0;
 }
 FUNC_3(VAR_1->uintf, VAR_1);
 return 0;
}
