
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ctrl_req_t {TYPE_1__* pcb; struct ctrl_req_t* next; int state; int err; } ;
typedef int s32 ;
struct TYPE_2__ {struct ctrl_req_t* ctrl_req_tail; struct ctrl_req_t* ctrl_req_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static s32 FUNC_3(struct ctrl_req_t *VAR_3)
{
 s32 VAR_4;
 u32 VAR_5;

 VAR_3->next = ((void*)0);
 VAR_3->err = VAR_1;
 VAR_3->state = VAR_2;

 FUNC_0(VAR_5);
 if(VAR_3->pcb->ctrl_req_head==((void*)0)) {
  VAR_3->pcb->ctrl_req_head = VAR_3->pcb->ctrl_req_tail = VAR_3;
  VAR_4 = FUNC_2(VAR_3->pcb);
 } else {
  VAR_3->pcb->ctrl_req_tail->next = VAR_3;
  VAR_3->pcb->ctrl_req_tail = VAR_3;
  VAR_4 = VAR_0;
 }
 FUNC_1(VAR_5);

 return VAR_4;
}
