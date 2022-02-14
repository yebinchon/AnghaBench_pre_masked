
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ active; } ;
struct bstp_port {int bp_state; int bp_role; int bp_protover; scalar_t__ bp_tc_ack; TYPE_1__ bp_tc_timer; scalar_t__ bp_agree; scalar_t__ bp_proposing; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;







__attribute__((used)) static int
FUNC_0(struct bstp_port *VAR_12)
{
 int VAR_13 = 0;

 if (VAR_12->bp_proposing && VAR_12->bp_state != 135)
  VAR_13 |= VAR_5;

 if (VAR_12->bp_agree)
  VAR_13 |= VAR_0;

 if (VAR_12->bp_tc_timer.active)
  VAR_13 |= VAR_7;

 if (VAR_12->bp_tc_ack)
  VAR_13 |= VAR_8;

 switch (VAR_12->bp_state) {
  case 134:
   VAR_13 |= VAR_4;
   break;

  case 135:
   VAR_13 |= (VAR_4 | VAR_3);
   break;
 }

 switch (VAR_12->bp_role) {
  case 128:
   VAR_13 |=
    (VAR_6 << VAR_9);
   break;

  case 131:
  case 130:
   VAR_13 |=
    (VAR_1 << VAR_9);
   break;

  case 129:
   VAR_13 |=
    (VAR_2 << VAR_9);
   break;
 }


 switch (VAR_12->bp_protover) {
  case 132:
   VAR_13 &= VAR_11;
   break;
  case 133:
   VAR_13 &= VAR_10;
   break;
 }
 return (VAR_13);
}
