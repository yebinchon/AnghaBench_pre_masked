
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_10__ {TYPE_3__* fprs; } ;
typedef TYPE_4__ s390_fp_regs ;
struct TYPE_7__ {int low; int high; } ;
struct TYPE_11__ {int ld; TYPE_1__ w; } ;
typedef TYPE_5__ mathemu_ldcv ;
struct TYPE_8__ {TYPE_4__ fp_regs; } ;
struct TYPE_12__ {TYPE_2__ thread; } ;
struct TYPE_9__ {int ui; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 int FUNC_2 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_3 (struct pt_regs *VAR_6, int VAR_7, int VAR_8) {
        s390_fp_regs *VAR_9 = &VAR_5->thread.fp_regs;
 mathemu_ldcv VAR_10;
        FUNC_0(VAR_1);
        VAR_0;

        VAR_10.w.high = VAR_5->thread.fp_regs.fprs[VAR_8].ui;
        VAR_10.w.low = VAR_5->thread.fp_regs.fprs[VAR_8+2].ui;
        FUNC_1(VAR_1, &VAR_10.ld);
        VAR_9->fprs[VAR_7].ui = VAR_9->fprs[VAR_8].ui;
        VAR_9->fprs[VAR_7+2].ui = VAR_9->fprs[VAR_8+2].ui;
        FUNC_2(VAR_6, VAR_2, VAR_3);
        return VAR_4;
}
