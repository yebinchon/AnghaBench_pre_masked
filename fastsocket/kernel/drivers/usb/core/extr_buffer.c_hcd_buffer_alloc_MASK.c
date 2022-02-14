
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; int * pool; TYPE_3__* driver; } ;
struct usb_bus {TYPE_2__* controller; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_0 (struct usb_bus*) ;
 void* FUNC_1 (int ,size_t,int *,int ) ;
 void* FUNC_2 (int ,int ,int *) ;
 void* FUNC_3 (size_t,int ) ;
 size_t* VAR_2 ;

void *FUNC_4(
 struct usb_bus *VAR_3,
 size_t VAR_4,
 gfp_t VAR_5,
 dma_addr_t *VAR_6
)
{
 struct usb_hcd *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;


 if (!VAR_3->controller->dma_mask &&
     !(VAR_7->driver->flags & VAR_1)) {
  *VAR_6 = ~(dma_addr_t) 0;
  return FUNC_3(VAR_4, VAR_5);
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_4 <= VAR_2 [VAR_8])
   return FUNC_2(VAR_7->pool [VAR_8], VAR_5, VAR_6);
 }
 return FUNC_1(VAR_7->self.controller, VAR_4, VAR_6, VAR_5);
}
