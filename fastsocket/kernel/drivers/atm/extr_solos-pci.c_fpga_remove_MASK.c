
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solos_card {scalar_t__ config_regs; scalar_t__ buffers; int tlet; } ;
struct pci_dev {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct solos_card*) ;
 int FUNC_1 (int ,struct solos_card*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct solos_card*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct solos_card* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_2)
{
 struct solos_card *VAR_3 = FUNC_6(VAR_2);


 FUNC_3(0, VAR_3->config_regs + VAR_1);


 FUNC_3(1, VAR_3->config_regs + VAR_0);
 (void)FUNC_2(VAR_3->config_regs + VAR_0);

 FUNC_0(VAR_3);

 FUNC_1(VAR_2->irq, VAR_3);
 FUNC_10(&VAR_3->tlet);


 FUNC_3(0, VAR_3->config_regs + VAR_0);
 (void)FUNC_2(VAR_3->config_regs + VAR_0);

 FUNC_7(VAR_2, VAR_3->buffers);
 FUNC_7(VAR_2, VAR_3->config_regs);

 FUNC_8(VAR_2);
 FUNC_5(VAR_2);

 FUNC_9(VAR_2, ((void*)0));
 FUNC_4(VAR_3);
}
