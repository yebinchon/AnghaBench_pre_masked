
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
typedef int __u32 ;
struct TYPE_9__ {TYPE_2__* fprs; } ;
struct TYPE_10__ {TYPE_3__ fp_regs; } ;
struct TYPE_12__ {TYPE_4__ thread; } ;
struct TYPE_8__ {int ui; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_4 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_5, int VAR_6, long VAR_7) {
        FUNC_0(VAR_0);
 mathemu_ldcv VAR_8;
 int VAR_9;

        VAR_8.w.high = VAR_4->thread.fp_regs.fprs[VAR_6].ui;
        VAR_8.w.low = VAR_4->thread.fp_regs.fprs[VAR_6+2].ui;
        FUNC_1(VAR_0, &VAR_8.ld);
 switch (VAR_1) {
 default:
  VAR_9 = 8;
  break;
 case 0:
  if (FUNC_3(VAR_0))
   VAR_9 = 10;
  else
   VAR_9 = 6;
  break;
 case 128:
  if (FUNC_3(VAR_0))
   VAR_9 = 4;
  else if (FUNC_2(VAR_0) & VAR_3)
   VAR_9 = 2;
  else
   VAR_9 = 0;
  break;
 }
 if (!VAR_2)
  VAR_9++;
 FUNC_4(VAR_5, ((__u32) VAR_7 >> VAR_9) & 1);
        return 0;
}
