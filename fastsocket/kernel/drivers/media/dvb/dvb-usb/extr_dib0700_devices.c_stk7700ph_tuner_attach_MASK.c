
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_2__* fe; } ;
struct TYPE_6__ {int callback; } ;
struct TYPE_5__ {struct i2c_adapter* i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_0 (TYPE_2__*,int ,int) ;
 int * FUNC_1 (int ,TYPE_2__*,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_5)
{
 struct i2c_adapter *VAR_6;

 VAR_6 = FUNC_0(VAR_5->fe,
  VAR_0, 1);

 VAR_3.i2c_adap = VAR_6;


 VAR_5->fe->callback = VAR_2;

 return FUNC_1(VAR_4, VAR_5->fe, &VAR_3)
  == ((void*)0) ? -VAR_1 : 0;
}
