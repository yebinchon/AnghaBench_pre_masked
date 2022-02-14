
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct cal_ctl_data_5g {int * ctlEdges; } ;
struct cal_ctl_data_2g {int * ctlEdges; } ;
struct ar9300_eeprom {int ** ctl_freqbin_5G; int ** ctl_freqbin_2G; struct cal_ctl_data_5g* ctlPowerData_5G; struct cal_ctl_data_2g* ctlPowerData_2G; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static u16 FUNC_3(struct ar9300_eeprom *VAR_1,
          int VAR_2,
          unsigned int VAR_3,
          u16 VAR_4,
          bool VAR_5)
{
 struct cal_ctl_data_2g *VAR_6 = VAR_1->ctlPowerData_2G;
 struct cal_ctl_data_5g *VAR_7 = VAR_1->ctlPowerData_5G;

 u8 *VAR_8 = VAR_5 ?
  &VAR_1->ctl_freqbin_2G[VAR_2][0] :
  &VAR_1->ctl_freqbin_5G[VAR_2][0];

 if (VAR_5) {
  if (FUNC_2(VAR_8[VAR_3 - 1], 1) < VAR_4 &&
      FUNC_0(VAR_6[VAR_2].ctlEdges[VAR_3 - 1]))
   return FUNC_1(VAR_6[VAR_2].ctlEdges[VAR_3 - 1]);
 } else {
  if (FUNC_2(VAR_8[VAR_3 - 1], 0) < VAR_4 &&
      FUNC_0(VAR_7[VAR_2].ctlEdges[VAR_3 - 1]))
   return FUNC_1(VAR_7[VAR_2].ctlEdges[VAR_3 - 1]);
 }

 return VAR_0;
}
