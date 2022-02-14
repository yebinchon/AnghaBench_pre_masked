
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_2__* ats; scalar_t__ is_virtfn; scalar_t__ is_physfn; TYPE_1__* sriov; struct pci_dev* physfn; } ;
struct TYPE_4__ {int is_enabled; int stu; scalar_t__ pos; int ref_cnt; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int ) ;

int FUNC_6(struct pci_dev *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7;

 FUNC_0(VAR_4->ats && VAR_4->ats->is_enabled);

 if (VAR_5 < VAR_3)
  return -VAR_0;

 if (VAR_4->is_physfn || VAR_4->is_virtfn) {
  struct pci_dev *VAR_8 = VAR_4->is_physfn ? VAR_4 : VAR_4->physfn;

  FUNC_3(&VAR_8->sriov->lock);
  if (VAR_8->ats)
   VAR_6 = VAR_8->ats->stu == VAR_5 ? 0 : -VAR_0;
  else
   VAR_6 = FUNC_2(VAR_8, VAR_5);

  if (!VAR_6)
   VAR_8->ats->ref_cnt++;
  FUNC_4(&VAR_8->sriov->lock);
  if (VAR_6)
   return VAR_6;
 }

 if (!VAR_4->is_physfn) {
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_7 = VAR_2;
 if (!VAR_4->is_virtfn)
  VAR_7 |= FUNC_1(VAR_5 - VAR_3);
 FUNC_5(VAR_4, VAR_4->ats->pos + VAR_1, VAR_7);

 VAR_4->ats->is_enabled = 1;

 return 0;
}
