
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {TYPE_1__* endpoint; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device {int dev; } ;
struct TYPE_2__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*,int ,unsigned char*,int,int *,int) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_7 (struct usb_endpoint_descriptor*) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_2(VAR_2);
 struct usb_host_interface *VAR_4 = &VAR_2->altsetting[0];
 struct usb_endpoint_descriptor *VAR_5;
 unsigned char *VAR_6;
 u8 VAR_7;
 int VAR_8;


 for (VAR_8 = 1; VAR_8 >= 0; VAR_8--) {
  VAR_5 = &VAR_4->endpoint[VAR_8].desc;
  if (FUNC_6(VAR_5) &&
      FUNC_7(VAR_5)) {
   VAR_7 = VAR_5->bEndpointAddress;
   break;
  }
 }
 if (VAR_8 == -1) {
  FUNC_0(&VAR_3->dev,
   "ath9k_htc: Could not find bulk out endpoint\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(31, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;


 VAR_6[0] = 0x55;
 VAR_6[1] = 0x53;
 VAR_6[2] = 0x42;
 VAR_6[3] = 0x43;
 VAR_6[14] = 6;

 VAR_6[15] = 0x1b;
 VAR_6[19] = 0x2;

 FUNC_1(&VAR_3->dev, "Ejecting storage device...\n");
 VAR_8 = FUNC_5(VAR_3, FUNC_9(VAR_3, VAR_7),
  VAR_6, 31, ((void*)0), 2000);
 FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;




 FUNC_8(VAR_2, ((void*)0));
 return 0;
}
