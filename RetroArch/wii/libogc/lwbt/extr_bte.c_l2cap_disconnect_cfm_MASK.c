
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct l2cap_pcb {int dummy; } ;
struct bte_pcb {int bdaddr; int cbarg; int (* disconn_cfm ) (int ,struct bte_pcb*,int ) ;scalar_t__ state; int err; int * ctl_pcb; int * data_pcb; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bte_pcb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int (*) (void*,struct l2cap_pcb*)) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct l2cap_pcb*) ;
 int FUNC_6 (int ,struct bte_pcb*,int ) ;

err_t FUNC_7(void *VAR_3, struct l2cap_pcb *VAR_4)
{
 struct bte_pcb *VAR_5 = (struct bte_pcb*)VAR_3;

 if(VAR_5==((void*)0)) return VAR_0;

 switch(FUNC_5(VAR_4)) {
  case 129:
   FUNC_4(VAR_5->ctl_pcb);
   VAR_5->ctl_pcb = ((void*)0);
   if(VAR_5->data_pcb!=((void*)0))
    FUNC_3(VAR_5->data_pcb,FUNC_7);
   break;
  case 128:
   FUNC_4(VAR_5->data_pcb);
   VAR_5->data_pcb = ((void*)0);
   if(VAR_5->ctl_pcb!=((void*)0))
    FUNC_3(VAR_5->ctl_pcb,FUNC_7);
   break;
 }
 if(VAR_5->data_pcb==((void*)0) && VAR_5->ctl_pcb==((void*)0)) {
  VAR_5->err = VAR_0;
  VAR_5->state = (u32)VAR_2;
  FUNC_0(VAR_5);
  if(VAR_5->disconn_cfm!=((void*)0)) VAR_5->disconn_cfm(VAR_5->cbarg,VAR_5,VAR_0);

  FUNC_1(((void*)0));
  FUNC_2(&(VAR_5->bdaddr),VAR_1);
 }

 return VAR_0;
}
