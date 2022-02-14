
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int number; } ;
struct bridge_controller {TYPE_2__* base; } ;
struct TYPE_3__ {void* c; } ;
struct TYPE_4__ {int b_pci_cfg; TYPE_1__ b_type1_cfg; } ;
typedef TYPE_2__ bridge_t ;


 struct bridge_controller* FUNC_0 (struct pci_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_5, unsigned int VAR_6,
     int VAR_7, int VAR_8, u32 * VAR_9)
{
 struct bridge_controller *VAR_10 = FUNC_0(VAR_5);
 bridge_t *VAR_11 = VAR_10->base;
 int VAR_12 = VAR_5->number;
 int VAR_13 = FUNC_2(VAR_6);
 int VAR_14 = FUNC_1(VAR_6);
 volatile void *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_11->b_pci_cfg = (VAR_12 << 16) | (VAR_13 << 11);
 VAR_15 = &VAR_11->b_type1_cfg.c[(VAR_14 << 8) | VAR_3];
 if (FUNC_4(VAR_16, (u32 *) VAR_15))
  return VAR_0;





 if (VAR_16 == (VAR_4 | (VAR_2 << 16)))
  goto oh_my_gawd;

 VAR_11->b_pci_cfg = (VAR_12 << 16) | (VAR_13 << 11);
 VAR_15 = &VAR_11->b_type1_cfg.c[(VAR_14 << 8) | (VAR_7 ^ (4 - VAR_8))];

 if (VAR_8 == 1)
  VAR_19 = FUNC_4(*VAR_9, (u8 *) VAR_15);
 else if (VAR_8 == 2)
  VAR_19 = FUNC_4(*VAR_9, (u16 *) VAR_15);
 else
  VAR_19 = FUNC_4(*VAR_9, (u32 *) VAR_15);

 return VAR_19 ? VAR_0 : VAR_1;

oh_my_gawd:





 if ((VAR_7 >= 0x14 && VAR_7 < 0x40) || (VAR_7 >= 0x48)) {
  *VAR_9 = FUNC_3(VAR_7, VAR_8);
  return VAR_1;
 }





 VAR_11->b_pci_cfg = (VAR_12 << 16) | (VAR_13 << 11);
 VAR_15 = &VAR_11->b_type1_cfg.c[(VAR_14 << 8) | VAR_7];

 if (FUNC_4(VAR_16, (u32 *) VAR_15))
  return VAR_0;

 VAR_17 = ((VAR_7 & 3) << 3);
 VAR_18 = (0xffffffffU >> ((4 - VAR_8) << 3));
 *VAR_9 = (VAR_16 >> VAR_17) & VAR_18;

 return VAR_1;
}
