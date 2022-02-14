
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {void* usb_buf; struct usb_device* dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (char*,int,unsigned char,int ,int ,int ,int) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct usb_device*,int ,int ,unsigned char,int ,int ,void*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int FUNC_7(struct gspca_dev *VAR_1,
  unsigned char VAR_2, u32 VAR_3, u16 VAR_4, u16 VAR_5,
  s32 VAR_6, void *VAR_7)
{
 struct usb_device *VAR_8 = VAR_1->dev;
 s32 VAR_9 = 0;

 if (VAR_2 == 0x40) {
  if (VAR_6 > 0) {
   FUNC_2(VAR_1->usb_buf, VAR_7, VAR_6);
   VAR_9 = FUNC_4(VAR_8, FUNC_6(VAR_8, 0),
     VAR_3, VAR_2, VAR_4, VAR_5,
     VAR_1->usb_buf,
     VAR_6, 400 + 200 * (VAR_6 > 1));
  } else {
   VAR_9 = FUNC_4(VAR_8, FUNC_6(VAR_8, 0),
     VAR_3, VAR_2, VAR_4, VAR_5, ((void*)0), VAR_6, 400);
  }
 } else {
  if (VAR_6 > 0) {
   VAR_9 = FUNC_4(VAR_8, FUNC_5(VAR_8, 0),
     VAR_3, VAR_2, VAR_4, VAR_5,
     VAR_1->usb_buf,
     VAR_6, 400 + 200 * (VAR_6 > 1));
   FUNC_2(VAR_7, VAR_1->usb_buf, VAR_6);
  } else {
   VAR_9 = FUNC_4(VAR_8, FUNC_5(VAR_8, 0),
     VAR_3, VAR_2, VAR_4, VAR_5, ((void*)0), VAR_6, 400);
  }
 }

 if (VAR_9 < 0)
  FUNC_1("ctrl transfer failed %4d "
   "[p%02x r%d v%04x i%04x len%d]",
   VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_6 > 1 && VAR_9 < VAR_6)
  FUNC_0(VAR_0, "short ctrl transfer %d/%d", VAR_9, VAR_6);

 FUNC_3(1);

 return VAR_9;
}
