
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_resource {int base; int length; struct pci_resource* next; } ;
struct controller {struct pci_resource* bus_head; struct pci_resource* io_head; struct pci_resource* p_mem_head; struct pci_resource* mem_head; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1 (struct controller *VAR_0, char *VAR_1)
{
 char *VAR_2 = VAR_1;
 int VAR_3;
 struct pci_resource *VAR_4;

 VAR_2 += FUNC_0(VAR_1, "Free resources: memory\n");
 VAR_3 = 11;
 VAR_4 = VAR_0->mem_head;
 while (VAR_4 && VAR_3--) {
  VAR_2 += FUNC_0(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
  VAR_4 = VAR_4->next;
 }
 VAR_2 += FUNC_0(VAR_2, "Free resources: prefetchable memory\n");
 VAR_3 = 11;
 VAR_4 = VAR_0->p_mem_head;
 while (VAR_4 && VAR_3--) {
  VAR_2 += FUNC_0(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
  VAR_4 = VAR_4->next;
 }
 VAR_2 += FUNC_0(VAR_2, "Free resources: IO\n");
 VAR_3 = 11;
 VAR_4 = VAR_0->io_head;
 while (VAR_4 && VAR_3--) {
  VAR_2 += FUNC_0(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
  VAR_4 = VAR_4->next;
 }
 VAR_2 += FUNC_0(VAR_2, "Free resources: bus numbers\n");
 VAR_3 = 11;
 VAR_4 = VAR_0->bus_head;
 while (VAR_4 && VAR_3--) {
  VAR_2 += FUNC_0(VAR_2, "start = %8.8x, length = %8.8x\n", VAR_4->base, VAR_4->length);
  VAR_4 = VAR_4->next;
 }

 return VAR_2 - VAR_1;
}
