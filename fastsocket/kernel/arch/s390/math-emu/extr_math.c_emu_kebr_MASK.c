
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
struct TYPE_5__ {TYPE_3__ fp_regs; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_6__ {int f; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_4 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_6, int VAR_7, int VAR_8) {
        FUNC_1(VAR_2); FUNC_1(VAR_3);
        VAR_0;
        int VAR_9;

        FUNC_3(VAR_2, &VAR_5->thread.fp_regs.fprs[VAR_7].f);
        FUNC_3(VAR_3, &VAR_5->thread.fp_regs.fprs[VAR_8].f);
        FUNC_0(VAR_9, VAR_2, VAR_3, 3);




        FUNC_4(VAR_6, (VAR_9 == -1) ? 1 : (VAR_9 == 1) ? 2 : VAR_9);
        if (VAR_9 == 3)
                FUNC_2 (VAR_1);
        return VAR_4;
}
