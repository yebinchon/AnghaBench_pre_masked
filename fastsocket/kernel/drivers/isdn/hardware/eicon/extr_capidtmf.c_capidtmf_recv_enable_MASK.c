
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* word ;
struct TYPE_4__ {int min_digit_duration; int min_gap_duration; int state; int indication_state_ack; } ;
struct TYPE_5__ {TYPE_1__ recv; } ;
typedef TYPE_2__ t_capidtmf_state ;
typedef int dword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0 (t_capidtmf_state *VAR_3, word VAR_4, word VAR_5)
{
  VAR_3->recv.indication_state_ack &= VAR_0;
  VAR_3->recv.min_digit_duration = (word)(((((dword) VAR_4) * 8) +
    ((dword)(VAR_2 / 2))) / ((dword) VAR_2));
  if (VAR_3->recv.min_digit_duration <= 1)
    VAR_3->recv.min_digit_duration = 1;
  else
    (VAR_3->recv.min_digit_duration)--;
  VAR_3->recv.min_gap_duration =
    (word)((((dword) VAR_5) * 8) / ((dword) VAR_2));
  if (VAR_3->recv.min_gap_duration <= 1)
    VAR_3->recv.min_gap_duration = 1;
  else
    (VAR_3->recv.min_gap_duration)--;
  VAR_3->recv.state |= VAR_1;
}
