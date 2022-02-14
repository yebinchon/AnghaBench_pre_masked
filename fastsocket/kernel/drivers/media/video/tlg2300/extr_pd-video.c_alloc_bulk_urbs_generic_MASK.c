
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; int transfer_dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct urb* FUNC_0 (int ,int ) ;
 void* FUNC_1 (struct usb_device*,int,int ,int *) ;
 int FUNC_2 (struct urb*,struct usb_device*,int ,void*,int,int ,void*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct urb **VAR_1, int VAR_2,
   struct usb_device *VAR_3, u8 VAR_4,
   int VAR_5, gfp_t VAR_6,
   usb_complete_t VAR_7, void *VAR_8)
{
 int VAR_9 = 0;

 for (; VAR_9 < VAR_2; VAR_9++) {
  void *VAR_10;
  struct urb *VAR_11 = FUNC_0(0, VAR_6);
  if (VAR_11 == ((void*)0))
   return VAR_9;

  VAR_10 = FUNC_1(VAR_3, VAR_5, VAR_6,
      &VAR_11->transfer_dma);
  if (VAR_10 == ((void*)0)) {
   FUNC_3(VAR_11);
   return VAR_9;
  }

  FUNC_2(VAR_11, VAR_3, FUNC_4(VAR_3, VAR_4),
    VAR_10, VAR_5, VAR_7, VAR_8);
  VAR_11->transfer_flags |= VAR_0;
  VAR_1[VAR_9] = VAR_11;
 }
 return VAR_9;
}
