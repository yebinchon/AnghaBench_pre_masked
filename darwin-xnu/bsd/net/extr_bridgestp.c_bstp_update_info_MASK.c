
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {scalar_t__ bs_allsynced; } ;
struct bstp_port {int bp_flags; int bp_infois; int bp_desg_htime; int bp_port_htime; int bp_desg_fdelay; int bp_port_fdelay; int bp_desg_max_age; int bp_port_max_age; int bp_desg_msg_age; int bp_port_msg_age; int bp_desg_pv; int bp_port_pv; scalar_t__ bp_synced; scalar_t__ bp_agreed; scalar_t__ bp_proposed; scalar_t__ bp_proposing; struct bstp_state* bp_bs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bstp_port*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bstp_port *VAR_2)
{
 struct bstp_state *VAR_3 = VAR_2->bp_bs;

 VAR_2->bp_proposing = 0;
 VAR_2->bp_proposed = 0;

 if (VAR_2->bp_agreed && !FUNC_0(VAR_2, VAR_0))
  VAR_2->bp_agreed = 0;

 if (VAR_2->bp_synced && !VAR_2->bp_agreed) {
  VAR_2->bp_synced = 0;
  VAR_3->bs_allsynced = 0;
 }


 VAR_2->bp_port_pv = VAR_2->bp_desg_pv;
 VAR_2->bp_port_msg_age = VAR_2->bp_desg_msg_age;
 VAR_2->bp_port_max_age = VAR_2->bp_desg_max_age;
 VAR_2->bp_port_fdelay = VAR_2->bp_desg_fdelay;
 VAR_2->bp_port_htime = VAR_2->bp_desg_htime;
 VAR_2->bp_infois = VAR_0;


 VAR_2->bp_flags |= VAR_1;
}
