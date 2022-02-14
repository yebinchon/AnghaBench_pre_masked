
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_pcb {struct udp_pcb* next; } ;


 int FUNC_0 (struct udp_pcb*) ;
 struct udp_pcb* VAR_0 ;

void FUNC_1(void)
{
    struct udp_pcb *VAR_1 = VAR_0;

    while (VAR_1){
        FUNC_0(VAR_1);
        VAR_1 = VAR_1->next;
    }
}
