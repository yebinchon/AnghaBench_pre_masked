
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpip_sock {int * pcb; } ;
typedef int s32_t ;


 struct tcpip_sock* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(s32_t VAR_0)
{
 struct tcpip_sock *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if(VAR_1==((void*)0)) return;

 FUNC_1(VAR_1->pcb);
 VAR_1->pcb = ((void*)0);
}
