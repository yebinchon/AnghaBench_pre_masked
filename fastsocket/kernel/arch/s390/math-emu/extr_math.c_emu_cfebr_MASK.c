
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int * gprs; } ;
typedef int __s32 ;
struct TYPE_6__ {int fpc; TYPE_1__* fprs; } ;
struct TYPE_7__ {TYPE_2__ fp_regs; } ;
struct TYPE_8__ {TYPE_3__ thread; } ;
struct TYPE_5__ {int f; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_7, int VAR_8, int VAR_9, int VAR_10) {
        FUNC_0(VAR_2);
        VAR_0;
        __s32 VAR_11;
        int VAR_12;

 if (VAR_10 == 0)
  VAR_12 = VAR_6->thread.fp_regs.fpc & 3;
 else if (VAR_10 == 1)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_10 - 4;
        FUNC_2(VAR_2, &VAR_6->thread.fp_regs.fprs[VAR_9].f);
        FUNC_1(VAR_11, VAR_2, 32, 1);
        VAR_7->gprs[VAR_8] = VAR_11;
        FUNC_3(VAR_7, VAR_3, VAR_4);
        return VAR_5;
}
