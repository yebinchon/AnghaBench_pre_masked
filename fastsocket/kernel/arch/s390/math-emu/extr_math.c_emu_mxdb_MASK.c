
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
struct TYPE_10__ {int low; int high; } ;
struct TYPE_11__ {long double ld; TYPE_4__ w; } ;
typedef TYPE_5__ mathemu_ldcv ;
struct TYPE_8__ {int fpc; TYPE_1__* fprs; } ;
struct TYPE_9__ {TYPE_2__ fp_regs; } ;
struct TYPE_12__ {TYPE_3__ thread; } ;
struct TYPE_7__ {int ui; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (long double*,int ) ;
 int FUNC_3 (int ,long double*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_6, int VAR_7, long double *VAR_8) {
        FUNC_0(VAR_1); FUNC_0(VAR_2); FUNC_0(VAR_3);
        VAR_0;
 mathemu_ldcv VAR_9;
        int VAR_10;

 VAR_10 = VAR_5->thread.fp_regs.fpc & 3;
        VAR_9.w.high = VAR_5->thread.fp_regs.fprs[VAR_7].ui;
        VAR_9.w.low = VAR_5->thread.fp_regs.fprs[VAR_7+2].ui;
        FUNC_3(VAR_1, &VAR_9.ld);
        FUNC_3(VAR_2, VAR_8);
        FUNC_1(VAR_3, VAR_1, VAR_2);
        FUNC_2(&VAR_9.ld, VAR_3);
        VAR_5->thread.fp_regs.fprs[VAR_7].ui = VAR_9.w.high;
        VAR_5->thread.fp_regs.fprs[VAR_7+2].ui = VAR_9.w.low;
        return VAR_4;
}
