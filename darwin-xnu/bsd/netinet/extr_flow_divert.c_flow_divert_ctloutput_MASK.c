
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt {scalar_t__ sopt_name; scalar_t__ sopt_dir; } ;
struct socket {int so_flags; int so_traffic_class; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int flags; } ;
typedef int errno_t ;
struct TYPE_4__ {int (* pr_ctloutput ) (struct socket*,struct sockopt*) ;} ;
struct TYPE_3__ {int (* pr_ctloutput ) (struct socket*,struct sockopt*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct flow_divert_pcb*,int ) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct socket*,struct sockopt*) ;
 int FUNC_4 (struct socket*,struct sockopt*) ;

__attribute__((used)) static errno_t
FUNC_5(struct socket *VAR_8, struct sockopt *VAR_9)
{
 struct flow_divert_pcb *VAR_10 = VAR_8->so_fd_pcb;

 FUNC_1((VAR_8->so_flags & VAR_3) && VAR_8->so_fd_pcb != ((void*)0));

 if (VAR_9->sopt_name == VAR_5) {
  if (VAR_9->sopt_dir == VAR_4 && VAR_10->flags & VAR_0) {
   FUNC_2(VAR_10, VAR_8->so_traffic_class);
  }
 }

 if (FUNC_0(VAR_8) == VAR_1) {
  return VAR_7->pr_ctloutput(VAR_8, VAR_9);
 }





 return 0;
}
