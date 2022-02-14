
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct tcpip_sock {TYPE_1__* pcb; } ;
typedef scalar_t__ s8_t ;
typedef int s32_t ;
struct TYPE_4__ {int flags; int snd_queuelen; int unacked; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct tcpip_sock* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,void const*,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*) ;

s32_t FUNC_5(s32_t VAR_2,const void *VAR_3,u32_t VAR_4)
{
 s8_t VAR_5;
 u16_t VAR_6,VAR_7;
 struct tcpip_sock *VAR_8;

 VAR_8 = FUNC_1(VAR_2);
 if(!VAR_8) return -1;


 while(VAR_4>0) {
  do {
   FUNC_0();
  } while((VAR_6=FUNC_2(VAR_8->pcb))==0);

  if(VAR_4>VAR_6) VAR_7 = VAR_6;
  else VAR_7 = VAR_4;

  VAR_5 = FUNC_3(VAR_8->pcb,VAR_3,VAR_7,1);
  if(VAR_5==VAR_0 && (!VAR_8->pcb->unacked || VAR_8->pcb->flags&VAR_1 || VAR_8->pcb->snd_queuelen>1))
   FUNC_4(VAR_8->pcb);

  VAR_3 = VAR_3+VAR_7;
  VAR_4 -= VAR_7;
 }
 return VAR_0;
}
