
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {unsigned char pci_bus; unsigned char pci_slot; unsigned char pci_func; unsigned int irq; int * io_addr; } ;
typedef int resource_size_t ;



__attribute__((used)) static int FUNC_0(struct pcilst_struct *VAR_0,
    unsigned char *VAR_1, unsigned char *VAR_2,
    unsigned char *VAR_3, resource_size_t * VAR_4,
    unsigned int *VAR_5)
{
 int VAR_6;

 if (!VAR_0)
  return -1;
 *VAR_1 = VAR_0->pci_bus;
 *VAR_2 = VAR_0->pci_slot;
 *VAR_3 = VAR_0->pci_func;
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  VAR_4[VAR_6] = VAR_0->io_addr[VAR_6];
 *VAR_5 = VAR_0->irq;
 return 0;
}
