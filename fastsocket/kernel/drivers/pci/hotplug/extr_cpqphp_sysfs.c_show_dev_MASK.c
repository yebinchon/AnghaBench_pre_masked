
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {struct slot* next; int device; int bus; } ;
struct pci_resource {int base; int length; struct pci_resource* next; } ;
struct pci_func {struct pci_resource* bus_head; struct pci_resource* io_head; struct pci_resource* p_mem_head; struct pci_resource* mem_head; } ;
struct controller {struct slot* slot; } ;


 struct pci_func* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2 (struct controller *VAR_0, char *VAR_1)
{
 char * VAR_2 = VAR_1;
 int VAR_3;
 struct pci_resource *VAR_4;
 struct pci_func *VAR_5;
 struct slot *VAR_6;

 VAR_6 = VAR_0->slot;

 while (VAR_6) {
  VAR_5 = FUNC_0(VAR_6->bus, VAR_6->device, 0);
  if (!VAR_5)
   break;
  VAR_2 += FUNC_1(VAR_2, "assigned resources: memory\n");
  VAR_3 = 11;
  VAR_4 = VAR_5->mem_head;
  while (VAR_4 && VAR_3--) {
   VAR_2 += FUNC_1(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
   VAR_4 = VAR_4->next;
  }
  VAR_2 += FUNC_1(VAR_2, "assigned resources: prefetchable memory\n");
  VAR_3 = 11;
  VAR_4 = VAR_5->p_mem_head;
  while (VAR_4 && VAR_3--) {
   VAR_2 += FUNC_1(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
   VAR_4 = VAR_4->next;
  }
  VAR_2 += FUNC_1(VAR_2, "assigned resources: IO\n");
  VAR_3 = 11;
  VAR_4 = VAR_5->io_head;
  while (VAR_4 && VAR_3--) {
   VAR_2 += FUNC_1(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
   VAR_4 = VAR_4->next;
  }
  VAR_2 += FUNC_1(VAR_2, "assigned resources: bus numbers\n");
  VAR_3 = 11;
  VAR_4 = VAR_5->bus_head;
  while (VAR_4 && VAR_3--) {
   VAR_2 += FUNC_1(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
   VAR_4 = VAR_4->next;
  }
  VAR_6=VAR_6->next;
 }

 return VAR_2 - VAR_1;
}
