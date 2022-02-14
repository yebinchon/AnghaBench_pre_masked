
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_3)
{
 VAR_3->fe = FUNC_0(VAR_2, &VAR_1,
  &VAR_3->dev->i2c_adap);
 if (VAR_3->fe == ((void*)0))
  return -VAR_0;

 return 0;
}
