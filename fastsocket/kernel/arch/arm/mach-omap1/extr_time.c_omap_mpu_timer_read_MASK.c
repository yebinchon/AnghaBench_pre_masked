
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long read_tim; } ;
typedef TYPE_1__ omap_mpu_timer_regs_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static inline unsigned long FUNC_1(int VAR_0)
{
 volatile omap_mpu_timer_regs_t* VAR_1 = FUNC_0(VAR_0);
 return VAR_1->read_tim;
}
