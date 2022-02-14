
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 struct dvb_usb_adapter *VAR_8 = VAR_4;

 if (VAR_6 == VAR_3) {

  FUNC_0(VAR_8->dev, VAR_1, VAR_2, 0);
  FUNC_2(10);
  FUNC_0(VAR_8->dev, VAR_1, VAR_2, 1);
  FUNC_2(10);
 } else {
  FUNC_1("xc5000: unknown tuner callback command: %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
