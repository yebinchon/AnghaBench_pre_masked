
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; int so_rcv; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct flow_divert_pcb*) ;
 int FUNC_4 (struct flow_divert_pcb*,int ) ;
 int FUNC_5 (struct flow_divert_pcb*) ;
 int FUNC_6 (struct flow_divert_pcb*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_6)
{
 struct flow_divert_pcb *VAR_7 = VAR_6->so_fd_pcb;

 FUNC_2((VAR_6->so_flags & VAR_4) && VAR_6->so_fd_pcb != ((void*)0));

 FUNC_0(VAR_1, VAR_7, "Closing");

 if (FUNC_1(VAR_6) == VAR_3) {
  FUNC_8(VAR_6);
  FUNC_7(&VAR_6->so_rcv);
 }

 FUNC_4(VAR_7, VAR_5);
 FUNC_6(VAR_7, VAR_2, VAR_0);
 FUNC_5(VAR_7);


 FUNC_3(VAR_7);

 return 0;
}
