
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
struct TYPE_5__ {TYPE_3__ fp_regs; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_6__ {int ui; int d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_2 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_3 (struct pt_regs *VAR_6, int VAR_7, int VAR_8) {
        s390_fp_regs *VAR_9 = &VAR_5->thread.fp_regs;
        FUNC_0(VAR_0);
        VAR_3;

        FUNC_1(VAR_0, &VAR_9->fprs[VAR_8].d);
        VAR_9->fprs[VAR_7].ui = VAR_9->fprs[VAR_8].ui;
        FUNC_2(VAR_6, VAR_1, VAR_2);
        return VAR_4;
}
