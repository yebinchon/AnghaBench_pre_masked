
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* dev; int fe; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 struct dvb_frontend* FUNC_0 (int ,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_frontend *VAR_4;
 VAR_4 = FUNC_0(VAR_1, VAR_3->fe,
   &VAR_3->dev->i2c_adap, &VAR_2);
 return (VAR_4 == ((void*)0)) ? -VAR_0 : 0;
}
