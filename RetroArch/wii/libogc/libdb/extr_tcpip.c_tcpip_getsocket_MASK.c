
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpip_sock {int pcb; } ;
typedef size_t s32_t ;


 size_t VAR_0 ;
 struct tcpip_sock* VAR_1 ;

__attribute__((used)) static struct tcpip_sock* FUNC_0(s32_t VAR_2)
{
 struct tcpip_sock *VAR_3;

 if(VAR_2<0 || VAR_2>=VAR_0) return ((void*)0);

 VAR_3 = &VAR_1[VAR_2];
 if(!VAR_3->pcb) return ((void*)0);

 return VAR_3;
}
