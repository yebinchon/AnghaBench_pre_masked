
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int dummy; } ;
struct TYPE_2__ {int active; } ;
struct bstp_port {int bp_flags; scalar_t__ bp_role; int bp_desg_htime; int bp_hello_timer; TYPE_1__ bp_tc_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bstp_state*,struct bstp_port*) ;

__attribute__((used)) static void
FUNC_2(struct bstp_state *VAR_3, struct bstp_port *VAR_4)
{
 if ((VAR_4->bp_flags & VAR_0) ||
     VAR_4->bp_role == VAR_1 ||
     (VAR_4->bp_role == VAR_2 &&
      VAR_4->bp_tc_timer.active == 1)) {
  FUNC_0(&VAR_4->bp_hello_timer, VAR_4->bp_desg_htime);
  VAR_4->bp_flags |= VAR_0;
  FUNC_1(VAR_3, VAR_4);
 }
}
