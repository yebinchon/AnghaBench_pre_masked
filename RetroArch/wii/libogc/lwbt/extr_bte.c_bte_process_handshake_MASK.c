
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct ctrl_req_t {int (* sent ) (int ,struct bte_pcb*,int ) ;int state; int err; struct ctrl_req_t* next; } ;
struct bte_pcb {int cmdq; int cbarg; struct ctrl_req_t* ctrl_req_head; } ;


 int VAR_0 ;







 int FUNC_0 (char*,struct bte_pcb*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bte_pcb*) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct ctrl_req_t*) ;
 int FUNC_4 (int ,struct bte_pcb*,int ) ;

__attribute__((used)) static void FUNC_5(struct bte_pcb *VAR_3,u8_t VAR_4,void *VAR_5,u16_t VAR_6)
{
 struct ctrl_req_t *VAR_7;

 FUNC_0("bte_process_handshake(%p)\n",VAR_3);

 switch(VAR_4) {
  case 129:
   VAR_7 = VAR_3->ctrl_req_head;
   VAR_3->ctrl_req_head = VAR_7->next;

   VAR_7->err = VAR_0;
   VAR_7->state = VAR_1;
   if(VAR_7->sent) {
    VAR_7->sent(VAR_3->cbarg,VAR_3,VAR_0);
    FUNC_3(&VAR_2,VAR_7);
   } else
    FUNC_1(VAR_3->cmdq);

   FUNC_2(VAR_3);
   break;
  case 131:
  case 133:
  case 130:
  case 132:
  case 128:
   break;
  case 134:
   break;
  default:
   break;
 }
}
