
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {size_t id; int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int ,int ,struct i2c_adapter*,int *) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_4)
{
 struct i2c_adapter *VAR_5;
 VAR_5 = FUNC_0(VAR_4->fe, VAR_0, 1);
 return FUNC_1(VAR_2, VAR_4->fe, VAR_5,
  &VAR_3[VAR_4->id]) == ((void*)0) ? -VAR_1 : 0;
}
