
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct get_conf {scalar_t__ FORCADR; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long* VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,struct get_conf*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int ,struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 unsigned long FUNC_7 (struct pci_dev*,int ) ;
 unsigned long FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (unsigned long,struct get_conf*,struct pci_dev*) ;
 int FUNC_12 (unsigned long,int) ;

__attribute__((used)) static void FUNC_13(struct get_conf *VAR_8)
{

 FUNC_10("eata_dma: kernel PCI support not enabled. Skipping scan for PCI HBAs.\n");
}
