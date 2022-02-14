
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int __u32 ;
struct TYPE_6__ {TYPE_1__* fprs; } ;
struct TYPE_7__ {TYPE_2__ fp_regs; } ;
struct TYPE_8__ {TYPE_3__ thread; } ;
struct TYPE_5__ {int f; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_5 (struct pt_regs *VAR_5, int VAR_6, long VAR_7) {
        FUNC_0(VAR_0);
 int VAR_8;

        FUNC_1(VAR_0, &VAR_4->thread.fp_regs.fprs[VAR_6].f);
 switch (VAR_1) {
 default:
  VAR_8 = 8;
  break;
 case 0:
  if (FUNC_3(VAR_0))
   VAR_8 = 10;
  else
   VAR_8 = 6;
  break;
 case 128:
  if (FUNC_3(VAR_0))
   VAR_8 = 4;
  else if (FUNC_2(VAR_0) & VAR_3)
   VAR_8 = 2;
  else
   VAR_8 = 0;
  break;
 }
 if (!VAR_2)
  VAR_8++;
 FUNC_4(VAR_5, ((__u32) VAR_7 >> VAR_8) & 1);
        return 0;
}
