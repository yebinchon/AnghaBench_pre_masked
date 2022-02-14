
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64x60_cpu_pdata {scalar_t__* cpu_vbase; } ;
struct edac_device_ctl_info {struct mv64x60_cpu_pdata* pvt_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct edac_device_ctl_info*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct edac_device_ctl_info *VAR_6 = VAR_5;
 struct mv64x60_cpu_pdata *VAR_7 = VAR_6->pvt_info;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->cpu_vbase[1] + VAR_3) &
     VAR_2;
 if (!VAR_8)
  return VAR_1;

 FUNC_1(VAR_6);

 return VAR_0;
}
