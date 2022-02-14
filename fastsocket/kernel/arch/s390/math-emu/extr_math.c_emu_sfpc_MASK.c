
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int* gprs; } ;
typedef int __u32 ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fp_regs; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_0 (struct pt_regs *VAR_3, int VAR_4, int VAR_5) {
        __u32 VAR_6;

        VAR_6 = VAR_3->gprs[VAR_4];
        if ((VAR_6 & ~VAR_0) != 0)
  return VAR_1;
 VAR_2->thread.fp_regs.fpc = VAR_6;
        return 0;
}
