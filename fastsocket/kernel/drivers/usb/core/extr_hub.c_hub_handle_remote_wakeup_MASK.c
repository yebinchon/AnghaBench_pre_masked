
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hub {int intfdev; struct usb_device* hdev; } ;
struct usb_device {scalar_t__ state; struct usb_device** children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct usb_device*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_hub*,unsigned int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;

__attribute__((used)) static int FUNC_8(struct usb_hub *VAR_6, unsigned int VAR_7,
  u16 VAR_8, u16 VAR_9)
{
 struct usb_device *VAR_10;
 struct usb_device *VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 VAR_10 = VAR_6->hdev;
 VAR_11 = VAR_10->children[VAR_7-1];
 if (!FUNC_2(VAR_10)) {
  if (!(VAR_9 & VAR_2))
   return 0;
  FUNC_0(VAR_10, VAR_7, VAR_1);
 } else {
  if (!VAR_11 || VAR_11->state != VAR_5 ||
     (VAR_8 & VAR_3) !=
     VAR_4)
   return 0;
 }

 if (VAR_11) {

  FUNC_4(10);

  FUNC_6(VAR_11);
  VAR_13 = FUNC_5(VAR_11);
  FUNC_7(VAR_11);
  if (VAR_13 < 0)
   VAR_12 = 1;
 } else {
  VAR_13 = -VAR_0;
  FUNC_3(VAR_6, VAR_7, 1);
 }
 FUNC_1(VAR_6->intfdev, "resume on port %d, status %d\n",
   VAR_7, VAR_13);
 return VAR_12;
}
