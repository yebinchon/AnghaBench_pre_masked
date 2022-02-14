
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


struct pt_regs {int * gprs; } ;
struct TYPE_7__ {int low; int high; } ;
struct TYPE_11__ {int ld; TYPE_1__ w; } ;
typedef TYPE_5__ mathemu_ldcv ;
typedef int __s32 ;
struct TYPE_9__ {int fpc; TYPE_2__* fprs; } ;
struct TYPE_10__ {TYPE_3__ fp_regs; } ;
struct TYPE_12__ {TYPE_4__ thread; } ;
struct TYPE_8__ {int ui; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_3 (struct pt_regs*,int ,int ) ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_7, int VAR_8, int VAR_9, int VAR_10) {
        FUNC_0(VAR_2);
        VAR_0;
 mathemu_ldcv VAR_11;
        __s32 VAR_12;
        int VAR_13;

 if (VAR_10 == 0)
  VAR_13 = VAR_6->thread.fp_regs.fpc & 3;
 else if (VAR_10 == 1)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_10 - 4;
        VAR_11.w.high = VAR_6->thread.fp_regs.fprs[VAR_9].ui;
        VAR_11.w.low = VAR_6->thread.fp_regs.fprs[VAR_9+2].ui;
        FUNC_2(VAR_2, &VAR_11.ld);
        FUNC_1(VAR_12, VAR_2, 32, 1);
        VAR_7->gprs[VAR_8] = VAR_12;
        FUNC_3(VAR_7, VAR_3, VAR_4);
        return VAR_5;
}
