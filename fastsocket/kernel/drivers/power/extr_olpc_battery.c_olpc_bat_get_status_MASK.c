
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {void* intval; } ;
typedef int uint8_t ;
struct TYPE_2__ {int ecver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int FUNC_0(union power_supply_propval *VAR_10, uint8_t VAR_11)
{
 if (VAR_9.ecver > 0x44) {
  if (VAR_11 & (VAR_1 | VAR_4))
   VAR_10->intval = VAR_5;
  else if (VAR_11 & VAR_2)
   VAR_10->intval = VAR_6;
  else if (VAR_11 & VAR_3)
   VAR_10->intval = VAR_7;
  else
   VAR_10->intval = VAR_8;
 } else {

  if (!(VAR_11 & VAR_0))
   VAR_10->intval = VAR_6;
  else if (VAR_11 & VAR_3)
   VAR_10->intval = VAR_7;
  else
   VAR_10->intval = VAR_5;
 }

 return 0;
}
