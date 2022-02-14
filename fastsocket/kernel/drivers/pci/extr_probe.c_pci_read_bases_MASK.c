
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ,struct resource*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_9, unsigned int VAR_10, int VAR_11)
{
 unsigned int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct resource *VAR_14 = &VAR_9->resource[VAR_12];
  VAR_13 = VAR_5 + (VAR_12 << 2);
  VAR_12 += FUNC_0(VAR_9, VAR_8, VAR_14, VAR_13);
 }

 if (VAR_11) {
  struct resource *VAR_15 = &VAR_9->resource[VAR_6];
  VAR_9->rom_base_reg = VAR_11;
  VAR_15->flags = VAR_1 | VAR_2 |
    VAR_3 | VAR_0 |
    VAR_4;
  FUNC_0(VAR_9, VAR_7, VAR_15, VAR_11);
 }
}
