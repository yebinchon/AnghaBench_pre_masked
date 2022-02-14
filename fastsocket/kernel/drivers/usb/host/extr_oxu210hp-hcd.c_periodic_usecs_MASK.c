
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ehci_shadow {TYPE_1__* qh; scalar_t__ ptr; } ;
struct oxu_hcd {union ehci_shadow* pshadow; int * periodic; } ;
typedef int __le32 ;
struct TYPE_2__ {int hw_info2; unsigned int usecs; unsigned int c_usecs; union ehci_shadow qh_next; int hw_next; } ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct oxu_hcd*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned short FUNC_3(struct oxu_hcd *VAR_0,
     unsigned VAR_1, unsigned VAR_2)
{
 __le32 *VAR_3 = &VAR_0->periodic[VAR_1];
 union ehci_shadow *VAR_4 = &VAR_0->pshadow[VAR_1];
 unsigned VAR_5 = 0;

 while (VAR_4->ptr) {
  switch (FUNC_0(*VAR_3)) {
  case 128:
  default:

   if (VAR_4->qh->hw_info2 & FUNC_1(1 << VAR_2))
    VAR_5 += VAR_4->qh->usecs;

   if (VAR_4->qh->hw_info2 & FUNC_1(1 << (8 + VAR_2)))
    VAR_5 += VAR_4->qh->c_usecs;
   VAR_3 = &VAR_4->qh->hw_next;
   VAR_4 = &VAR_4->qh->qh_next;
   break;
  }
 }





 return VAR_5;
}
