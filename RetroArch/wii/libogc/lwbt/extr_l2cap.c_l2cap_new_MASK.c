
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int outmtu; int influshto; int outflushto; int * opt; int cfgto; int inmtu; } ;
struct l2cap_pcb {TYPE_1__ cfg; int state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct l2cap_pcb* FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct l2cap_pcb*,int ,int) ;

struct l2cap_pcb* FUNC_3(void)
{
 struct l2cap_pcb *VAR_4;

 VAR_4 = FUNC_1(&VAR_3);
 if(VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4, 0, sizeof(struct l2cap_pcb));
  VAR_4->state = VAR_1;




  VAR_4->cfg.inmtu = VAR_2;
  VAR_4->cfg.outmtu = 672;





  VAR_4->cfg.influshto = 0xFFFF;
  VAR_4->cfg.outflushto = 0xFFFF;

  VAR_4->cfg.cfgto = VAR_0;

  VAR_4->cfg.opt = ((void*)0);
  return VAR_4;
 }
 FUNC_0("l2cap_new: Could not allocate memory for pcb\n");
 return ((void*)0);
}
