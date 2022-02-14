
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ hv_volatile_state_t ;
struct TYPE_3__ {int * ids; } ;
struct TYPE_4__ {TYPE_1__ machine; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;

int
FUNC_1(hv_volatile_state_t VAR_1) {
 int VAR_2 = 0;


 if (VAR_1 == VAR_0) {
  VAR_2 = (FUNC_0()->machine.ids != ((void*)0));
 }


 return VAR_2;
}
