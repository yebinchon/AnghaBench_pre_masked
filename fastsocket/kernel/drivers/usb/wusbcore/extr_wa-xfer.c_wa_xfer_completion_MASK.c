
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wa_xfer {TYPE_1__* ep; scalar_t__ wusb_dev; } ;
struct TYPE_2__ {int hcpriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wa_xfer*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct wa_xfer *VAR_0)
{
 if (VAR_0->wusb_dev)
  FUNC_2(VAR_0->wusb_dev);
 FUNC_0(VAR_0->ep->hcpriv);
 FUNC_1(VAR_0);
}
