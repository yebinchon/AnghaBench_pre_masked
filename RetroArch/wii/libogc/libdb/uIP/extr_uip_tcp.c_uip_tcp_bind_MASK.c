
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16_t ;
struct uip_ip_addr {int dummy; } ;
struct uip_tcp_pcb {scalar_t__ local_port; struct uip_ip_addr local_ip; struct uip_tcp_pcb* next; } ;
typedef int s8_t ;
struct TYPE_2__ {scalar_t__ pcbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uip_ip_addr*,struct uip_ip_addr*) ;
 scalar_t__ FUNC_1 (struct uip_ip_addr*) ;
 struct uip_tcp_pcb* VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 () ;

s8_t FUNC_3(struct uip_tcp_pcb *VAR_4,struct uip_ip_addr *VAR_5,u16_t VAR_6)
{
 struct uip_tcp_pcb *VAR_7;

 if(VAR_6==0) VAR_6 = FUNC_2();

 for(VAR_7=(struct uip_tcp_pcb*)VAR_3.pcbs;VAR_7!=((void*)0);VAR_7=VAR_7->next) {
  if(VAR_7->local_port==VAR_6) {
   if(FUNC_1(&VAR_7->local_ip) ||
    FUNC_1(VAR_5) ||
    FUNC_0(&VAR_7->local_ip,VAR_5)) return VAR_1;
  }
 }

 for(VAR_7=VAR_2;VAR_7!=((void*)0);VAR_7=VAR_7->next) {
  if(VAR_7->local_port==VAR_6) {
   if(FUNC_1(&VAR_7->local_ip) ||
    FUNC_1(VAR_5) ||
    FUNC_0(&VAR_7->local_ip,VAR_5)) return VAR_1;
  }
 }

 if(!FUNC_1(VAR_5)) VAR_4->local_ip = *VAR_5;
 VAR_4->local_port = VAR_6;

 return VAR_0;
}
