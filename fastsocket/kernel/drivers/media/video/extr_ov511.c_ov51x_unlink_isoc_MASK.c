
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {TYPE_1__* sbuf; } ;
struct TYPE_2__ {int * urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct usb_ov511 *VAR_1)
{
 int VAR_2;


 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_1->sbuf[VAR_2].urb) {
   FUNC_1(VAR_1->sbuf[VAR_2].urb);
   FUNC_0(VAR_1->sbuf[VAR_2].urb);
   VAR_1->sbuf[VAR_2].urb = ((void*)0);
  }
 }
}
