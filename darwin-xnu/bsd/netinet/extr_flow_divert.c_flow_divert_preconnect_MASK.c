
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int flags; int * connect_packet; } ;
typedef int * mbuf_t ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct flow_divert_pcb*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_3)
{
 struct flow_divert_pcb *VAR_4 = VAR_3->so_fd_pcb;
 int VAR_5 = 0;

 if (!(VAR_4->flags & VAR_0) && VAR_4->connect_packet != ((void*)0)) {
  FUNC_0(VAR_1, VAR_4, "Pre-connect read: sending saved connect packet");
  mbuf_t VAR_6 = VAR_4->connect_packet;
  VAR_4->connect_packet = ((void*)0);

  VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_2);
  if (VAR_5) {
   FUNC_2(VAR_6);
  }

  VAR_4->flags |= VAR_0;
 }

 FUNC_3(VAR_3);

 return VAR_5;
}
