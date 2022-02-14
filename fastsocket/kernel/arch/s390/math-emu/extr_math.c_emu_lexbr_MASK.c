
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
struct TYPE_9__ {int fpc; TYPE_2__* fprs; } ;
struct TYPE_10__ {TYPE_3__ fp_regs; } ;
struct TYPE_12__ {TYPE_4__ thread; } ;
struct TYPE_8__ {int f; int ui; } ;


 int FUNC_0 (int ,int ,int,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_7, int VAR_8, int VAR_9) {
        FUNC_1(VAR_2); FUNC_2(VAR_4);
 VAR_0;
 mathemu_ldcv VAR_10;
        int VAR_11;

 VAR_11 = VAR_6->thread.fp_regs.fpc & 3;
        VAR_10.w.high = VAR_6->thread.fp_regs.fprs[VAR_9].ui;
        VAR_10.w.low = VAR_6->thread.fp_regs.fprs[VAR_9+2].ui;
        FUNC_4(VAR_2, &VAR_10.ld);
 FUNC_0 (VAR_3, VAR_1, 1, 4, VAR_4, VAR_2);
 FUNC_3(&VAR_6->thread.fp_regs.fprs[VAR_8].f, VAR_4);
        return VAR_5;
}
