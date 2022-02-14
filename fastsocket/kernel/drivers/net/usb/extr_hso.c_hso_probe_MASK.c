
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int num_altsetting; int needs_remote_wakeup; int dev; TYPE_4__* cur_altsetting; TYPE_2__* altsetting; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct hso_shared_int {int dummy; } ;
struct hso_device {int dummy; } ;
struct TYPE_7__ {int bInterfaceClass; } ;
struct TYPE_8__ {TYPE_3__ desc; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 struct hso_device* FUNC_1 (struct usb_interface*,int) ;
 struct hso_device* FUNC_2 (struct usb_interface*,int,struct hso_shared_int*) ;
 struct hso_device* FUNC_3 (struct usb_interface*,int) ;
 struct hso_shared_int* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,unsigned char*) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (struct usb_interface*,struct hso_device*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_5,
       const struct usb_device_id *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned char VAR_11;
 struct hso_device *VAR_12 = ((void*)0);
 struct hso_shared_int *VAR_13;
 struct hso_device *VAR_14 = ((void*)0);

 VAR_9 = VAR_5->altsetting->desc.bInterfaceNumber;



 if (VAR_6->driver_info)
  VAR_10 = ((u32 *)(VAR_6->driver_info))[VAR_9];
 else
  VAR_10 = FUNC_6(VAR_5);

 if (VAR_5->cur_altsetting->desc.bInterfaceClass != 0xFF) {
  FUNC_0(&VAR_5->dev, "Not our interface\n");
  return -VAR_0;
 }


 if (VAR_5->num_altsetting > 1)
  FUNC_9(FUNC_8(VAR_5), VAR_9, 1);
 VAR_5->needs_remote_wakeup = 1;


 switch (VAR_10 & VAR_1) {
 case 128:
  if ((VAR_10 & VAR_2) == VAR_3) {

   if (!VAR_4) {
    VAR_12 = FUNC_3(VAR_5,
        VAR_10);
    if (!VAR_12)
     goto exit;
    VAR_14 = VAR_12;
   }
  }

  if (FUNC_7(VAR_5, &VAR_11))

   goto exit;

  VAR_13 = FUNC_4(VAR_5);
  if (!VAR_13)
   goto exit;

  for (VAR_8 = 1, VAR_7 = 0; VAR_8 < 0x100; VAR_8 = VAR_8 << 1, VAR_7++) {
   if (VAR_11 & VAR_8) {
    VAR_12 = FUNC_2(
      VAR_5, VAR_8, VAR_13);
    if (!VAR_12)
     goto exit;
   }
  }

  if (VAR_14)
   VAR_12 = VAR_14;
  break;

 case 129:

  if (((VAR_10 & VAR_2) == VAR_3)
      && !VAR_4)
   VAR_12 = FUNC_3(VAR_5, VAR_10);
  else
   VAR_12 =
       FUNC_1(VAR_5, VAR_10);
  if (!VAR_12)
   goto exit;
  break;
 default:
  goto exit;
 }


 FUNC_10(VAR_5, VAR_12);


 return 0;
exit:
 FUNC_5(VAR_5);
 return -VAR_0;
}
