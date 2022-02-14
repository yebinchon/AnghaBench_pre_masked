
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ bc; } ;
struct apimsg_msg {TYPE_4__* conn; TYPE_2__ msg; } ;
struct TYPE_9__ {scalar_t__ tcp; void* udp; int raw; } ;
struct TYPE_10__ {int type; int mbox; void* err; TYPE_3__ pcb; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 (void*,int ,TYPE_4__*) ;
 int FUNC_7 (void*,int ) ;

__attribute__((used)) static void FUNC_8(struct apimsg_msg *VAR_7)
{
 u32 VAR_8 = 0;

 if(VAR_7->conn->pcb.tcp) {
  FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_2);
  return;
 }

 VAR_7->conn->err = VAR_1;
 switch(VAR_7->conn->type) {
  case 132:
   VAR_7->conn->pcb.raw = FUNC_1(VAR_7->msg.bc.port);
   FUNC_2(VAR_7->conn->pcb.raw,VAR_5,VAR_7->conn);
   break;
  case 129:
   VAR_7->conn->pcb.udp = FUNC_5();
   if(!VAR_7->conn->pcb.udp) {
    VAR_7->conn->err = VAR_0;
    break;
   }
   FUNC_7(VAR_7->conn->pcb.udp,VAR_4);
   FUNC_6(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
   break;
  case 128:
   VAR_7->conn->pcb.udp = FUNC_5();
   if(!VAR_7->conn->pcb.udp) {
    VAR_7->conn->err = VAR_0;
    break;
   }
   FUNC_7(VAR_7->conn->pcb.udp,VAR_3);
   FUNC_6(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
   break;
  case 130:
   VAR_7->conn->pcb.udp = FUNC_5();
   if(!VAR_7->conn->pcb.udp) {
    VAR_7->conn->err = VAR_0;
    break;
   }
   FUNC_6(VAR_7->conn->pcb.udp,VAR_6,VAR_7->conn);
   break;
  case 131:
   VAR_7->conn->pcb.tcp = FUNC_4();
   if(!VAR_7->conn->pcb.tcp) {
    VAR_7->conn->err = VAR_0;
    break;
   }
   FUNC_3(VAR_7->conn);
   break;
  default:
   break;
 }
 FUNC_0(VAR_7->conn->mbox,&VAR_8,VAR_2);
}
