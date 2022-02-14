
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int usb_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int (*) (char*)) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct dvb_usb_device *VAR_6, u8 VAR_7, u8 *VAR_8, int VAR_9, u8 *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14[12] = { 0 }, VAR_15[20] = { 0 };

 VAR_15[0] = VAR_7;

 if (VAR_9 > 19)
  VAR_9 = 19;

 if (VAR_11 > 11)
  VAR_11 = 11;

 if (VAR_8 != ((void*)0) && VAR_9 > 0)
  FUNC_3(&VAR_15[1], VAR_8, VAR_9);

 FUNC_0("out buffer: ");
 FUNC_1(VAR_15,VAR_9+1,FUNC_0);

 if ((VAR_13 = FUNC_5(&VAR_6->usb_mutex)))
  return VAR_13;

 if (FUNC_7(VAR_6->udev,
   FUNC_9(VAR_6->udev,0),
   VAR_2, VAR_5 | VAR_4, 0, 0,
   VAR_15, 20, 2000) != 20) {
  FUNC_2("USB control message 'out' went wrong.");
  VAR_13 = -VAR_0;
  goto unlock;
 }

 FUNC_4(VAR_12);

 if (FUNC_7(VAR_6->udev,
   FUNC_8(VAR_6->udev,0),
   VAR_1, VAR_5 | VAR_3, 0, 0,
   VAR_14, 12, 2000) != 12) {
  FUNC_2("USB control message 'in' went wrong.");
  VAR_13 = -VAR_0;
  goto unlock;
 }

 FUNC_0("in buffer: ");
 FUNC_1(VAR_14,12,FUNC_0);

 if (VAR_10 != ((void*)0) && VAR_11 > 0)
  FUNC_3(VAR_10,&VAR_14[1],VAR_11);

unlock:
 FUNC_6(&VAR_6->usb_mutex);

 return VAR_13;
}
