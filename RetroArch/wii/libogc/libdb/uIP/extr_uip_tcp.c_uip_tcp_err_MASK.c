
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {void (* errf ) (void*,VAR_0) ;} ;



void FUNC_0(struct uip_tcp_pcb *VAR_1,void (*VAR_2)(void *,VAR_3))
{
 VAR_1->errf = VAR_2;
}
