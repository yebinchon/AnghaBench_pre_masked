
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_x {struct resource_list_x* next; int add_size; int flags; int end; int start; struct pci_dev* dev; struct resource* res; } ;
struct resource {int flags; int end; int start; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 struct resource_list_x* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct resource_list_x *VAR_1,
   struct pci_dev *VAR_2, struct resource *VAR_3,
   resource_size_t VAR_4)
{
 struct resource_list_x *VAR_5 = VAR_1;
 struct resource_list_x *VAR_6 = VAR_5->next;
 struct resource_list_x *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_1("add_to_list: kmalloc() failed!\n");
  return;
 }

 VAR_7->next = VAR_6;
 VAR_7->res = VAR_3;
 VAR_7->dev = VAR_2;
 VAR_7->start = VAR_3->start;
 VAR_7->end = VAR_3->end;
 VAR_7->flags = VAR_3->flags;
 VAR_7->add_size = VAR_4;
 VAR_5->next = VAR_7;
}
