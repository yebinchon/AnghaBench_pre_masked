
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int u32 ;
struct apimsg_msg {TYPE_11__* conn; } ;
struct TYPE_16__ {int state; } ;
struct TYPE_15__ {int * recv_arg; } ;
struct TYPE_14__ {TYPE_3__* tcp; TYPE_2__* udp; int raw; } ;
struct TYPE_13__ {int type; scalar_t__ mbox; int (* callback ) (TYPE_11__*,int ,int ) ;TYPE_1__ pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*,int ,int ) ;
 int FUNC_3 (TYPE_11__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *,int ) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_13(struct apimsg_msg *VAR_6)
{
 u32 VAR_7 = 0;

 if(VAR_6->conn->pcb.tcp) {
  switch(VAR_6->conn->type) {
   case 132:
    FUNC_1(VAR_6->conn->pcb.raw);
    break;
   case 129:
   case 128:
   case 130:
    VAR_6->conn->pcb.udp->recv_arg = ((void*)0);
    FUNC_12(VAR_6->conn->pcb.udp);
    break;
   case 131:
    if(VAR_6->conn->pcb.tcp->state==VAR_1) {
     FUNC_6(VAR_6->conn->pcb.tcp,((void*)0));
     FUNC_5(VAR_6->conn->pcb.tcp,((void*)0));
     FUNC_7(VAR_6->conn->pcb.tcp);
    } else {
     FUNC_6(VAR_6->conn->pcb.tcp,((void*)0));
     FUNC_11(VAR_6->conn->pcb.tcp,((void*)0));
     FUNC_10(VAR_6->conn->pcb.tcp,((void*)0));
     FUNC_9(VAR_6->conn->pcb.tcp,((void*)0),0);
     FUNC_8(VAR_6->conn->pcb.tcp,((void*)0));
     if(FUNC_7(VAR_6->conn->pcb.tcp)!=VAR_0)
      FUNC_4(VAR_6->conn->pcb.tcp);
    }
    break;
   default:
    break;
  }
 }
 if(VAR_6->conn->callback) {
  (*VAR_6->conn->callback)(VAR_6->conn,VAR_3,0);
  (*VAR_6->conn->callback)(VAR_6->conn,VAR_4,0);
 }
 if(VAR_6->conn->mbox!=VAR_5)
  FUNC_0(VAR_6->conn->mbox,&VAR_7,VAR_2);
}
