
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct da9030_charger {int fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct da9030_charger *VAR_5,
        union power_supply_propval *VAR_6)
{
 if (VAR_5->fault & VAR_0)
  VAR_6->intval = VAR_3;
 else if (VAR_5->fault & VAR_1)
  VAR_6->intval = VAR_4;
 else
  VAR_6->intval = VAR_2;
}
