
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int * ops; int len; } ;
struct pci_vpd_pci22 {int busy; TYPE_1__ base; scalar_t__ cap; int lock; } ;
struct pci_dev {TYPE_1__* vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pci_vpd_pci22* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int VAR_5 ;

int FUNC_3(struct pci_dev *VAR_6)
{
 struct pci_vpd_pci22 *VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_3);
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->base.len = VAR_4;
 VAR_7->base.ops = &VAR_5;
 FUNC_1(&VAR_7->lock);
 VAR_7->cap = VAR_8;
 VAR_7->busy = 0;
 VAR_6->vpd = &VAR_7->base;
 return 0;
}
