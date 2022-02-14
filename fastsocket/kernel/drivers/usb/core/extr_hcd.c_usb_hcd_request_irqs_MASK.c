
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busnum; int controller; } ;
struct usb_hcd {unsigned int irq; scalar_t__ rsrc_start; TYPE_2__* driver; TYPE_1__ self; int irq_descr; } ;
struct TYPE_4__ {char* description; int flags; scalar_t__ irq; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned int,int *,unsigned long,int ,struct usb_hcd*) ;
 int FUNC_3 (int ,int,char*,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_4,
  unsigned int VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 if (VAR_4->driver->irq) {





  if (VAR_6 & VAR_2)
   VAR_6 &= ~VAR_1;

  FUNC_3(VAR_4->irq_descr, sizeof(VAR_4->irq_descr), "%s:usb%d",
    VAR_4->driver->description, VAR_4->self.busnum);
  VAR_7 = FUNC_2(VAR_5, &VAR_3, VAR_6,
    VAR_4->irq_descr, VAR_4);
  if (VAR_7 != 0) {
   FUNC_0(VAR_4->self.controller,
     "request interrupt %d failed\n",
     VAR_5);
   return VAR_7;
  }
  VAR_4->irq = VAR_5;
  FUNC_1(VAR_4->self.controller, "irq %d, %s 0x%08llx\n", VAR_5,
    (VAR_4->driver->flags & VAR_0) ?
     "io mem" : "io base",
     (unsigned long long)VAR_4->rsrc_start);
 } else {
  VAR_4->irq = -1;
  if (VAR_4->rsrc_start)
   FUNC_1(VAR_4->self.controller, "%s 0x%08llx\n",
     (VAR_4->driver->flags & VAR_0) ?
     "io mem" : "io base",
     (unsigned long long)VAR_4->rsrc_start);
 }
 return 0;
}
