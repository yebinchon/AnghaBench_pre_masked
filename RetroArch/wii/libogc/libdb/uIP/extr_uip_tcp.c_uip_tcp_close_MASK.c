
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_tcp_pcb {int state; } ;
typedef scalar_t__ s8_t ;
struct TYPE_2__ {int pcbs; } ;




 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,struct uip_tcp_pcb*) ;
 int VAR_4 ;
 struct uip_tcp_pcb* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct uip_tcp_pcb**,struct uip_tcp_pcb*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct uip_tcp_pcb*,int ) ;
 int FUNC_3 (struct uip_tcp_pcb*) ;

s8_t FUNC_4(struct uip_tcp_pcb *VAR_8)
{
 s8_t VAR_9;

 switch(VAR_8->state) {
  case 133:
   VAR_9 = VAR_0;
   FUNC_0(&VAR_7,VAR_8);
   VAR_8 = ((void*)0);
   break;
  case 130:
   VAR_9 = VAR_0;
   FUNC_1((struct uip_tcp_pcb**)&VAR_6.pcbs,VAR_8);
   FUNC_0(&VAR_4,VAR_8);
   VAR_8 = ((void*)0);
   break;
  case 128:
   VAR_9 = VAR_0;
   FUNC_1(&VAR_5,VAR_8);
   FUNC_0(&VAR_7,VAR_8);
   VAR_8 = ((void*)0);
   break;
  case 129:
  case 131:
   VAR_9 = FUNC_2(VAR_8,VAR_3);
   if(VAR_9==VAR_0) VAR_8->state = VAR_1;
   break;
  case 132:
   VAR_9 = FUNC_2(VAR_8,VAR_3);
   if(VAR_9==VAR_0) VAR_8->state = VAR_2;
   break;
  default:
   VAR_9 = VAR_0;
   VAR_8 = ((void*)0);
   break;
 }
 if(VAR_8!=((void*)0) && VAR_9==VAR_0) FUNC_3(VAR_8);

 return VAR_9;
}
