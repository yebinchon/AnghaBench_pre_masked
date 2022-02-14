
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int * fe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dvb_usb_adapter *VAR_0)
{
 if (VAR_0->fe != ((void*)0)) {
  FUNC_1(VAR_0->fe);
  FUNC_0(VAR_0->fe);
 }
 return 0;
}
