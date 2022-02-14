
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* dev; TYPE_2__* fe; } ;
struct TYPE_4__ {int callback; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,TYPE_2__*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_4)
{

 VAR_4->fe->callback = VAR_1;

 return FUNC_0(VAR_3, VAR_4->fe, &VAR_4->dev->i2c_adap,
     &VAR_2)
  == ((void*)0) ? -VAR_0 : 0;
}
