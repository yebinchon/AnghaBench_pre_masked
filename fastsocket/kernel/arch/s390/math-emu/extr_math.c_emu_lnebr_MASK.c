
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
struct TYPE_5__ {int ui; int f; } ;


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
 TYPE_4__* VAR_7 ;
 int FUNC_4 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_8, int VAR_9, int VAR_10) {
        FUNC_0(VAR_1); FUNC_0(VAR_3);
 VAR_0;
        int VAR_11;

 VAR_11 = VAR_7->thread.fp_regs.fpc & 3;
        FUNC_3(VAR_1, &VAR_7->thread.fp_regs.fprs[VAR_10].f);
        if (VAR_2 == 0) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(&VAR_7->thread.fp_regs.fprs[VAR_9].f, VAR_3);
 } else
  VAR_7->thread.fp_regs.fprs[VAR_9].ui =
   VAR_7->thread.fp_regs.fprs[VAR_10].ui;
 FUNC_4(VAR_8, VAR_4, VAR_5);
        return VAR_6;
}
