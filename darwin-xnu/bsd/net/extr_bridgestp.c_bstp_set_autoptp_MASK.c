
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {scalar_t__ bp_role; int bp_flags; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (struct bstp_state*,struct bstp_port*) ;

int
FUNC_3(struct bstp_port *VAR_2, int VAR_3)
{
 struct bstp_state *VAR_4 = VAR_2->bp_bs;

 FUNC_0(VAR_4);
 if (VAR_3) {
  VAR_2->bp_flags |= VAR_0;
  if (VAR_2->bp_role != VAR_1)
   FUNC_2(VAR_4, VAR_2);
 } else
  VAR_2->bp_flags &= ~VAR_0;
 FUNC_1(VAR_4);
 return (0);
}
