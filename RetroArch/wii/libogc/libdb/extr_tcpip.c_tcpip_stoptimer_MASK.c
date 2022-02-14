
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpip_sock {scalar_t__ pcb; } ;
typedef int s32_t ;


 struct tcpip_sock* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(s32_t VAR_3)
{
 struct tcpip_sock *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if(!VAR_4) return;

 if(VAR_0 && VAR_4->pcb && (VAR_1 || VAR_2)) VAR_0 = 0;
}
