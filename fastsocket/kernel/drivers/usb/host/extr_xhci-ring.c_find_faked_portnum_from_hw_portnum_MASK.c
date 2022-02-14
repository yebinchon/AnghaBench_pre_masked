
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xhci_hcd {int* port_array; } ;
struct usb_hcd {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct usb_hcd *VAR_2,
  struct xhci_hcd *VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;





 for (VAR_5 = 0; VAR_5 < (VAR_4 - 1); VAR_5++) {
  u8 VAR_7 = VAR_3->port_array[VAR_5];





  if (VAR_7 == 0 || VAR_7 == VAR_0)
   continue;






  if ((VAR_7 == 0x03) == (VAR_2->speed == VAR_1))
   VAR_6++;
 }
 return VAR_6;
}
