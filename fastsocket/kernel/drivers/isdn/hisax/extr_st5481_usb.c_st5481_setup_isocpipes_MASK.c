
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct urb {int * transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urb*,struct usb_device*,unsigned int,unsigned char*,int,int,int ,void*) ;
 int FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int,int ) ;
 struct urb* FUNC_3 (int,int ) ;
 int FUNC_4 (struct urb*) ;

int
FUNC_5(struct urb* VAR_2[2], struct usb_device *VAR_3,
      unsigned int VAR_4, int VAR_5,
      int VAR_6, int VAR_7,
      usb_complete_t VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11;
 unsigned char *VAR_12;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_11 = -VAR_0;
  VAR_2[VAR_10] = FUNC_3(VAR_5, VAR_1);
  if (!VAR_2[VAR_10])
   goto err;


  VAR_12 = FUNC_2(VAR_7, VAR_1);
  if (!VAR_12)
   goto err;


  FUNC_0(VAR_2[VAR_10], VAR_3, VAR_4, VAR_12,
         VAR_5, VAR_6, VAR_8,
         VAR_9);
 }
 return 0;

 err:
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if (VAR_2[VAR_10]) {
   FUNC_1(VAR_2[VAR_10]->transfer_buffer);
   VAR_2[VAR_10]->transfer_buffer = ((void*)0);
   FUNC_4(VAR_2[VAR_10]);
   VAR_2[VAR_10] = ((void*)0);
  }
 }
 return VAR_11;
}
