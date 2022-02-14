
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int usb_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int ,int ,int *,int) ;
 int FUNC_4 (struct dvb_usb_device*,int ,int ,int ,int *,int) ;

int FUNC_5(struct dvb_usb_device *VAR_2, u8 *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if ((VAR_8 = FUNC_1(&VAR_2->usb_mutex)))
  return VAR_8;

 VAR_8 = FUNC_4(VAR_2,VAR_1,0,0,VAR_3,VAR_4);
 FUNC_0(VAR_7);
 VAR_8 = FUNC_3(VAR_2,VAR_0,0,0,VAR_5,VAR_6);

 FUNC_2(&VAR_2->usb_mutex);

 return VAR_8;
}
