
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mips3264_watch_reg_state {int* watchhi; int * watchlo; } ;
struct TYPE_5__ {struct mips3264_watch_reg_state mips3264; } ;
struct TYPE_6__ {TYPE_1__ watch; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_7__ {int watch_reg_use_cnt; } ;


 int FUNC_0 () ;
 TYPE_4__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 struct mips3264_watch_reg_state *VAR_2 =
  &VAR_0->thread.watch.mips3264;
 switch (VAR_1.watch_reg_use_cnt) {
 default:
  FUNC_0();
 case 4:
  FUNC_8(VAR_2->watchlo[3]);


  FUNC_4(0x40000007 | VAR_2->watchhi[3]);
 case 3:
  FUNC_7(VAR_2->watchlo[2]);
  FUNC_3(0x40000007 | VAR_2->watchhi[2]);
 case 2:
  FUNC_6(VAR_2->watchlo[1]);
  FUNC_2(0x40000007 | VAR_2->watchhi[1]);
 case 1:
  FUNC_5(VAR_2->watchlo[0]);
  FUNC_1(0x40000007 | VAR_2->watchhi[0]);
 }
}
