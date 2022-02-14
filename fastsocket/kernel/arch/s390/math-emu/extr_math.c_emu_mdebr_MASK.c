
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_6__ {int fpc; TYPE_1__* fprs; } ;
struct TYPE_7__ {TYPE_2__ fp_regs; } ;
struct TYPE_8__ {TYPE_3__ thread; } ;
struct TYPE_5__ {int d; int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;

__attribute__((used)) static int FUNC_6 (struct pt_regs *VAR_9, int VAR_10, int VAR_11) {
        FUNC_2(VAR_6); FUNC_1(VAR_1); FUNC_1(VAR_2); FUNC_1(VAR_3);
 VAR_4;
        int VAR_12;

 VAR_12 = VAR_8->thread.fp_regs.fpc & 3;
        FUNC_5(VAR_6, &VAR_8->thread.fp_regs.fprs[VAR_10].f);
 FUNC_0 (VAR_0, VAR_5, 2, 1, VAR_1, VAR_6);
        FUNC_5(VAR_6, &VAR_8->thread.fp_regs.fprs[VAR_11].f);
 FUNC_0 (VAR_0, VAR_5, 2, 1, VAR_2, VAR_6);
        FUNC_3(VAR_3, VAR_1, VAR_2);
 FUNC_4(&VAR_8->thread.fp_regs.fprs[VAR_10].d, VAR_3);
        return VAR_7;
}
