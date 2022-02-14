
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_gamma_lut_sel {int ch2BankSelect; int ch1BankSelect; int ch0BankSelect; } ;
struct VFE_GammaLutSelect_ConfigCmdType {int ch2BankSelect; int ch1BankSelect; int ch0BankSelect; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct VFE_GammaLutSelect_ConfigCmdType*,int ,int) ;
 int FUNC_2 (scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_3(struct vfe_gamma_lut_sel *VAR_2)
{
 struct VFE_GammaLutSelect_ConfigCmdType VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.ch0BankSelect = VAR_2->ch0BankSelect;
 VAR_3.ch1BankSelect = VAR_2->ch1BankSelect;
 VAR_3.ch2BankSelect = VAR_2->ch2BankSelect;
 FUNC_0("VFE gamma lut bank selection is 0x%x\n", *((uint32_t *)&VAR_3));
 FUNC_2(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
