
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {TYPE_2__* tcp; TYPE_1__* udp; } ;
struct netconn {int type; int err; TYPE_3__ pcb; } ;
struct ip_addr {int dummy; } ;
typedef int err_t ;
struct TYPE_5__ {int remote_port; struct ip_addr remote_ip; } ;
struct TYPE_4__ {int flags; int remote_port; struct ip_addr remote_ip; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

__attribute__((used)) static err_t FUNC_0(struct netconn *VAR_3,struct ip_addr *VAR_4,u16 *VAR_5)
{
 switch(VAR_3->type) {
  case 132:
   return VAR_0;
  case 129:
  case 128:
  case 130:
   if(VAR_3->pcb.udp==((void*)0) || ((VAR_3->pcb.udp->flags&VAR_2)==0))
    return VAR_0;
   *VAR_4 = VAR_3->pcb.udp->remote_ip;
   *VAR_5 = VAR_3->pcb.udp->remote_port;
   break;
  case 131:
   if(VAR_3->pcb.tcp==((void*)0))
    return VAR_0;
   *VAR_4 = VAR_3->pcb.tcp->remote_ip;
   *VAR_5 = VAR_3->pcb.tcp->remote_port;
   break;
 }
 return (VAR_3->err = VAR_1);
}
