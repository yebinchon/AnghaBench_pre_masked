
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int need_sync; int m68k_poll_a; scalar_t__ m68k_poll_cnt; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(u32 VAR_2)
{
  FUNC_2(FUNC_0(), 0);
  if (VAR_2 >= 0x0e && !VAR_0->m.need_sync) {


    FUNC_1(64);
    VAR_0->m.need_sync = 1;
  }
  if (VAR_1 || VAR_2 != VAR_0->m.m68k_poll_a) {
    VAR_0->m.m68k_poll_a = VAR_2;
    VAR_0->m.m68k_poll_cnt = 0;
    VAR_1 = 0;
    return;
  }
  VAR_0->m.m68k_poll_cnt++;
}
