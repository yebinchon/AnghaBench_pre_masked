
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * usbfs_dentry; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct usb_bus *VAR_1)
{
 if (VAR_1->usbfs_dentry) {
  FUNC_0 (VAR_1->usbfs_dentry);
  VAR_1->usbfs_dentry = ((void*)0);
 }

 --VAR_0;
 if (VAR_0 <= 0) {
  FUNC_1();
  VAR_0 = 0;
 }
}
