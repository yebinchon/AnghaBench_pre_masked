
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int dummy; } ;
struct bstp_port {scalar_t__ bp_infois; TYPE_1__* bp_ifp; } ;
struct TYPE_2__ {int if_xname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bstp_state*) ;

__attribute__((used)) static void
FUNC_2(struct bstp_state *VAR_2, struct bstp_port *VAR_3)
{
 if (VAR_3->bp_infois == VAR_1) {
  VAR_3->bp_infois = VAR_0;
  FUNC_1(VAR_2);
  FUNC_0("aged info on %s\n", VAR_3->bp_ifp->if_xname);
 }
}
