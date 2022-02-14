
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int port; int ipaddr; } ;
struct TYPE_9__ {TYPE_2__ bc; } ;
struct apimsg_msg {TYPE_3__ msg; TYPE_4__* conn; } ;
struct TYPE_7__ {int tcp; void* udp; int raw; } ;
struct TYPE_10__ {int type; TYPE_1__ pcb; int mbox; void* err; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (void*,int ,int ) ;
 void* FUNC_8 () ;
 int FUNC_9 (void*,int ,TYPE_4__*) ;
 int FUNC_10 (void*,int ) ;

__attribute__((used)) static void FUNC_11(struct apimsg_msg *VAR_7)
{
 u32 VAR_8 = 0;

 if(!VAR_7->conn->pcb.tcp) {
  switch(VAR_7->conn->type) {
   case 132:
    VAR_7->conn->pcb.raw = FUNC_2(VAR_7->msg.bc.port);
    FUNC_3(VAR_7->conn->pcb.raw,VAR_5,VAR_7->conn);
    break;
   case 129:
    VAR_7->conn->pcb.udp = FUNC_8();
    if(!VAR_7->conn->pcb.udp) {
     VAR_7->conn->err = VAR_0;
     FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
     return;
    }
    FUNC_10(VAR_7->conn->pcb.udp,VAR_3);
    FUNC_9(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
    break;
   case 128:
    VAR_7->conn->pcb.udp = FUNC_8();
    if(!VAR_7->conn->pcb.udp) {
     VAR_7->conn->err = VAR_0;
     FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
     return;
    }
    FUNC_10(VAR_7->conn->pcb.udp,VAR_2);
    FUNC_9(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
    break;
   case 130:
    VAR_7->conn->pcb.udp = FUNC_8();
    if(!VAR_7->conn->pcb.udp) {
     VAR_7->conn->err = VAR_0;
     FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
     return;
    }
    FUNC_9(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
    break;
   case 131:
    VAR_7->conn->pcb.tcp = FUNC_6();
    if(!VAR_7->conn->pcb.tcp) {
     VAR_7->conn->err = VAR_0;
     FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
     return;
    }
    break;
   default:
    break;
  }
 }
 switch(VAR_7->conn->type) {
  case 132:
   FUNC_1(VAR_7->conn->pcb.raw,VAR_7->msg.bc.ipaddr);
   FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
   break;
  case 129:
  case 128:
  case 130:
   FUNC_7(VAR_7->conn->pcb.udp,VAR_7->msg.bc.ipaddr,VAR_7->msg.bc.port);
   FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_1);
   break;
  case 131:
   FUNC_4(VAR_7->conn);
   FUNC_5(VAR_7->conn->pcb.tcp,VAR_7->msg.bc.ipaddr,VAR_7->msg.bc.port,VAR_4);
   break;
  default:
   break;
 }
}
