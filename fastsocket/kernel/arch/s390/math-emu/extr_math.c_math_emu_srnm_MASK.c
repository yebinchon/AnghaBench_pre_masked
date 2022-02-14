
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fp_regs; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int FUNC_0 (struct pt_regs*,int ,int,int) ;
 TYPE_3__* VAR_0 ;

int FUNC_1(__u8 *VAR_1, struct pt_regs *VAR_2) {
        __u32 VAR_3 = *((__u32 *) VAR_1);
        __u32 VAR_4;

        VAR_4 = FUNC_0(VAR_2, 0, VAR_3>>12, VAR_3);
 VAR_0->thread.fp_regs.fpc &= ~3;
        VAR_0->thread.fp_regs.fpc |= (VAR_4 & 3);
        return 0;
}
