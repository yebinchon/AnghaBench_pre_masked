
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct m66592 {int dummy; } ;


 int VAR_0 ;
 struct m66592* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct m66592*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_1)
{
 struct m66592 *VAR_2 = FUNC_0(VAR_1);
 return FUNC_1(VAR_2, VAR_0) & 0x03FF;
}
