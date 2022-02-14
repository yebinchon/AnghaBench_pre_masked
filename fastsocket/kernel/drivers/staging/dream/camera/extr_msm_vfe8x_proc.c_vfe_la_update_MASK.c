
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_la_config {int enable; scalar_t__* table; } ;
typedef scalar_t__ int16_t ;
typedef enum VFE_DMI_RAM_SEL { ____Placeholder_VFE_DMI_RAM_SEL } VFE_DMI_RAM_SEL ;
struct TYPE_3__ {int lumaAdaptationEnable; } ;
struct TYPE_4__ {int vfeLaBankSel; scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct vfe_cmd_la_config *VAR_8)
{
 int16_t *VAR_9;
 enum VFE_DMI_RAM_SEL VAR_10;
 int VAR_11;

 VAR_9 = VAR_8->table;
 VAR_7->vfeModuleEnableLocal.lumaAdaptationEnable = VAR_8->enable;


 VAR_7->vfeLaBankSel ^= 1;

 if (VAR_7->vfeLaBankSel == 0)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;


 FUNC_0(VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_1((uint32_t)(*VAR_9), VAR_7->vfebase + VAR_4);
  VAR_9++;
 }



 FUNC_1(VAR_3, VAR_7->vfebase + VAR_2);
 FUNC_1(VAR_7->vfeLaBankSel, VAR_7->vfebase + VAR_5);
}
