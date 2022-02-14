
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
struct tcpip_sock {int * pcb; } ;
typedef int s32_t ;


 int VAR_0 ;
 struct tcpip_sock* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;

s32_t FUNC_3(s32_t VAR_1,u32_t VAR_2)
{
 struct tcpip_sock *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if(!VAR_3) return -1;

 VAR_3->pcb = FUNC_2(VAR_3->pcb);
 if(VAR_3->pcb==((void*)0)) return -1;

 FUNC_1(VAR_3->pcb,VAR_0);

 return 0;
}
