
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar5416IniArray {unsigned int ia_rows; } ;
struct TYPE_2__ {scalar_t__ pcieSerDesWrite; scalar_t__ pcie_waen; } ;
struct ath_hw {struct ar5416IniArray iniPcieSerdesLowPower; struct ar5416IniArray iniPcieSerdes; TYPE_1__ config; scalar_t__ WARegVal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ar5416IniArray*,unsigned int,int) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3,
      bool VAR_4)
{

 if (!VAR_4 ) {

  FUNC_1(VAR_3, VAR_0, VAR_1);


  if (VAR_3->config.pcie_waen)
   FUNC_2(VAR_3, VAR_2, VAR_3->config.pcie_waen);
  else
   FUNC_2(VAR_3, VAR_2, VAR_3->WARegVal);
 }





 if (VAR_3->config.pcieSerDesWrite) {
  unsigned int VAR_5;
  struct ar5416IniArray *VAR_6;

  VAR_6 = VAR_4 ? &VAR_3->iniPcieSerdes :
        &VAR_3->iniPcieSerdesLowPower;

  for (VAR_5 = 0; VAR_5 < VAR_6->ia_rows; VAR_5++) {
   FUNC_2(VAR_3,
      FUNC_0(VAR_6, VAR_5, 0),
      FUNC_0(VAR_6, VAR_5, 1));
  }
 }
}
