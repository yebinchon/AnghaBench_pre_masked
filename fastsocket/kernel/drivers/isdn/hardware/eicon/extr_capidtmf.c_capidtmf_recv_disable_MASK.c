
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int current_digit_value; scalar_t__ current_digit_off_time; scalar_t__ current_digit_on_time; scalar_t__ cycle_counter; } ;
struct TYPE_6__ {TYPE_1__ recv; } ;
typedef TYPE_2__ t_capidtmf_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (t_capidtmf_state *VAR_3)
{
  VAR_3->recv.state &= ~VAR_1;
  if (VAR_3->recv.state == VAR_2)
    FUNC_0 (VAR_3);
  else
  {
    VAR_3->recv.cycle_counter = 0;
    VAR_3->recv.current_digit_on_time = 0;
    VAR_3->recv.current_digit_off_time = 0;
    VAR_3->recv.current_digit_value = VAR_0;
  }
}
