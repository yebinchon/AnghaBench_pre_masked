
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_7__ {TYPE_2__* fprs; } ;
typedef TYPE_3__ s390_fp_regs ;
typedef int __u8 ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_5__ {TYPE_3__ fp_regs; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_6__ {int d; } ;


 scalar_t__ FUNC_0 (struct pt_regs*,int,int,int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(__u8 *VAR_1, struct pt_regs * VAR_2) {
        s390_fp_regs *VAR_3 = &VAR_0->thread.fp_regs;
        __u32 VAR_4 = *((__u32 *) VAR_1);
        __u64 *VAR_5;

        VAR_5 = (__u64 *) FUNC_0(VAR_2, VAR_4 >> 16, VAR_4 >> 12, VAR_4);
        FUNC_1(&VAR_3->fprs[(VAR_4 >> 20) & 0xf].d, VAR_5, 8);
 return 0;
}
