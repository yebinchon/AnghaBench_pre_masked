
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
typedef int PRTMP_ADAPTER ;


 int FUNC_0 (struct usb_device*,int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_1(VAR_0);
 PRTMP_ADAPTER VAR_2;


 VAR_2 = FUNC_2(VAR_0);
 FUNC_3(VAR_0, ((void*)0));

 FUNC_0(VAR_1, VAR_2);
}
