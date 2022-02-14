
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
struct TYPE_10__ {int fpc; TYPE_2__* fprs; } ;
typedef TYPE_4__ s390_fp_regs ;
struct TYPE_9__ {int low; int high; } ;
struct TYPE_11__ {TYPE_3__ w; int ld; } ;
typedef TYPE_5__ mathemu_ldcv ;
typedef int __s32 ;
struct TYPE_7__ {TYPE_4__ fp_regs; } ;
struct TYPE_12__ {TYPE_1__ thread; } ;
struct TYPE_8__ {int ui; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;

__attribute__((used)) static int FUNC_4 (struct pt_regs *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
        s390_fp_regs *VAR_9 = &VAR_4->thread.fp_regs;
        FUNC_0(VAR_2);
        VAR_0;
 mathemu_ldcv VAR_10;
        __s32 VAR_11;
        int VAR_12;

 if (VAR_8 == 0)
  VAR_12 = VAR_9->fpc & 3;
 else if (VAR_8 == 1)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_8 - 4;
        VAR_10.w.high = VAR_9->fprs[VAR_7].ui;
        VAR_10.w.low = VAR_9->fprs[VAR_7+2].ui;
        FUNC_3(VAR_2, &VAR_10.ld);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_10.ld, VAR_2);
 VAR_9->fprs[VAR_6].ui = VAR_10.w.high;
 VAR_9->fprs[VAR_6+2].ui = VAR_10.w.low;
        return VAR_3;
}
