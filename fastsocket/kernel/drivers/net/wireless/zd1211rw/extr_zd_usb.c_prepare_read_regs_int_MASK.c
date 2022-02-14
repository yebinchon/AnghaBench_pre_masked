
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int req_count; int completion; struct usb_req_read_regs* req; } ;
struct zd_usb_interrupt {int lock; TYPE_1__ read_regs; int read_regs_enabled; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct usb_req_read_regs {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct zd_usb *VAR_0,
      struct usb_req_read_regs *VAR_1,
      unsigned int VAR_2)
{
 struct zd_usb_interrupt *VAR_3 = &VAR_0->intr;

 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_3->read_regs_enabled, 1);
 VAR_3->read_regs.req = VAR_1;
 VAR_3->read_regs.req_count = VAR_2;
 FUNC_0(VAR_3->read_regs.completion);
 FUNC_3(&VAR_3->lock);
}
