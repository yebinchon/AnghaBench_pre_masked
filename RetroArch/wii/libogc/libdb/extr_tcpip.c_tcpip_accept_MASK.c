
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpip_sock {int dummy; } ;
typedef int s32_t ;
struct TYPE_2__ {int socket; struct TYPE_2__* next; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 struct tcpip_sock* FUNC_1 (int) ;

s32_t FUNC_2(s32_t VAR_1)
{
 s32_t VAR_2 = -1;
 struct tcpip_sock *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if(VAR_3==((void*)0)) return -1;

 do {
  FUNC_0();
 } while(!VAR_0);

 VAR_2 = VAR_0->socket;
 VAR_0 = VAR_0->next;

 return VAR_2;
}
