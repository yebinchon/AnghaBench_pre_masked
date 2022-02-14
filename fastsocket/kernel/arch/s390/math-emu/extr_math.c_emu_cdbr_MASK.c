
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_7__ {TYPE_1__* fprs; } ;
struct TYPE_6__ {TYPE_3__ fp_regs; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_5__ {int d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_4__* VAR_2 ;
 int FUNC_3 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_3, int VAR_4, int VAR_5) {
        FUNC_1(VAR_0); FUNC_1(VAR_1);
        int VAR_6;

        FUNC_2(VAR_0, &VAR_2->thread.fp_regs.fprs[VAR_4].d);
        FUNC_2(VAR_1, &VAR_2->thread.fp_regs.fprs[VAR_5].d);
        FUNC_0(VAR_6, VAR_0, VAR_1, 3);




        FUNC_3(VAR_3, (VAR_6 == -1) ? 1 : (VAR_6 == 1) ? 2 : VAR_6);
        return 0;
}
