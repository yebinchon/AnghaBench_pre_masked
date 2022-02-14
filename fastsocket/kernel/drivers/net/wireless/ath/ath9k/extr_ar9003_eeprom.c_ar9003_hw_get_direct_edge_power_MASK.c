
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cal_ctl_data_5g {int * ctlEdges; } ;
struct cal_ctl_data_2g {int * ctlEdges; } ;
struct ar9300_eeprom {struct cal_ctl_data_5g* ctlPowerData_5G; struct cal_ctl_data_2g* ctlPowerData_2G; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct ar9300_eeprom *VAR_0,
        int VAR_1,
        int VAR_2,
        bool VAR_3)
{
 struct cal_ctl_data_2g *VAR_4 = VAR_0->ctlPowerData_2G;
 struct cal_ctl_data_5g *VAR_5 = VAR_0->ctlPowerData_5G;

 if (VAR_3)
  return FUNC_0(VAR_4[VAR_1].ctlEdges[VAR_2]);
 else
  return FUNC_0(VAR_5[VAR_1].ctlEdges[VAR_2]);
}
