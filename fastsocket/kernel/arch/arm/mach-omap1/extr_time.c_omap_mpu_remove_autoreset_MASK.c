
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cntl; } ;
typedef TYPE_1__ omap_mpu_timer_regs_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_1)
{
 volatile omap_mpu_timer_regs_t* VAR_2 = FUNC_0(VAR_1);

 VAR_2->cntl = VAR_2->cntl & ~VAR_0;
}
