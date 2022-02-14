
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {struct u132_endp* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct u132_endp {int dummy; } ;
struct u132 {int going; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct u132*,struct usb_hcd*,struct usb_host_endpoint*,int) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct u132*,struct u132_endp*) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_0,
 struct usb_host_endpoint *VAR_1)
{
 struct u132 *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2->going > 2) {
  FUNC_0(&VAR_2->platform_dev->dev, "u132 device %p(hcd=%p hep=%p"
   ") has been removed %d\n", VAR_2, VAR_0, VAR_1,
   VAR_2->going);
 } else {
  struct u132_endp *VAR_3 = VAR_1->hcpriv;
  if (VAR_3)
   FUNC_2(VAR_2, VAR_3);
 }
}
