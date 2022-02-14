
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct TYPE_2__ {struct tcp_pcb* tcp; } ;
struct netconn {TYPE_1__ pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tcp_pcb*,struct netconn*) ;
 int FUNC_1 (struct tcp_pcb*,int ) ;
 int FUNC_2 (struct tcp_pcb*,int ,int) ;
 int FUNC_3 (struct tcp_pcb*,int ) ;
 int FUNC_4 (struct tcp_pcb*,int ) ;

__attribute__((used)) static void FUNC_5(struct netconn *VAR_4)
{
 struct tcp_pcb *VAR_5 = VAR_4->pcb.tcp;

 FUNC_0(VAR_5,VAR_4);
 FUNC_3(VAR_5,VAR_2);
 FUNC_4(VAR_5,VAR_3);
 FUNC_2(VAR_5,VAR_1,4);
 FUNC_1(VAR_5,VAR_0);
}
