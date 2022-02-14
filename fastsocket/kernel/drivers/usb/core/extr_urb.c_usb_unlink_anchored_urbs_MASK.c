
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int dummy; } ;
struct urb {int dummy; } ;


 struct urb* FUNC_0 (struct usb_anchor*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;

void FUNC_3(struct usb_anchor *VAR_0)
{
 struct urb *VAR_1;

 while ((VAR_1 = FUNC_0(VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 }
}
