
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct uip_tcp_pcb {scalar_t__ state; } ;
typedef int s8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct uip_tcp_pcb*,void*,scalar_t__,int ,int ,int *,int ) ;

s8_t FUNC_1(struct uip_tcp_pcb *VAR_6,const void *VAR_7,u16_t VAR_8,u8_t VAR_9)
{
 if(VAR_6->state==VAR_3 || VAR_6->state==VAR_0 ||
  VAR_6->state==VAR_5 || VAR_6->state==VAR_4) {
  if(VAR_8>0) {
   return FUNC_0(VAR_6,(void*)VAR_7,VAR_8,0,VAR_9,((void*)0),0);
  }
  return VAR_2;
 }
 return VAR_1;
}
