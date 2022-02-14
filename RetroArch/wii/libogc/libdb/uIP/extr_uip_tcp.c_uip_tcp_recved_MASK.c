
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int u16_t ;
struct uip_tcp_pcb {int rcv_wnd; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uip_tcp_pcb*) ;
 int FUNC_1 (struct uip_tcp_pcb*) ;

void FUNC_2(struct uip_tcp_pcb *VAR_3,u16_t VAR_4)
{
 if((u32_t)VAR_3->rcv_wnd+VAR_4>VAR_0) VAR_3->rcv_wnd = VAR_0;
 else VAR_3->rcv_wnd += VAR_4;

 if(!(VAR_3->flags&VAR_1) && !(VAR_3->flags&VAR_2)) {
  FUNC_0(VAR_3);
 } else if(VAR_3->flags&VAR_1 && VAR_3->rcv_wnd>=VAR_0/2) {
  FUNC_1(VAR_3);
 }
}
