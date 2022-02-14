
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* ats; int is_virtfn; } ;
struct TYPE_2__ {scalar_t__ pos; scalar_t__ stu; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_5(struct pci_dev *VAR_4)
{
 u16 VAR_5;

 if (!FUNC_2(VAR_4))
  return;
 if (!FUNC_3(VAR_4, VAR_3))
  FUNC_0();

 VAR_5 = VAR_1;
 if (!VAR_4->is_virtfn)
  VAR_5 |= FUNC_1(VAR_4->ats->stu - VAR_2);

 FUNC_4(VAR_4, VAR_4->ats->pos + VAR_0, VAR_5);
}
