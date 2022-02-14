
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ num_frames; int * fbuf; int fbuf_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct usb_usbvision *VAR_1)
{

 FUNC_0(VAR_0, "free %d frames", VAR_1->num_frames);

 if (VAR_1->fbuf != ((void*)0)) {
  FUNC_1(VAR_1->fbuf, VAR_1->fbuf_size);
  VAR_1->fbuf = ((void*)0);

  VAR_1->num_frames = 0;
 }
}
