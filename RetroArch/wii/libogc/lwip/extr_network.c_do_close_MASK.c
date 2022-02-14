
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct apimsg_msg {TYPE_2__* conn; } ;
typedef int err_t ;
struct TYPE_7__ {int state; } ;
struct TYPE_5__ {TYPE_3__* tcp; } ;
struct TYPE_6__ {int type; int mbox; int err; TYPE_1__ pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;





 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct apimsg_msg *VAR_4)
{
 u32 VAR_5 = 0;
 err_t VAR_6 = VAR_1;

 if(VAR_4->conn->pcb.tcp) {
  switch(VAR_4->conn->type) {
   case 132:
   case 129:
   case 128:
   case 130:
    break;
   case 131:
    if(VAR_4->conn->pcb.tcp->state==VAR_2)
     VAR_6 = FUNC_1(VAR_4->conn->pcb.tcp);
    else if(VAR_4->conn->pcb.tcp->state==VAR_0)
     VAR_6 = FUNC_2(VAR_4->conn->pcb.tcp);
    VAR_4->conn->err = VAR_6;
    break;
   default:
    break;
  }
 }
 FUNC_0(VAR_4->conn->mbox,&VAR_5,VAR_3);
}
