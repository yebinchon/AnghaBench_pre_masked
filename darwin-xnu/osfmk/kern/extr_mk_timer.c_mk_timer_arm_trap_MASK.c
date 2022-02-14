
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mk_timer_arm_trap_args {int expire_time; int name; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

kern_return_t
FUNC_1(struct mk_timer_arm_trap_args *VAR_1) {
 return FUNC_0(VAR_1->name, VAR_1->expire_time, 0, VAR_0);
}
