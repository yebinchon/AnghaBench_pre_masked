
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {scalar_t__ bs_root_fdelay; scalar_t__ bs_root_max_age; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct bstp_port {int bp_protover; TYPE_1__ bp_tc_timer; int bp_flags; scalar_t__ bp_desg_htime; struct bstp_state* bp_bs; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct bstp_port *VAR_2)
{
 struct bstp_state *VAR_3 = VAR_2->bp_bs;

 if (VAR_2->bp_tc_timer.active)
  return;

 switch (VAR_2->bp_protover) {
  case 129:
   FUNC_0(&VAR_2->bp_tc_timer,
       VAR_2->bp_desg_htime + VAR_1);
   VAR_2->bp_flags |= VAR_0;
   break;

  case 128:
   FUNC_0(&VAR_2->bp_tc_timer,
       VAR_3->bs_root_max_age + VAR_3->bs_root_fdelay);
   break;
 }
}
