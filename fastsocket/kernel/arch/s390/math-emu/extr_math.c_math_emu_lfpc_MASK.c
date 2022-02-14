
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


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pt_regs*,int ,int,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int,int*) ;

int FUNC_2(__u8 *VAR_3, struct pt_regs *VAR_4) {
        __u32 VAR_5 = *((__u32 *) VAR_3);
        __u32 *VAR_6, VAR_7;

        VAR_6= (__u32 *) FUNC_0(VAR_4, 0, VAR_5>>12, VAR_5);
        FUNC_1(VAR_7, VAR_6);
        if ((VAR_7 & ~VAR_0) != 0)
  return VAR_1;
 VAR_2->thread.fp_regs.fpc = VAR_7;
        return 0;
}
