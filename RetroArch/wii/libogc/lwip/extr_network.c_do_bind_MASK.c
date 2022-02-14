
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
struct apimsg_msg {TYPE_4__* conn; TYPE_3__ msg; } ;
struct TYPE_7__ {int * tcp; void* udp; int raw; } ;
struct TYPE_10__ {int type; int mbox; TYPE_1__ pcb; int err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (void*,int ,int ) ;
 void* FUNC_8 () ;
 int FUNC_9 (void*,int ,TYPE_4__*) ;
 int FUNC_10 (void*,int ) ;

__attribute__((used)) static void FUNC_11(struct apimsg_msg *VAR_5)
{
 u32 VAR_6 = 0;

 if(VAR_5->conn->pcb.tcp==((void*)0)) {
  switch(VAR_5->conn->type) {
   case 132:
    VAR_5->conn->pcb.raw = FUNC_2(VAR_5->msg.bc.port);
    FUNC_3(VAR_5->conn->pcb.raw,VAR_3,VAR_5->conn);
    break;
   case 129:
    VAR_5->conn->pcb.udp = FUNC_8();
    FUNC_10(VAR_5->conn->pcb.udp,VAR_2);
    FUNC_9(VAR_5->conn->pcb.udp,VAR_4,VAR_5->conn);
    break;
   case 128:
    VAR_5->conn->pcb.udp = FUNC_8();
    FUNC_10(VAR_5->conn->pcb.udp,VAR_1);
    FUNC_9(VAR_5->conn->pcb.udp,VAR_4,VAR_5->conn);
    break;
   case 130:
    VAR_5->conn->pcb.udp = FUNC_8();
    FUNC_9(VAR_5->conn->pcb.udp,VAR_4,VAR_5->conn);
    break;
   case 131:
    VAR_5->conn->pcb.tcp = FUNC_6();
    FUNC_4(VAR_5->conn);
    break;
   default:
    break;
  }
 }
 switch(VAR_5->conn->type) {
  case 132:
   VAR_5->conn->err = FUNC_1(VAR_5->conn->pcb.raw,VAR_5->msg.bc.ipaddr);
   break;
  case 129:
  case 128:
  case 130:
   VAR_5->conn->err = FUNC_7(VAR_5->conn->pcb.udp,VAR_5->msg.bc.ipaddr,VAR_5->msg.bc.port);
   break;
  case 131:
   VAR_5->conn->err = FUNC_5(VAR_5->conn->pcb.tcp,VAR_5->msg.bc.ipaddr,VAR_5->msg.bc.port);
   break;
  default:
   break;
 }
 FUNC_0(VAR_5->conn->mbox,&VAR_6,VAR_0);
}
