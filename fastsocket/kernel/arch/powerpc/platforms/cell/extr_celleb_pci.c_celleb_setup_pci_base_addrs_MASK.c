
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_controller {int dummy; } ;
struct celleb_pci_resource {TYPE_1__* r; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned char*,int ,int,int) ;
 unsigned char* FUNC_1 (struct pci_controller*,unsigned int,unsigned int) ;
 struct celleb_pci_resource* FUNC_2 (struct pci_controller*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct pci_controller *VAR_11,
     unsigned int VAR_12, unsigned int VAR_13,
     unsigned int VAR_14)
{
 u32 VAR_15;
 unsigned char *VAR_16;
 struct celleb_pci_resource *VAR_17;

 VAR_16 = FUNC_1(VAR_11, VAR_12, VAR_13);
 VAR_17 = FUNC_2(VAR_11, VAR_12, VAR_13);

 if (!VAR_16 || !VAR_17)
  return;

 switch (VAR_14) {
 case 3:
  VAR_15 = (VAR_17->r[2].start & 0xfffffff0)
      | VAR_6;
  FUNC_0(VAR_16, VAR_4, 4, VAR_15);
  VAR_15 = VAR_17->r[2].start >> 32;
  FUNC_0(VAR_16, VAR_5, 4, VAR_15);

 case 2:
  VAR_15 = (VAR_17->r[1].start & 0xfffffff0)
      | VAR_6;
  FUNC_0(VAR_16, VAR_2, 4, VAR_15);
  VAR_15 = VAR_17->r[1].start >> 32;
  FUNC_0(VAR_16, VAR_3, 4, VAR_15);

 case 1:
  VAR_15 = (VAR_17->r[0].start & 0xfffffff0)
      | VAR_6;
  FUNC_0(VAR_16, VAR_0, 4, VAR_15);
  VAR_15 = VAR_17->r[0].start >> 32;
  FUNC_0(VAR_16, VAR_1, 4, VAR_15);
  break;
 }

 VAR_15 = VAR_8 | VAR_10 | VAR_9;
 FUNC_0(VAR_16, VAR_7, 2, VAR_15);
}
