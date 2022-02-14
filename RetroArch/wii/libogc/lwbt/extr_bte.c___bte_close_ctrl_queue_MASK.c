
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl_req_t {struct ctrl_req_t* next; int (* sent ) (int ,struct bte_pcb*,int ) ;int state; int err; } ;
struct bte_pcb {int * ctrl_req_tail; struct ctrl_req_t* ctrl_req_head; int cmdq; int cbarg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct ctrl_req_t*) ;
 int FUNC_2 (int ,struct bte_pcb*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct bte_pcb *VAR_3)
{
 struct ctrl_req_t *VAR_4;

 while(VAR_3->ctrl_req_head!=((void*)0)) {
  VAR_4 = VAR_3->ctrl_req_head;
  VAR_4->err = VAR_0;
  VAR_4->state = VAR_1;
  if(VAR_4->sent!=((void*)0)) {
   VAR_4->sent(VAR_3->cbarg,VAR_3,VAR_0);
   FUNC_1(&VAR_2,VAR_4);
  } else
   FUNC_0(VAR_3->cmdq);

  VAR_3->ctrl_req_head = VAR_4->next;
 }
 VAR_3->ctrl_req_tail = ((void*)0);
}
