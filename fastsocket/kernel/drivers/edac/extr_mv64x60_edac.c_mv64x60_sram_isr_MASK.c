
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64x60_sram_pdata {scalar_t__ sram_vbase; } ;
struct edac_device_ctl_info {struct mv64x60_sram_pdata* pvt_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct edac_device_ctl_info*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct edac_device_ctl_info *VAR_5 = VAR_4;
 struct mv64x60_sram_pdata *VAR_6 = VAR_5->pvt_info;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->sram_vbase + VAR_2);
 if (!VAR_7)
  return VAR_1;

 FUNC_1(VAR_5);

 return VAR_0;
}
