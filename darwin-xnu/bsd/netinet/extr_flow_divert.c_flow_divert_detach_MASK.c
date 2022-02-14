
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int * so; int * group; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct flow_divert_pcb*) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*,int ) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int FUNC_3 (struct flow_divert_pcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct flow_divert_pcb*) ;
 int FUNC_6 (struct flow_divert_pcb*,int ) ;
 int FUNC_7 (struct flow_divert_pcb*) ;
 int FUNC_8 (struct flow_divert_pcb*,int ,int ) ;
 int FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (struct socket*,int ) ;

void
FUNC_11(struct socket *VAR_5)
{
 struct flow_divert_pcb *VAR_6 = VAR_5->so_fd_pcb;

 FUNC_4((VAR_5->so_flags & VAR_3) && VAR_5->so_fd_pcb != ((void*)0));

 VAR_5->so_flags &= ~VAR_3;
 VAR_5->so_fd_pcb = ((void*)0);

 FUNC_1(VAR_1, VAR_6, "Detaching, ref count = %d", VAR_6->ref_count);

 if (VAR_6->group != ((void*)0)) {

  FUNC_6(VAR_6, VAR_4);

  FUNC_8(VAR_6, VAR_2, VAR_0);
  FUNC_7(VAR_6);

  FUNC_5(VAR_6);
 }

 FUNC_10(VAR_5, 0);
 FUNC_0(VAR_6);
 VAR_6->so = ((void*)0);
 FUNC_3(VAR_6);
 FUNC_9(VAR_5, 0);

 FUNC_2(VAR_6);
}
