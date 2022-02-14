
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_5__ {int fpc; TYPE_2__* fprs; } ;
struct TYPE_7__ {TYPE_1__ fp_regs; } ;
struct TYPE_8__ {TYPE_3__ thread; } ;
struct TYPE_6__ {int d; int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_7, int VAR_8, int VAR_9) {
        FUNC_2(VAR_4); FUNC_1(VAR_1);
 VAR_2;
        int VAR_10;

 VAR_10 = VAR_6->thread.fp_regs.fpc & 3;
        FUNC_4(VAR_4, &VAR_6->thread.fp_regs.fprs[VAR_9].f);
 FUNC_0 (VAR_0, VAR_3, 2, 1, VAR_1, VAR_4);
 FUNC_3(&VAR_6->thread.fp_regs.fprs[VAR_8].d, VAR_1);
        return VAR_5;
}
