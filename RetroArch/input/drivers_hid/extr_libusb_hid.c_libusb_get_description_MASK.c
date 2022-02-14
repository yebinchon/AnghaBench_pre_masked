
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_interface_descriptor {scalar_t__ bInterfaceClass; struct libusb_endpoint_descriptor* endpoint; scalar_t__ bNumEndpoints; scalar_t__ bInterfaceNumber; } ;
struct libusb_interface {int num_altsetting; struct libusb_interface_descriptor* altsetting; } ;
struct libusb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
struct libusb_device {int dummy; } ;
struct libusb_config_descriptor {struct libusb_interface* interface; scalar_t__ bNumInterfaces; } ;
struct libusb_adapter {int interface_number; int endpoint_in; int endpoint_out; int endpoint_out_max_size; int endpoint_in_max_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct libusb_config_descriptor*) ;
 int FUNC_2 (struct libusb_device*,int ,struct libusb_config_descriptor**) ;

__attribute__((used)) static void FUNC_3(struct libusb_device *VAR_6,
      struct libusb_adapter *VAR_7)
{
   int VAR_8;
   unsigned VAR_9, VAR_10;
   struct libusb_config_descriptor *VAR_11;

   int VAR_12 = FUNC_2(VAR_6, 0, &VAR_11);

   if (VAR_12 != 0)
   {
      FUNC_0("Error %d getting libusb config descriptor\n", VAR_12);
      return;
   }

   for (VAR_9 = 0; VAR_9 < (int)VAR_11->bNumInterfaces; VAR_9++)
   {
      const struct libusb_interface *VAR_13 = &VAR_11->interface[VAR_9];

      for(VAR_8 = 0; VAR_8 < VAR_13->num_altsetting; VAR_8++)
      {
         const struct libusb_interface_descriptor *VAR_14 =
            &VAR_13->altsetting[VAR_8];




         {
            VAR_7->interface_number = (int)VAR_14->bInterfaceNumber;

            for(VAR_10 = 0; VAR_10 < (int)VAR_14->bNumEndpoints; VAR_10++)
            {
               const struct libusb_endpoint_descriptor *VAR_15 =
                  &VAR_14->endpoint[VAR_10];
               bool VAR_16 = (VAR_15->bmAttributes & VAR_5)
                  == VAR_4;
               bool VAR_17 = (VAR_15->bEndpointAddress & VAR_1)
                  == VAR_3;
               bool VAR_18 = (VAR_15->bEndpointAddress & VAR_1)
                  == VAR_2;

               if (VAR_16)
               {
                  if (VAR_18)
                  {
                     VAR_7->endpoint_in = VAR_15->bEndpointAddress;
                     VAR_7->endpoint_in_max_size = VAR_15->wMaxPacketSize;
                  }
                  if (VAR_17)
                  {
                     VAR_7->endpoint_out = VAR_15->bEndpointAddress;
                     VAR_7->endpoint_out_max_size = VAR_15->wMaxPacketSize;
                  }
               }
            }
         }

         goto ret;
      }
   }

ret:
   FUNC_1(VAR_11);
}
