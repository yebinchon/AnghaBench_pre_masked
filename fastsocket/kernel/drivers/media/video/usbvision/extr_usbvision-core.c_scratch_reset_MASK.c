
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int isocstate; scalar_t__ scratch_headermarker_write_ptr; scalar_t__ scratch_headermarker_read_ptr; scalar_t__ scratch_write_ptr; scalar_t__ scratch_read_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct usb_usbvision *VAR_2)
{
 FUNC_0(VAR_0, "\n");

 VAR_2->scratch_read_ptr = 0;
 VAR_2->scratch_write_ptr = 0;
 VAR_2->scratch_headermarker_read_ptr = 0;
 VAR_2->scratch_headermarker_write_ptr = 0;
 VAR_2->isocstate = VAR_1;
}
