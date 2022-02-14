
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; size_t bNumEndpoints; scalar_t__ bAlternateSetting; int bInterfaceNumber; TYPE_2__* endpoints; } ;
typedef TYPE_1__ usb_interfacedesc ;
struct TYPE_8__ {scalar_t__ bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
typedef TYPE_2__ usb_endpointdesc ;
struct ukbd {int fd; scalar_t__ vid; scalar_t__ pid; size_t configuration; scalar_t__ altInterface; int ep; int connected; int interface; int ep_size; int cb; int device_id; } ;
typedef struct ukbd usb_device_entry ;
struct TYPE_9__ {size_t bNumConfigurations; TYPE_4__* configurations; } ;
typedef TYPE_3__ usb_devdesc ;
struct TYPE_10__ {size_t bNumInterfaces; size_t bConfigurationValue; TYPE_1__* interfaces; } ;
typedef TYPE_4__ usb_configurationdesc ;
typedef size_t u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
typedef int s32 ;
typedef int eventcallback ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int,int *,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int,size_t*) ;
 scalar_t__ FUNC_5 (int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct ukbd*,int,scalar_t__,size_t*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,int*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int,size_t) ;
 int VAR_6 ;
 int FUNC_10 () ;
 struct ukbd* VAR_7 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (int ,struct ukbd*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct ukbd*,int ,int) ;

s32 FUNC_16(const eventcallback VAR_9)
{
 usb_device_entry *VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 u16 VAR_14, VAR_15;
 bool VAR_16 = 0;
 u32 VAR_17, VAR_18, VAR_19;
 usb_devdesc VAR_20;
 usb_configurationdesc *VAR_21;
 usb_interfacedesc *VAR_22;
 usb_endpointdesc *VAR_23;

 VAR_10 = (usb_device_entry*)FUNC_12(VAR_8, VAR_0 * sizeof(usb_device_entry));
 if(VAR_10 == ((void*)0))
  return -1;

 FUNC_15(VAR_10, 0, VAR_0 * sizeof(usb_device_entry));

 if (FUNC_6(VAR_10, VAR_0, VAR_1, &VAR_11) < 0)
 {
  FUNC_13(VAR_8, VAR_10);
  return -2;
 }

 if (VAR_7) {
  if (VAR_7->fd != -1) FUNC_1(&VAR_7->fd);
 } else {
  VAR_7 = (struct ukbd *) FUNC_14(sizeof(struct ukbd));

  if (!VAR_7)
   return -1;
 }

 FUNC_15(VAR_7, 0, sizeof(struct ukbd));
 VAR_7->fd = -1;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
 {
  VAR_14 = VAR_10[VAR_12].vid;;
  VAR_15 = VAR_10[VAR_12].pid;

  if ((VAR_14 == 0) || (VAR_15 == 0))
   continue;

  s32 VAR_24 = 0;
  if (FUNC_7(VAR_10[VAR_12].device_id, VAR_14, VAR_15, &VAR_24) < 0)
   continue;

  if (FUNC_5(VAR_24, &VAR_20) < 0) {
   FUNC_1(&VAR_24);
   continue;
  }

  for(VAR_17 = 0; VAR_17 < VAR_20.bNumConfigurations; VAR_17++)
  {
   VAR_21 = &VAR_20.configurations[VAR_17];

   for(VAR_18 = 0; VAR_18 < VAR_21->bNumInterfaces; VAR_18++)
   {
    VAR_22 = &VAR_21->interfaces[VAR_18];

    if ((VAR_22->bInterfaceClass == VAR_1) &&
     (VAR_22->bInterfaceSubClass == VAR_5) &&
     (VAR_22->bInterfaceProtocol== VAR_4))
    {
     for(VAR_19 = 0; VAR_19 < VAR_22->bNumEndpoints; VAR_19++)
     {
      VAR_23 = &VAR_22->endpoints[VAR_19];

      if (VAR_23->bmAttributes != VAR_3)
       continue;

      if (!(VAR_23->bEndpointAddress & VAR_2))
       continue;

      VAR_7->fd = VAR_24;
      VAR_7->cb = VAR_9;

      VAR_7->configuration = VAR_21->bConfigurationValue;
      VAR_7->interface = VAR_22->bInterfaceNumber;
      VAR_7->altInterface = VAR_22->bAlternateSetting;

      VAR_7->ep = VAR_23->bEndpointAddress;
      VAR_7->ep_size = VAR_23->wMaxPacketSize;

      VAR_16 = 1;

      break;
     }
    }

    if (VAR_16)
     break;
   }

   if (VAR_16)
    break;
  }

  FUNC_3(&VAR_20);

  if (VAR_16)
   break;
  else
   FUNC_1(&VAR_24);
 }

 FUNC_13(VAR_8, VAR_10);

 if (!VAR_16)
  return -3;

 if (FUNC_4(VAR_7->fd, &VAR_13) < 0)
 {
  FUNC_0();
  return -4;
 }

 if (VAR_13 != VAR_7->configuration &&
  FUNC_9(VAR_7->fd, VAR_7->configuration) < 0)
 {
  FUNC_0();
  return -5;
 }

 if (VAR_7->altInterface != 0 &&
  FUNC_8(VAR_7->fd, VAR_7->interface, VAR_7->altInterface) < 0)
 {
  FUNC_0();
  return -6;
 }

 if (FUNC_10() != 0)
 {
  if (FUNC_11(0) < 0)
  {
   FUNC_0();
   return -6;
  }

  if (FUNC_10() == 1)
  {
   FUNC_0();
   return -7;
  }
 }

 if (FUNC_2(VAR_7->fd, &VAR_6, ((void*)0)) < 0)
 {
  FUNC_0();
  return -8;
 }

 VAR_7->connected = 1;

 return 1;
}
