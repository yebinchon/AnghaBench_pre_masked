
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {scalar_t__ rcv_nxt; } ;
typedef int s8_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct uip_tcp_pcb*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct uip_tcp_pcb*) ;

__attribute__((used)) static s8_t FUNC_3(struct uip_tcp_pcb *VAR_2)
{
 if(FUNC_0(VAR_0+VAR_1,VAR_2->rcv_nxt)) VAR_2->rcv_nxt = VAR_0+VAR_1;
 if(VAR_1>0) {
  FUNC_1(VAR_2);
 }

 return FUNC_2(VAR_2);
}
