
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int * fe; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_1)
{
 if (FUNC_0(VAR_1->dev) < 0)
  return -VAR_0;

 VAR_1->fe = FUNC_1(VAR_1->dev);
 if (VAR_1->fe == ((void*)0))
  return -VAR_0;

 return 0;
}
