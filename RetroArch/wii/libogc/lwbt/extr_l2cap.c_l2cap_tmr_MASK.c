
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_sig {scalar_t__ rtx; scalar_t__ nrtx; scalar_t__ ertx; struct l2cap_sig* next; } ;
struct TYPE_2__ {int outflushto; scalar_t__ cfgto; int l2capcfg; } ;
struct l2cap_pcb {scalar_t__ state; TYPE_1__ cfg; struct l2cap_sig* unrsp_sigs; struct l2cap_pcb* next; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct l2cap_pcb*,int ,int,int ) ;
 int FUNC_1 (struct l2cap_pcb*,int ,int ) ;
 int FUNC_2 (struct l2cap_pcb*,int ,int ) ;
 int FUNC_3 (struct l2cap_pcb*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct l2cap_pcb*,int *) ;
 struct l2cap_pcb* VAR_7 ;
 int FUNC_6 (struct l2cap_pcb*,struct l2cap_sig*) ;

void FUNC_7()
{
 struct l2cap_sig *VAR_8;
 struct l2cap_pcb *VAR_9;
 err_t VAR_10;

 (void) VAR_10;


 for(VAR_9 = VAR_7; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {

  for(VAR_8 = VAR_9->unrsp_sigs; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {

   if(VAR_9->cfg.outflushto < 0xFFFF) {

    if(VAR_8->rtx > 0) {

     --VAR_8->rtx;

     if(VAR_8->rtx == 0) {
      if(VAR_8->nrtx == 0) {

       VAR_9->state = VAR_3;

       FUNC_4("l2cap_tmr: Max number of retransmissions (rtx) has expired\n");
       FUNC_2(VAR_9,VAR_0,VAR_10);
      } else {
       --VAR_8->nrtx;

       FUNC_3(VAR_9,VAR_0,VAR_10);

       VAR_8->rtx += VAR_8->rtx;
       VAR_10 = FUNC_6(VAR_9, VAR_8);
      }
     }
    } else {

     --VAR_8->ertx;

     if(VAR_8->ertx == 0) {
      if(VAR_8->nrtx == 0) {

       VAR_9->state = VAR_3;

       FUNC_4("l2cap_tmr: Max number of retransmissions (ertx) has expired\n");
       FUNC_2(VAR_9,VAR_0,VAR_10);
      } else {
       --VAR_8->nrtx;

       FUNC_3(VAR_9,VAR_0,VAR_10);

       VAR_8->ertx = 0;
       VAR_8->rtx = VAR_6;
       VAR_10 = FUNC_6(VAR_9, VAR_8);
      }
     }
    }
   }
  }


  if(VAR_9->state == VAR_4) {

   if(VAR_9->cfg.cfgto > 0) {
    --VAR_9->cfg.cfgto;


    if(VAR_9->cfg.cfgto == 0) {

     FUNC_5(VAR_9, ((void*)0));

     if(VAR_9->cfg.l2capcfg & VAR_1) {
      FUNC_0(VAR_9, VAR_5, 0x0000, VAR_10);
     } else {
      FUNC_1(VAR_9, VAR_0, VAR_10);
     }
     VAR_9->cfg.cfgto = VAR_2;
    }
   }
  }
 }
}
