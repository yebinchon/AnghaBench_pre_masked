
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_tcp_pcb_listen {int accept; int local_ip; int tos; int ttl; int so_options; scalar_t__ state; int local_port; int cb_arg; } ;
struct uip_tcp_pcb {scalar_t__ state; int local_ip; int tos; int ttl; int so_options; int local_port; int cb_arg; } ;
struct TYPE_2__ {int listen_pcbs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct uip_tcp_pcb_listen*) ;
 int FUNC_1 (int *,int *) ;
 struct uip_tcp_pcb_listen* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct uip_tcp_pcb*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct uip_tcp_pcb* FUNC_4(struct uip_tcp_pcb *VAR_6)
{
 struct uip_tcp_pcb_listen *VAR_7;

 if(VAR_6->state==VAR_0) return VAR_6;

 VAR_7 = FUNC_2(&VAR_2);
 if(VAR_7==((void*)0)) return ((void*)0);

 VAR_7->cb_arg = VAR_6->cb_arg;
 VAR_7->local_port = VAR_6->local_port;
 VAR_7->state = VAR_0;
 VAR_7->so_options = VAR_6->so_options;
 VAR_7->so_options |= VAR_1;
 VAR_7->ttl = VAR_6->ttl;
 VAR_7->tos = VAR_6->tos;
 FUNC_1(&VAR_7->local_ip,&VAR_6->local_ip);

 FUNC_3(&VAR_5,VAR_6);

 VAR_7->accept = VAR_4;

 FUNC_0(&VAR_3.listen_pcbs,VAR_7);
 return (struct uip_tcp_pcb*)VAR_7;
}
