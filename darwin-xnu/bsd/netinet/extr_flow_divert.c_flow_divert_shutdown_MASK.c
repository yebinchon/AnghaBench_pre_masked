
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int FUNC_3 (struct flow_divert_pcb*,int ,int ) ;
 int FUNC_4 (struct socket*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_4)
{
 struct flow_divert_pcb *VAR_5 = VAR_4->so_fd_pcb;

 FUNC_1((VAR_4->so_flags & VAR_3) && VAR_4->so_fd_pcb != ((void*)0));

 FUNC_0(VAR_1, VAR_5, "Can't send more");

 FUNC_4(VAR_4);

 FUNC_3(VAR_5, VAR_2, VAR_0);
 FUNC_2(VAR_5);

 return 0;
}
