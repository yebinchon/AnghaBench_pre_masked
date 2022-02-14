
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; unsigned long start; unsigned long end; } ;
struct pci_dev {struct resource* resource; int bus; } ;
struct pci_controller {unsigned long io_base_phys; scalar_t__ io_base_virt; scalar_t__ pci_mem_offset; } ;
typedef unsigned long resource_size_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 struct pci_controller* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct resource *FUNC_1(struct pci_dev *VAR_7,
            resource_size_t *VAR_8,
            enum pci_mmap_state VAR_9)
{
 struct pci_controller *VAR_10 = FUNC_0(VAR_7->bus);
 unsigned long VAR_11 = 0;
 int VAR_12, VAR_13;

 if (VAR_10 == 0)
  return ((void*)0);


 if (VAR_9 == VAR_6) {



  VAR_13 = VAR_1;
 } else {
  VAR_11 = (unsigned long)VAR_10->io_base_virt - VAR_4;
  *VAR_8 += VAR_11;
  VAR_13 = VAR_0;
 }





 for (VAR_12 = 0; VAR_12 <= VAR_3; VAR_12++) {
  struct resource *VAR_14 = &VAR_7->resource[VAR_12];
  int VAR_15 = VAR_14->flags;


  if (VAR_12 == VAR_3)
   VAR_15 |= VAR_1;


  if ((VAR_15 & VAR_13) == 0)
   continue;


  if (*VAR_8 < (VAR_14->start & VAR_2) || *VAR_8 > VAR_14->end)
   continue;


  if (VAR_9 == VAR_5)
   *VAR_8 += VAR_10->io_base_phys - VAR_11;
  return VAR_14;
 }

 return ((void*)0);
}
