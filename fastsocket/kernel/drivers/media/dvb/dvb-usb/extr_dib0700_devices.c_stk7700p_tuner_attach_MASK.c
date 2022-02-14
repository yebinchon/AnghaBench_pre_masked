
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {int fe; TYPE_3__* dev; } ;
struct dib0700_state {scalar_t__ is_dib7000pc; } ;
typedef int s8 ;
struct TYPE_6__ {TYPE_2__* udev; struct dib0700_state* priv; struct i2c_adapter i2c_adap; } ;
struct TYPE_4__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct i2c_adapter* FUNC_1 (int ,int ,int) ;
 struct i2c_adapter* FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int ,int ,struct i2c_adapter*,int *,int) ;
 int FUNC_4 (struct i2c_adapter*,int,int*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_6)
{
 struct i2c_adapter *VAR_7 = &VAR_6->dev->i2c_adap;
 struct dib0700_state *VAR_8 = VAR_6->dev->priv;
 struct i2c_adapter *VAR_9;
 s8 VAR_10;
 int VAR_11=1220;
 if (VAR_6->dev->udev->descriptor.idVendor == FUNC_0(VAR_3) &&
  VAR_6->dev->udev->descriptor.idProduct == FUNC_0(VAR_2)) {
  if (!FUNC_4(VAR_7,0x58,&VAR_10)) VAR_11=1220+VAR_10;
 }
 if (VAR_8->is_dib7000pc)
  VAR_9 = FUNC_2(VAR_6->fe, VAR_0, 1);
 else
  VAR_9 = FUNC_1(VAR_6->fe, VAR_0, 1);

 return FUNC_3(VAR_4, VAR_6->fe, VAR_9, &VAR_5,
  VAR_11) == ((void*)0) ? -VAR_1 : 0;
}
