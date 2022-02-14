
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lme2510_state {int * usb_buffer; } ;
struct dvb_usb_device {int usb_mutex; int udev; struct lme2510_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int,int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_usb_device *VAR_4,
  u8 *VAR_5, int VAR_6, u8 *VAR_7, int VAR_8)
{
 struct lme2510_state *VAR_9 = VAR_4->priv;
 u8 *VAR_10;
 int VAR_11 = 0;

 if (VAR_9->usb_buffer == ((void*)0)) {
  VAR_9->usb_buffer = FUNC_1(512, VAR_3);
  if (VAR_9->usb_buffer == ((void*)0)) {
   FUNC_0("MEM Error no memory");
   return -VAR_2;
  }
 }
 VAR_10 = VAR_9->usb_buffer;


 FUNC_4(VAR_10, VAR_5, (VAR_6 > 512) ? 512 : VAR_6);

 VAR_11 = FUNC_6(&VAR_4->usb_mutex);

 if (VAR_11 < 0)
  return -VAR_0;

 VAR_11 |= FUNC_8(VAR_4->udev, FUNC_10(VAR_4->udev, 0x01));

 VAR_11 |= FUNC_3(VAR_4->udev, VAR_10, VAR_6 , 0x01);

 FUNC_5(10);

 VAR_11 |= FUNC_8(VAR_4->udev, FUNC_9(VAR_4->udev, 0x01));

 VAR_11 |= FUNC_2(VAR_4->udev, VAR_10, (VAR_8 > 512) ?
   512 : VAR_8 , 0x01);

 if (VAR_8 > 0)
  FUNC_4(VAR_7, VAR_10, VAR_8);

 FUNC_7(&VAR_4->usb_mutex);

 return (VAR_11 < 0) ? -VAR_1 : 0;
}
