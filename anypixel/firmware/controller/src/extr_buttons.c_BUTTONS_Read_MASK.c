
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {int pin; int GPIOx; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

uint8_t FUNC_2(uint8_t VAR_3) {
 FUNC_1(VAR_1 == 1);

 if(FUNC_0(VAR_2[VAR_3].GPIOx, VAR_2[VAR_3].pin) == ((VAR_0 >> VAR_3) & 1) )
  return 1;
 else
  return 0;
}
