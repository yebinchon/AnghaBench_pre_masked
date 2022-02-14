
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mk_timer_arm_leeway_trap_args {int mk_timer_flags; int mk_leeway; int expire_time; int name; } ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

kern_return_t
FUNC_1(struct mk_timer_arm_leeway_trap_args *VAR_0) {
 return FUNC_0(VAR_0->name, VAR_0->expire_time, VAR_0->mk_leeway, VAR_0->mk_timer_flags);
}
