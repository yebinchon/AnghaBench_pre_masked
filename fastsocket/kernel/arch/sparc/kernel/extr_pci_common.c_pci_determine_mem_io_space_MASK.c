
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned long start; unsigned long end; int name; int flags; } ;
struct pci_pbm_info {unsigned long config_space; TYPE_2__ mem_space; TYPE_2__ io_space; int name; TYPE_1__* op; } ;
struct linux_prom_pci_ranges {int parent_phys_hi; int parent_phys_lo; int size_hi; int size_lo; int child_phys_hi; } ;
struct TYPE_5__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct linux_prom_pci_ranges* FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (struct pci_pbm_info*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ VAR_5 ;

void FUNC_7(struct pci_pbm_info *VAR_6)
{
 const struct linux_prom_pci_ranges *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_10 = 0;
 VAR_7 = FUNC_0(VAR_6->op->node, "ranges", &VAR_8);
 if (!VAR_7) {
  FUNC_5("PCI: Fatal error, missing PBM ranges property "
       " for %s\n",
       VAR_6->name);
  FUNC_4();
 }

 VAR_11 = VAR_8 / sizeof(*VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  const struct linux_prom_pci_ranges *VAR_12 = &VAR_7[VAR_8];
  unsigned long VAR_13, VAR_14;
  u32 VAR_15, VAR_16;
  u32 VAR_17, VAR_18;
  int VAR_19;

  VAR_15 = VAR_12->parent_phys_hi;
  VAR_16 = VAR_12->parent_phys_lo;
  if (VAR_5 == VAR_2)
   VAR_15 &= 0x0fffffff;

  VAR_17 = VAR_12->size_hi;
  VAR_18 = VAR_12->size_lo;

  VAR_19 = (VAR_12->child_phys_hi >> 24) & 0x3;
  VAR_13 = (((unsigned long)VAR_15 << 32UL) |
       ((unsigned long)VAR_16 << 0UL));
  VAR_14 = (((unsigned long)VAR_17 << 32UL) |
   ((unsigned long)VAR_18 << 0UL));

  switch (VAR_19) {
  case 0:

   VAR_6->config_space = VAR_13;
   break;

  case 1:

   VAR_6->io_space.start = VAR_13;
   VAR_6->io_space.end = VAR_13 + VAR_14 - 1UL;
   VAR_6->io_space.flags = VAR_0;
   VAR_10 = 1;
   break;

  case 2:

   VAR_6->mem_space.start = VAR_13;
   VAR_6->mem_space.end = VAR_13 + VAR_14 - 1UL;
   VAR_6->mem_space.flags = VAR_1;
   VAR_9 = 1;
   break;

  case 3:


  default:
   break;
  };
 }

 if (!VAR_10 || !VAR_9) {
  FUNC_5("%s: Fatal error, missing %s PBM range.\n",
       VAR_6->name,
       (!VAR_10 ? "IO" : "MEM"));
  FUNC_4();
 }

 FUNC_3("%s: PCI IO[%llx] MEM[%llx]\n",
        VAR_6->name,
        VAR_6->io_space.start,
        VAR_6->mem_space.start);

 VAR_6->io_space.name = VAR_6->mem_space.name = VAR_6->name;

 FUNC_6(&VAR_4, &VAR_6->io_space);
 FUNC_6(&VAR_3, &VAR_6->mem_space);

 FUNC_2(&VAR_6->io_space,
        &VAR_6->mem_space);
 FUNC_1(VAR_6);
}
