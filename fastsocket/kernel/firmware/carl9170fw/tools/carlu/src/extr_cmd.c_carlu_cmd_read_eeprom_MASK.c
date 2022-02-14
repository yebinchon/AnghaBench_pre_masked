
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct carlu {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct carlu*,int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct carlu *VAR_2)
{

 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, sizeof(VAR_2->eeprom),
      &VAR_2->eeprom);



 FUNC_0(sizeof(VAR_2->eeprom) % 8);


 if (VAR_2->eeprom.length == FUNC_2(0xffff))
  return -VAR_1;

 return 0;
}
