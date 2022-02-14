
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cu_pv; } ;
struct bstp_port {int bp_infois; int bp_desg_pv; int bp_port_pv; TYPE_1__ bp_msg_cu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct bstp_port *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1 &&
     VAR_3->bp_infois == VAR_1 &&
     FUNC_0(&VAR_3->bp_port_pv, &VAR_3->bp_msg_cu.cu_pv) >= VAR_2)
  return (1);

 if (VAR_4 == VAR_0 &&
     VAR_3->bp_infois == VAR_0 &&
     FUNC_0(&VAR_3->bp_port_pv, &VAR_3->bp_desg_pv) >= VAR_2)
  return (1);

 return (0);
}
