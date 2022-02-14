
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_7__ {int fpc; TYPE_1__* fprs; } ;
struct TYPE_6__ {TYPE_3__ fp_regs; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_5__ {int d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_6, int VAR_7, int VAR_8) {
        FUNC_0(VAR_0); FUNC_0(VAR_1); FUNC_0(VAR_2);
        VAR_3;
        int VAR_9;

 VAR_9 = VAR_5->thread.fp_regs.fpc & 3;
        FUNC_3(VAR_0, &VAR_5->thread.fp_regs.fprs[VAR_7].d);
        FUNC_3(VAR_1, &VAR_5->thread.fp_regs.fprs[VAR_8].d);
        FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_2(&VAR_5->thread.fp_regs.fprs[VAR_7].d, VAR_2);
        return VAR_4;
}
