
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cas {int * tx_tiny_bufs; int * tx_tiny_dvma; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cas *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->tx_tiny_bufs[VAR_4] =
   FUNC_1(VAR_3, VAR_1,
          &VAR_2->tx_tiny_dvma[VAR_4]);
  if (!VAR_2->tx_tiny_bufs[VAR_4]) {
   FUNC_0(VAR_2);
   return -1;
  }
 }
 return 0;
}
