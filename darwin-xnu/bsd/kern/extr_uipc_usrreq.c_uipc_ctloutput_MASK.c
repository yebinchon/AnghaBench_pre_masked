
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {int unp_flags; TYPE_1__* unp_conn; int unp_peercred; } ;
struct sockopt {int sopt_dir; int const sopt_name; } ;
struct socket {int so_flags; int last_uuid; int e_uuid; int last_pid; int e_pid; int so_type; } ;
typedef int pid_t ;
typedef int peerpid ;
struct TYPE_2__ {struct socket* unp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct sockopt*,int *,int) ;
 struct unpcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*,struct socket*) ;

int
FUNC_5(struct socket *VAR_6, struct sockopt *VAR_7)
{
 struct unpcb *VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = 0;
 pid_t VAR_10;
 struct socket *VAR_11;

 switch (VAR_7->sopt_dir) {
 case 129:
  switch (VAR_7->sopt_name) {
  case 134:
   if (VAR_8->unp_flags & VAR_5) {
    VAR_9 = FUNC_2(VAR_7, &VAR_8->unp_peercred,
        sizeof (VAR_8->unp_peercred));
   } else {
    if (VAR_6->so_type == VAR_3)
     VAR_9 = VAR_1;
    else
     VAR_9 = VAR_0;
   }
   break;
  case 131:
  case 133:
   if (VAR_8->unp_conn == ((void*)0)) {
    VAR_9 = VAR_1;
    break;
   }
   VAR_11 = VAR_8->unp_conn->unp_socket;
   if (VAR_11 == ((void*)0))
    FUNC_0("peer is connected but has no socket?");
   FUNC_4(VAR_6, VAR_11);
   if (VAR_7->sopt_name == 133 &&
       VAR_11->so_flags & VAR_4)
    VAR_10 = VAR_11->e_pid;
   else
    VAR_10 = VAR_11->last_pid;
   FUNC_1(VAR_11, 1);
   VAR_9 = FUNC_2(VAR_7, &VAR_10, sizeof (VAR_10));
   break;
  case 130:
  case 132:
   if (VAR_8->unp_conn == ((void*)0)) {
    VAR_9 = VAR_1;
    break;
   }
   VAR_11 = VAR_8->unp_conn->unp_socket;
   if (VAR_11 == ((void*)0))
    FUNC_0("peer is connected but has no socket?");
   FUNC_4(VAR_6, VAR_11);
   if (VAR_7->sopt_name == 132 &&
       VAR_11->so_flags & VAR_4)
    VAR_9 = FUNC_2(VAR_7, &VAR_11->e_uuid,
        sizeof (VAR_11->e_uuid));
   else
    VAR_9 = FUNC_2(VAR_7, &VAR_11->last_uuid,
        sizeof (VAR_11->last_uuid));
   FUNC_1(VAR_11, 1);
   break;
  default:
   VAR_9 = VAR_2;
   break;
  }
  break;
 case 128:
 default:
  VAR_9 = VAR_2;
  break;
 }

 return (VAR_9);
}
