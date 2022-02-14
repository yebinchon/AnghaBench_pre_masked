
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_pcb {void* remote_port; void* recv_arg; struct udp_pcb* recv; struct udp_pcb* local_port; int flags; scalar_t__ next; } ;


 int FUNC_0 (struct udp_pcb*) ;
 int FUNC_1 (char*,struct udp_pcb*,...) ;

void FUNC_2(struct udp_pcb *VAR_0)
{
    FUNC_1("pcb=%p next=%p", VAR_0, (void*)VAR_0->next);
    FUNC_0(VAR_0);
    FUNC_1("flags=%x", VAR_0->flags);
    FUNC_1("local_port=%d remote_port=%d", VAR_0->local_port, VAR_0->remote_port);
    FUNC_1("recv cb=%p recv_arg=%p", VAR_0->recv, VAR_0->recv_arg);
}
