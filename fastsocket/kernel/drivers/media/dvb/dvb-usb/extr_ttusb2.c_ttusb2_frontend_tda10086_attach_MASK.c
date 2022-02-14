
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* dev; int * fe; } ;
struct TYPE_2__ {int i2c_adap; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_3)
{
 if (FUNC_3(VAR_3->dev->udev,0,3) < 0)
  FUNC_2("set interface to alts=3 failed");

 if ((VAR_3->fe = FUNC_1(VAR_1, &VAR_2, &VAR_3->dev->i2c_adap)) == ((void*)0)) {
  FUNC_0("TDA10086 attach failed\n");
  return -VAR_0;
 }

 return 0;
}
