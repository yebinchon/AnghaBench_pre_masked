
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *,int,int (*) (char*,int ,int ,int )) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;

int FUNC_8(struct dvb_usb_device *VAR_3, u8 VAR_4, u16 VAR_5, u16 VAR_6, u8 *VAR_7, int VAR_8)
{
 int VAR_9 = 0,VAR_10 = 0;

 if ((VAR_9 = FUNC_3(&VAR_3->usb_mutex)))
  return VAR_9;

 while (VAR_9 >= 0 && VAR_9 != VAR_8 && VAR_10 < 3) {
  VAR_9 = FUNC_5(VAR_3->udev,
   FUNC_6(VAR_3->udev,0),
   VAR_4,
   VAR_2 | VAR_1,
   VAR_5,VAR_6,VAR_7,VAR_8,
   2000);
  FUNC_0("reading number %d (ret: %d)\n",VAR_10,VAR_9);
  VAR_10++;
 }

 if (VAR_9 < 0 || VAR_9 != VAR_8) {
  FUNC_7("usb in %d operation failed.", VAR_4);
  VAR_9 = -VAR_0;
 } else
  VAR_9 = 0;

 FUNC_1("in: req. %x, val: %x, ind: %x, buffer: ",VAR_4,VAR_5,VAR_6);
 FUNC_2(VAR_7,VAR_8,FUNC_1);

 FUNC_4(&VAR_3->usb_mutex);

 return VAR_9;
}
