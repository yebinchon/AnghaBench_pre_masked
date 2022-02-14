
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ehci_shadow {TYPE_1__* qh; } ;
typedef int __le32 ;
struct TYPE_2__ {union ehci_shadow qh_next; } ;




__attribute__((used)) static union ehci_shadow *FUNC_0(union ehci_shadow *VAR_0,
      __le32 VAR_1)
{
 switch (VAR_1) {
 default:
 case 128:
  return &VAR_0->qh->qh_next;
 }
}
