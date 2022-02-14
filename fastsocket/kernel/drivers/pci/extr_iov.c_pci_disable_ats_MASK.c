
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {scalar_t__ is_physfn; TYPE_2__* sriov; TYPE_1__* ats; struct pci_dev* physfn; scalar_t__ is_virtfn; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int ref_cnt; scalar_t__ is_enabled; scalar_t__ pos; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_6(struct pci_dev *VAR_2)
{
 u16 VAR_3;

 FUNC_0(!VAR_2->ats || !VAR_2->ats->is_enabled);

 FUNC_4(VAR_2, VAR_2->ats->pos + VAR_0, &VAR_3);
 VAR_3 &= ~VAR_1;
 FUNC_5(VAR_2, VAR_2->ats->pos + VAR_0, VAR_3);

 VAR_2->ats->is_enabled = 0;

 if (VAR_2->is_physfn || VAR_2->is_virtfn) {
  struct pci_dev *VAR_4 = VAR_2->is_physfn ? VAR_2 : VAR_2->physfn;

  FUNC_2(&VAR_4->sriov->lock);
  VAR_4->ats->ref_cnt--;
  if (!VAR_4->ats->ref_cnt)
   FUNC_1(VAR_4);
  FUNC_3(&VAR_4->sriov->lock);
 }

 if (!VAR_2->is_physfn)
  FUNC_1(VAR_2);
}
