
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct l2cap_pcb {int dummy; } ;
struct bte_pcb {scalar_t__ err; int cbarg; int (* conn_cfm ) (int ,struct bte_pcb*,scalar_t__) ;scalar_t__ state; struct l2cap_pcb* ctl_pcb; struct l2cap_pcb* data_pcb; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct l2cap_pcb*) ;
 int FUNC_1 (struct l2cap_pcb*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct l2cap_pcb*) ;
 int FUNC_3 (struct l2cap_pcb*,int ) ;
 int FUNC_4 (int ,struct bte_pcb*,scalar_t__) ;
 int FUNC_5 (int ,struct bte_pcb*,scalar_t__) ;

err_t FUNC_6(void *VAR_5,struct l2cap_pcb *VAR_6,err_t VAR_7)
{
 struct bte_pcb *VAR_8 = (struct bte_pcb*)VAR_5;


 if(VAR_7==VAR_1) {
  FUNC_3(VAR_6,VAR_3);
  FUNC_1(VAR_6,VAR_4);
  switch(FUNC_2(VAR_6)) {
   case 129:
    VAR_8->ctl_pcb = VAR_6;
    break;
   case 128:
    VAR_8->data_pcb = VAR_6;
    break;
  }
  if(VAR_8->data_pcb && VAR_8->ctl_pcb) {
   VAR_8->err = VAR_1;
   VAR_8->state = (u32)VAR_2;
   if(VAR_8->conn_cfm) VAR_8->conn_cfm(VAR_8->cbarg,VAR_8,VAR_1);
  }
 } else {
  FUNC_0(VAR_6);
  VAR_8->err = VAR_0;
  VAR_8->conn_cfm(VAR_8->cbarg,VAR_8,VAR_0);
 }

 return VAR_1;
}
