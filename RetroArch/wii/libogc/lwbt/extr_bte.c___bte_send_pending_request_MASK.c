
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl_req_t {int (* sent ) (int ,struct bte_pcb*,scalar_t__) ;int state; scalar_t__ err; struct ctrl_req_t* next; int p; } ;
struct bte_pcb {scalar_t__ state; int cmdq; int cbarg; struct ctrl_req_t* ctrl_req_head; int ctl_pcb; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct ctrl_req_t*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct bte_pcb*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct bte_pcb *VAR_7)
{
 s32 VAR_8;
 struct ctrl_req_t *VAR_9;

 if(VAR_7->ctrl_req_head==((void*)0)) return VAR_1;
 if(VAR_7->state==VAR_3 || VAR_7->state==VAR_2) return VAR_0;

 VAR_9 = VAR_7->ctrl_req_head;
 VAR_9->state = VAR_5;

 VAR_8 = FUNC_3(VAR_7->ctl_pcb,VAR_9->p);
 FUNC_2(VAR_9->p);

 if(VAR_8!=VAR_1) {
  VAR_7->ctrl_req_head = VAR_9->next;

  VAR_9->err = VAR_8;
  VAR_9->state = VAR_4;
  if(VAR_9->sent) {
   VAR_9->sent(VAR_7->cbarg,VAR_7,VAR_8);
   FUNC_1(&VAR_6,VAR_9);
  } else
   FUNC_0(VAR_7->cmdq);
 }

 return VAR_8;
}
