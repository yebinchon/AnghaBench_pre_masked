
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xhci_hcd {int* port_array; int hcs_params1; } ;
struct usb_device {unsigned int portnum; scalar_t__ speed; struct usb_device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct xhci_hcd *VAR_2,
  struct usb_device *VAR_3)
{
 struct usb_device *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_4 = VAR_3; VAR_4->parent && VAR_4->parent->parent;
   VAR_4 = VAR_4->parent)
                                   ;
 VAR_6 = VAR_4->portnum;
 for (VAR_7 = 0, VAR_5 = 0;
   VAR_7 < FUNC_0(VAR_2->hcs_params1); VAR_7++) {
  u8 VAR_8 = VAR_2->port_array[VAR_7];





  if (VAR_8 == 0 || VAR_8 == VAR_0)
   continue;






  if ((VAR_8 == 0x03) == (VAR_3->speed == VAR_1))
   VAR_5++;
  if (VAR_5 == VAR_6)

   return VAR_7+1;
 }
 return 0;
}
