
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* bw_table; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {unsigned int ss_bw_in; unsigned int ss_bw_out; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_4,
  struct xhci_virt_device *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_3*VAR_1, 100);
 if (VAR_5->bw_table->ss_bw_in > (VAR_1 - VAR_6))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3*VAR_2, 100);
 if (VAR_5->bw_table->ss_bw_out > (VAR_2 - VAR_6))
  return -VAR_0;

 return 0;
}
