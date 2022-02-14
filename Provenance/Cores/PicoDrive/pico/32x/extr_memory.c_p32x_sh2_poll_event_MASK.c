
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int state; int m68krcycles_done; scalar_t__ poll_cnt; scalar_t__ poll_cycles; scalar_t__ poll_addr; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(SH2 *VAR_2, u32 VAR_3, u32 VAR_4)
{
  if (VAR_2->state & VAR_3) {
    FUNC_0(VAR_2, VAR_0, "state: %02x->%02x", VAR_2->state,
      VAR_2->state & ~VAR_3);

    if (VAR_2->m68krcycles_done < VAR_4)
      VAR_2->m68krcycles_done = VAR_4;

    FUNC_1(VAR_2, VAR_1);
  }

  VAR_2->state &= ~VAR_3;
  VAR_2->poll_addr = VAR_2->poll_cycles = VAR_2->poll_cnt = 0;
}
