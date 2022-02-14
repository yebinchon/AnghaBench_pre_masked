
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {size_t scratch_headermarker_write_ptr; int scratch_write_ptr; int * scratch_headermarker; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct usb_usbvision *VAR_2)
{
 FUNC_0(VAR_0, "header at write_ptr=%d\n", VAR_2->scratch_headermarker_write_ptr);

 VAR_2->scratch_headermarker[VAR_2->scratch_headermarker_write_ptr] =
    VAR_2->scratch_write_ptr;
 VAR_2->scratch_headermarker_write_ptr += 1;
 VAR_2->scratch_headermarker_write_ptr %= VAR_1;
}
