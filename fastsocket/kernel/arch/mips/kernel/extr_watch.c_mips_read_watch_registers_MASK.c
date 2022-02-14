
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mips3264_watch_reg_state {int* watchhi; int* watchlo; } ;
struct TYPE_5__ {struct mips3264_watch_reg_state mips3264; } ;
struct TYPE_6__ {TYPE_1__ watch; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_7__ {int watch_reg_use_cnt; } ;


 int FUNC_0 () ;
 TYPE_4__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 struct mips3264_watch_reg_state *VAR_2 =
  &VAR_0->thread.watch.mips3264;
 switch (VAR_1.watch_reg_use_cnt) {
 default:
  FUNC_0();
 case 4:
  VAR_2->watchhi[3] = (FUNC_4() & 0x0fff);
 case 3:
  VAR_2->watchhi[2] = (FUNC_3() & 0x0fff);
 case 2:
  VAR_2->watchhi[1] = (FUNC_2() & 0x0fff);
 case 1:
  VAR_2->watchhi[0] = (FUNC_1() & 0x0fff);
 }
 if (VAR_1.watch_reg_use_cnt == 1 &&
     (VAR_2->watchhi[0] & 7) == 0) {





  VAR_2->watchhi[0] |= (VAR_2->watchlo[0] & 7);
 }
 }
