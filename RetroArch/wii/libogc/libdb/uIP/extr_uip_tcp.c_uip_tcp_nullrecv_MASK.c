
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {int dummy; } ;
struct uip_pbuf {int dummy; } ;
typedef scalar_t__ s8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uip_pbuf*) ;
 scalar_t__ FUNC_1 (struct uip_tcp_pcb*) ;

__attribute__((used)) static s8_t FUNC_2(void *VAR_1,struct uip_tcp_pcb *VAR_2,struct uip_pbuf *VAR_3,s8_t VAR_4)
{
 if(VAR_3!=((void*)0)) FUNC_0(VAR_3);
 else if(VAR_4==VAR_0) return FUNC_1(VAR_2);

 return VAR_0;
}
