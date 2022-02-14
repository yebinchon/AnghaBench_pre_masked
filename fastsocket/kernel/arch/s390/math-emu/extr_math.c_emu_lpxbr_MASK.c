
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
struct TYPE_11__ {TYPE_1__ w; int ld; } ;
typedef TYPE_5__ mathemu_ldcv ;
struct TYPE_9__ {int fpc; TYPE_2__* fprs; } ;
struct TYPE_10__ {TYPE_3__ fp_regs; } ;
struct TYPE_12__ {TYPE_4__ thread; } ;
struct TYPE_8__ {int ui; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_4 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_8, int VAR_9, int VAR_10) {
        FUNC_0(VAR_1); FUNC_0(VAR_3);
 VAR_0;
 mathemu_ldcv VAR_11;
        int VAR_12;

 VAR_12 = VAR_7->thread.fp_regs.fpc & 3;
        VAR_11.w.high = VAR_7->thread.fp_regs.fprs[VAR_10].ui;
        VAR_11.w.low = VAR_7->thread.fp_regs.fprs[VAR_10+2].ui;
        FUNC_3(VAR_1, &VAR_11.ld);
        if (VAR_2 != 0) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(&VAR_11.ld, VAR_3);
  VAR_7->thread.fp_regs.fprs[VAR_9].ui = VAR_11.w.high;
  VAR_7->thread.fp_regs.fprs[VAR_9+2].ui = VAR_11.w.low;
 } else{
  VAR_7->thread.fp_regs.fprs[VAR_9].ui =
   VAR_7->thread.fp_regs.fprs[VAR_10].ui;
  VAR_7->thread.fp_regs.fprs[VAR_9+2].ui =
   VAR_7->thread.fp_regs.fprs[VAR_10+2].ui;
 }
 FUNC_4(VAR_8, VAR_4, VAR_5);
        return VAR_6;
}
