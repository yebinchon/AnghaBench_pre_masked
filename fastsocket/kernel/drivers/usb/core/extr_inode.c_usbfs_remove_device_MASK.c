
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int * usbfs_dentry; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usb_device *VAR_0)
{
 if (VAR_0->usbfs_dentry) {
  FUNC_0 (VAR_0->usbfs_dentry);
  VAR_0->usbfs_dentry = ((void*)0);
 }
}
