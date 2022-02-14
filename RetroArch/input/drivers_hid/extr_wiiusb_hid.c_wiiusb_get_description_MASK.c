
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* endpoints; scalar_t__ bNumEndpoints; } ;
typedef TYPE_1__ usb_interfacedesc ;
struct TYPE_7__ {int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
typedef TYPE_2__ usb_endpointdesc ;
typedef int usb_device_entry ;
struct TYPE_8__ {unsigned char bNumConfigurations; TYPE_4__* configurations; } ;
typedef TYPE_3__ usb_devdesc ;
struct TYPE_9__ {TYPE_1__* interfaces; scalar_t__ bNumInterfaces; } ;
typedef TYPE_4__ usb_configurationdesc ;
struct wiiusb_adapter {int endpoint_in; int endpoint_out; int endpoint_out_max_size; int endpoint_in_max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(usb_device_entry *VAR_3,
      struct wiiusb_adapter *VAR_4, usb_devdesc *VAR_5)
{
   unsigned char VAR_6;
   unsigned VAR_7, VAR_8;

   for (VAR_6 = 0; VAR_6 < VAR_5->bNumConfigurations; VAR_6++)
   {
      const usb_configurationdesc *VAR_9 = &VAR_5->configurations[VAR_6];

      for (VAR_7 = 0; VAR_7 < (int)VAR_9->bNumInterfaces; VAR_7++)
      {
         const usb_interfacedesc *VAR_10 = &VAR_9->interfaces[VAR_7];

         for (VAR_8 = 0; VAR_8 < (int)VAR_10->bNumEndpoints; VAR_8++)
         {
            const usb_endpointdesc *VAR_11 = &VAR_10->endpoints[VAR_8];
            bool VAR_12 = (VAR_11->bmAttributes & 0x03) == VAR_1;
            bool VAR_13 = (VAR_11->bEndpointAddress & 0x80) == VAR_2;
            bool VAR_14 = (VAR_11->bEndpointAddress & 0x80) == VAR_0;

            if (VAR_12)
            {
               if (VAR_14)
               {
                  VAR_4->endpoint_in = VAR_11->bEndpointAddress;
                  VAR_4->endpoint_in_max_size = VAR_11->wMaxPacketSize;
               }
               if (VAR_13)
               {
                  VAR_4->endpoint_out = VAR_11->bEndpointAddress;
                  VAR_4->endpoint_out_max_size = VAR_11->wMaxPacketSize;
               }
            }
         }
         break;
      }
   }
}
