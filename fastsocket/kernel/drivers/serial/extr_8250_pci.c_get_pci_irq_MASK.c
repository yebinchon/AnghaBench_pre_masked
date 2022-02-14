
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciserial_board {int flags; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_1,
    const struct pciserial_board *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return 0;
 else
  return VAR_1->irq;
}
