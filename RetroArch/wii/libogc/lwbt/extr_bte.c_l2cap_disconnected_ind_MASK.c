
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct l2cap_pcb {int dummy; } ;
struct bte_pcb {int cbarg; int (* disconn_cfm ) (int ,struct bte_pcb*,int ) ;void* state; int err; int * ctl_pcb; int * data_pcb; } ;
typedef int err_t ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bte_pcb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct l2cap_pcb*) ;
 int FUNC_3 (int ,struct bte_pcb*,int ) ;

err_t FUNC_4(void *VAR_3, struct l2cap_pcb *VAR_4, err_t VAR_5)
{
 struct bte_pcb *VAR_6 = (struct bte_pcb*)VAR_3;

 if(VAR_6==((void*)0)) return VAR_0;

 VAR_6->state = (u32)VAR_2;
 switch(FUNC_2(VAR_4)) {
  case 129:
   FUNC_1(VAR_6->ctl_pcb);
   VAR_6->ctl_pcb = ((void*)0);
   break;
  case 128:
   FUNC_1(VAR_6->data_pcb);
   VAR_6->data_pcb = ((void*)0);
   break;
 }
 if(VAR_6->data_pcb==((void*)0) && VAR_6->ctl_pcb==((void*)0)) {
  VAR_6->err = VAR_0;
  VAR_6->state = (u32)VAR_1;
  FUNC_0(VAR_6);
  if(VAR_6->disconn_cfm!=((void*)0)) VAR_6->disconn_cfm(VAR_6->cbarg,VAR_6,VAR_0);
 }
 return VAR_0;
}
