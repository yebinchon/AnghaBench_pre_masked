
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* dev; int fe; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->fe,
     &VAR_2->dev->i2c_adap, 0x61,
     VAR_0);
 return 0;
}
