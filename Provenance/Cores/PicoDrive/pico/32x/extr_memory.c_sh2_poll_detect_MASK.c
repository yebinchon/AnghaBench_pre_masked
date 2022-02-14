
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ poll_addr; int poll_cycles; scalar_t__ state; scalar_t__ poll_cnt; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(SH2 *VAR_2, u32 VAR_3, u32 VAR_4, int VAR_5)
{
  int VAR_6 = FUNC_2(VAR_2);

  if (VAR_3 == VAR_2->poll_addr && VAR_2->poll_cycles - VAR_6 <= 10) {
    if (VAR_2->poll_cnt++ > VAR_5) {
      if (!(VAR_2->state & VAR_4))
        FUNC_0(VAR_2, VAR_0, "state: %02x->%02x",
          VAR_2->state, VAR_2->state | VAR_4);

      VAR_2->state |= VAR_4;
      FUNC_3(VAR_2, 1);
      FUNC_1(VAR_2, VAR_1);
      return;
    }
  }
  else
    VAR_2->poll_cnt = 0;
  VAR_2->poll_addr = VAR_3;
  VAR_2->poll_cycles = VAR_6;
}
