
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_3__ {int cpsr; } ;
typedef TYPE_1__ arm_saved_state_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(arm_saved_state_t *VAR_1, user_addr_t VAR_2)
{
 if (VAR_2 & 1) {
  VAR_1->cpsr |= VAR_0;
 } else {
  VAR_1->cpsr &= ~VAR_0;
 }
}
