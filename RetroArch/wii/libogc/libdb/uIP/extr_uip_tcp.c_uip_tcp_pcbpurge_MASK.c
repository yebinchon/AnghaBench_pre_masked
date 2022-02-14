
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {scalar_t__ state; int * ooseq; int * unacked; int * unsent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct uip_tcp_pcb *VAR_3)
{
 if(VAR_3->state!=VAR_0 &&
  VAR_3->state!=VAR_2 &&
  VAR_3->state!=VAR_1) {
  FUNC_0(VAR_3->ooseq);
  FUNC_0(VAR_3->unsent);
  FUNC_0(VAR_3->unacked);
  VAR_3->unsent = VAR_3->unacked = VAR_3->ooseq = ((void*)0);
 }
}
