
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* controller; } ;
struct usb_hcd {int * pool; TYPE_2__ self; TYPE_1__* driver; } ;
struct TYPE_6__ {int dma_mask; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__*,int,int,int ) ;
 int FUNC_1 (struct usb_hcd*) ;
 int* VAR_3 ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct usb_hcd *VAR_4)
{
 char VAR_5[16];
 int VAR_6, VAR_7;

 if (!VAR_4->self.controller->dma_mask &&
     !(VAR_4->driver->flags & VAR_2))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = VAR_3[VAR_6];
  if (!VAR_7)
   continue;
  FUNC_2(VAR_5, sizeof VAR_5, "buffer-%d", VAR_7);
  VAR_4->pool[VAR_6] = FUNC_0(VAR_5, VAR_4->self.controller,
    VAR_7, VAR_7, 0);
  if (!VAR_4->pool [VAR_6]) {
   FUNC_1(VAR_4);
   return -VAR_0;
  }
 }
 return 0;
}
