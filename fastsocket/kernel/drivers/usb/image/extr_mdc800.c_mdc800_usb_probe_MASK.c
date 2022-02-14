
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_10__ {int bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {int bNumConfigurations; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct TYPE_13__ {int bEndpointAddress; int bInterval; } ;
struct TYPE_12__ {int* endpoint; int io_lock; int state; int download_urb_buffer; struct usb_device* dev; int download_urb; int write_urb_buffer; int write_urb; int irq_urb_buffer; int irq_urb; scalar_t__ open; } ;
struct TYPE_11__ {TYPE_7__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_7__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct usb_device*,int ,int ,int,int ,TYPE_4__*) ;
 int FUNC_9 (int ,struct usb_device*,int ,int ,int,int ,TYPE_4__*,int) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int) ;
 int FUNC_12 (struct usb_interface*,int *) ;
 int FUNC_13 (struct usb_interface*,TYPE_4__*) ;
 int FUNC_14 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_15 (struct usb_interface *VAR_8,
          const struct usb_device_id *VAR_9)
{
 int VAR_10,VAR_11;
 struct usb_host_interface *VAR_12;
 struct usb_device *VAR_13 = FUNC_4 (VAR_8);
 int VAR_14=0;
 int VAR_15;

 FUNC_0 ("(mdc800_usb_probe) called.");


 if (VAR_2->dev != ((void*)0))
 {
  FUNC_3(&VAR_8->dev, "only one Mustek MDC800 is supported.\n");
  return -VAR_0;
 }

 if (VAR_13->descriptor.bNumConfigurations != 1)
 {
  FUNC_1(&VAR_8->dev,
   "probe fails -> wrong Number of Configuration\n");
  return -VAR_0;
 }
 VAR_12 = VAR_8->cur_altsetting;

 if (
   ( VAR_12->desc.bInterfaceClass != 0xff )
  || ( VAR_12->desc.bInterfaceSubClass != 0 )
  || ( VAR_12->desc.bInterfaceProtocol != 0 )
  || ( VAR_12->desc.bNumEndpoints != 4)
 )
 {
  FUNC_1(&VAR_8->dev, "probe fails -> wrong Interface\n");
  return -VAR_0;
 }


 for (VAR_10=0; VAR_10<4; VAR_10++)
 {
  VAR_2->endpoint[VAR_10]=-1;
  for (VAR_11=0; VAR_11<4; VAR_11++)
  {
   if (FUNC_5 (&VAR_12->endpoint [VAR_11].desc,&VAR_4 [VAR_10]))
   {
    VAR_2->endpoint[VAR_10]=VAR_12->endpoint [VAR_11].desc.bEndpointAddress ;
    if (VAR_10==1)
    {
     VAR_14=VAR_12->endpoint [VAR_11].desc.bInterval;
    }
   }
  }
  if (VAR_2->endpoint[VAR_10] == -1)
  {
   FUNC_1(&VAR_8->dev, "probe fails -> Wrong Endpoints.\n");
   return -VAR_0;
  }
 }


 FUNC_2(&VAR_8->dev, "Found Mustek MDC800 on USB.\n");

 FUNC_6(&VAR_2->io_lock);

 VAR_15 = FUNC_12(VAR_8, &VAR_3);
 if (VAR_15) {
  FUNC_1(&VAR_8->dev, "Not able to get a minor for this device.\n");
  FUNC_7(&VAR_2->io_lock);
  return -VAR_0;
 }

 VAR_2->dev=VAR_13;
 VAR_2->open=0;


 FUNC_9 (
  VAR_2->irq_urb,
  VAR_2->dev,
  FUNC_11 (VAR_2->dev,VAR_2->endpoint [1]),
  VAR_2->irq_urb_buffer,
  8,
  VAR_6,
  VAR_2,
  VAR_14
 );

 FUNC_8 (
  VAR_2->write_urb,
  VAR_2->dev,
  FUNC_14 (VAR_2->dev, VAR_2->endpoint[0]),
  VAR_2->write_urb_buffer,
  8,
  VAR_7,
  VAR_2
 );

 FUNC_8 (
  VAR_2->download_urb,
  VAR_2->dev,
  FUNC_10 (VAR_2->dev, VAR_2->endpoint [3]),
  VAR_2->download_urb_buffer,
  64,
  VAR_5,
  VAR_2
 );

 VAR_2->state=VAR_1;

 FUNC_7(&VAR_2->io_lock);

 FUNC_13(VAR_8, VAR_2);
 return 0;
}
