
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_gap_duration; int min_digit_duration; int state; scalar_t__ indication_state_ack; scalar_t__ indication_state; scalar_t__ digit_read_pos; scalar_t__ digit_write_pos; int current_digit_value; scalar_t__ current_digit_off_time; scalar_t__ current_digit_on_time; scalar_t__ cycle_counter; } ;
struct TYPE_5__ {TYPE_1__ recv; } ;
typedef TYPE_2__ t_capidtmf_state ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (t_capidtmf_state *VAR_2)
{
  VAR_2->recv.min_gap_duration = 1;
  VAR_2->recv.min_digit_duration = 1;

  VAR_2->recv.cycle_counter = 0;
  VAR_2->recv.current_digit_on_time = 0;
  VAR_2->recv.current_digit_off_time = 0;
  VAR_2->recv.current_digit_value = VAR_0;

  VAR_2->recv.digit_write_pos = 0;
  VAR_2->recv.digit_read_pos = 0;
  VAR_2->recv.indication_state = 0;
  VAR_2->recv.indication_state_ack = 0;
  VAR_2->recv.state = VAR_1;
}
