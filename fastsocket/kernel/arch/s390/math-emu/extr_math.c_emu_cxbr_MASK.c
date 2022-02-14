
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
struct TYPE_7__ {int low; int high; } ;
struct TYPE_11__ {int ld; TYPE_1__ w; } ;
typedef TYPE_5__ mathemu_ldcv ;
struct TYPE_9__ {TYPE_2__* fprs; } ;
struct TYPE_10__ {TYPE_3__ fp_regs; } ;
struct TYPE_12__ {TYPE_4__ thread; } ;
struct TYPE_8__ {int ui; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_3 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_3, int VAR_4, int VAR_5) {
        FUNC_1(VAR_0); FUNC_1(VAR_1);
 mathemu_ldcv VAR_6;
        int VAR_7;

        VAR_6.w.high = VAR_2->thread.fp_regs.fprs[VAR_4].ui;
        VAR_6.w.low = VAR_2->thread.fp_regs.fprs[VAR_4+2].ui;
        FUNC_2(VAR_0, &VAR_6.ld);
        VAR_6.w.high = VAR_2->thread.fp_regs.fprs[VAR_5].ui;
        VAR_6.w.low = VAR_2->thread.fp_regs.fprs[VAR_5+2].ui;
        FUNC_2(VAR_1, &VAR_6.ld);
        FUNC_0(VAR_7, VAR_0, VAR_1, 3);




        FUNC_3(VAR_3, (VAR_7 == -1) ? 1 : (VAR_7 == 1) ? 2 : VAR_7);
        return 0;
}
