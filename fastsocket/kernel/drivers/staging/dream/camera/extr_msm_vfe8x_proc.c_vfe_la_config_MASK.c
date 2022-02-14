
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vfe_cmd_la_config {int enable; scalar_t__* table; } ;
typedef scalar_t__ int16_t ;
typedef enum VFE_DMI_RAM_SEL { ____Placeholder_VFE_DMI_RAM_SEL } VFE_DMI_RAM_SEL ;
struct TYPE_3__ {int lumaAdaptationEnable; } ;
struct TYPE_4__ {scalar_t__ vfeLaBankSel; scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(struct vfe_cmd_la_config *VAR_8)
{
 uint16_t VAR_9;
 int16_t *VAR_10;
 enum VFE_DMI_RAM_SEL VAR_11;

 VAR_10 = VAR_8->table;
 VAR_7->vfeModuleEnableLocal.lumaAdaptationEnable = VAR_8->enable;

 if (VAR_7->vfeLaBankSel == 0)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;


 FUNC_1(VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_2((uint32_t)(*VAR_10), VAR_7->vfebase + VAR_4);
  VAR_10++;
 }



 FUNC_2(VAR_3, VAR_7->vfebase + VAR_2);


 FUNC_2(VAR_7->vfeLaBankSel, VAR_7->vfebase + VAR_5);
 FUNC_0("VFE Luma adaptation bank selection is 0x%x\n",
    *(uint32_t *)&VAR_7->vfeLaBankSel);
}
