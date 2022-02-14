
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_6__ {struct ehci_qh* qh; } ;
struct ehci_qh {struct ehci_qh* reclaim; TYPE_3__ qh_next; } ;
struct ehci_hcd {int lock; struct ehci_qh* reclaim; TYPE_2__* async; } ;
struct debug_buffer {char* output_buf; unsigned int alloc_size; int bus; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct ehci_qh* qh; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 struct usb_hcd* FUNC_0 (int ) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,struct ehci_qh*,char**,unsigned int*) ;
 unsigned int FUNC_3 (char*,unsigned int,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct debug_buffer *VAR_0)
{
 struct usb_hcd *VAR_1;
 struct ehci_hcd *VAR_2;
 unsigned long VAR_3;
 unsigned VAR_4, VAR_5;
 char *VAR_6;
 struct ehci_qh *VAR_7;

 VAR_1 = FUNC_0(VAR_0->bus);
 VAR_2 = FUNC_1 (VAR_1);
 VAR_6 = VAR_0->output_buf;
 VAR_5 = VAR_0->alloc_size;

 *VAR_6 = 0;





 FUNC_4 (&VAR_2->lock, VAR_3);
 for (VAR_7 = VAR_2->async->qh_next.qh; VAR_5 > 0 && VAR_7; VAR_7 = VAR_7->qh_next.qh)
  FUNC_2 (VAR_2, VAR_7, &VAR_6, &VAR_5);
 if (VAR_2->reclaim && VAR_5 > 0) {
  VAR_4 = FUNC_3 (VAR_6, VAR_5, "\nreclaim =\n");
  VAR_5 -= VAR_4;
  VAR_6 += VAR_4;

  for (VAR_7 = VAR_2->reclaim; VAR_5 > 0 && VAR_7; VAR_7 = VAR_7->reclaim)
   FUNC_2 (VAR_2, VAR_7, &VAR_6, &VAR_5);
 }
 FUNC_5 (&VAR_2->lock, VAR_3);

 return FUNC_6(VAR_0->output_buf);
}
