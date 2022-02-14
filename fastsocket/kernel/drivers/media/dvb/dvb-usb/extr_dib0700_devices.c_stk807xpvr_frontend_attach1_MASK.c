
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;
 int * VAR_2 ;
 int * FUNC_1 (int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_3)
{

 FUNC_0(&VAR_3->dev->i2c_adap, 1, 0x12, 0x82);

 VAR_3->fe = FUNC_1(VAR_1, &VAR_3->dev->i2c_adap, 0x82,
         &VAR_2[1]);

 return VAR_3->fe == ((void*)0) ? -VAR_0 : 0;
}
