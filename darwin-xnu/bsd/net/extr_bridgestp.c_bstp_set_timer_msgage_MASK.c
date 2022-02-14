
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_port {scalar_t__ bp_port_msg_age; scalar_t__ bp_port_max_age; int bp_port_htime; int bp_message_age_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct bstp_port *VAR_1)
{
 if (VAR_1->bp_port_msg_age + VAR_0 <=
     VAR_1->bp_port_max_age) {
  FUNC_0(&VAR_1->bp_message_age_timer,
      VAR_1->bp_port_htime * 3);
 } else

  FUNC_0(&VAR_1->bp_message_age_timer, 0);
}
