
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int number; } ;
struct bridge_controller {TYPE_4__* base; } ;
struct TYPE_5__ {void* c; } ;
struct TYPE_8__ {int b_pci_cfg; TYPE_3__* b_type0_cfg_dev; TYPE_1__ b_type1_cfg; } ;
typedef TYPE_4__ bridge_t ;
struct TYPE_7__ {TYPE_2__* f; } ;
struct TYPE_6__ {void* l; } ;


 struct bridge_controller* FUNC_0 (struct pci_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int*) ;
 int FUNC_4 (int,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_5, unsigned int VAR_6,
      int VAR_7, int VAR_8, u32 VAR_9)
{
 struct bridge_controller *VAR_10 = FUNC_0(VAR_5);
 bridge_t *VAR_11 = VAR_10->base;
 int VAR_12 = FUNC_2(VAR_6);
 int VAR_13 = FUNC_1(VAR_6);
 int VAR_14 = VAR_5->number;
 volatile void *VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_11->b_pci_cfg = (VAR_14 << 16) | (VAR_12 << 11);
 VAR_15 = &VAR_11->b_type1_cfg.c[(VAR_13 << 8) | VAR_3];
 if (FUNC_3(VAR_16, (u32 *) VAR_15))
  return VAR_0;





 if (VAR_16 == (VAR_4 | (VAR_2 << 16)))
  goto oh_my_gawd;

 VAR_15 = &VAR_11->b_type1_cfg.c[(VAR_13 << 8) | (VAR_7 ^ (4 - VAR_8))];

 if (VAR_8 == 1) {
  VAR_20 = FUNC_4(VAR_9, (u8 *) VAR_15);
 } else if (VAR_8 == 2) {
  VAR_20 = FUNC_4(VAR_9, (u16 *) VAR_15);
 } else {
  VAR_20 = FUNC_4(VAR_9, (u32 *) VAR_15);
 }

 if (VAR_20)
  return VAR_0;

 return VAR_1;

oh_my_gawd:





 if ((VAR_7 >= 0x14 && VAR_7 < 0x40) || (VAR_7 >= 0x48))
  return VAR_1;





 VAR_15 = &VAR_11->b_type0_cfg_dev[VAR_12].f[VAR_13].l[VAR_7 >> 2];

 if (FUNC_3(VAR_16, (u32 *) VAR_15))
  return VAR_0;

 VAR_17 = ((VAR_7 & 3) << 3);
 VAR_18 = (0xffffffffU >> ((4 - VAR_8) << 3));
 VAR_19 = VAR_18 << VAR_17;

 VAR_16 = (VAR_16 & ~VAR_19) | ((VAR_9 & VAR_18) << VAR_17);
 if (FUNC_4(VAR_16, (u32 *) VAR_15))
  return VAR_0;

 return VAR_1;
}
