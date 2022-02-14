
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {char* name; int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct pci_pbm_info {TYPE_2__ mem_space; TYPE_1__* op; } ;
struct TYPE_3__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int,int ) ;
 scalar_t__* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_pbm_info *VAR_2)
{
 const u32 *VAR_3 = FUNC_1(VAR_2->op->node, "virtual-dma", ((void*)0));

 if (VAR_3) {
  struct resource *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);

  if (!VAR_4) {
   FUNC_3("Cannot allocate IOMMU resource.\n");
   FUNC_2();
  }
  VAR_4->name = "IOMMU";
  VAR_4->start = VAR_2->mem_space.start + (unsigned long) VAR_3[0];
  VAR_4->end = VAR_4->start + (unsigned long) VAR_3[1] - 1UL;
  VAR_4->flags = VAR_1;
  FUNC_4(&VAR_2->mem_space, VAR_4);
 }
}
