
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int p; } ;
struct apimsg_msg {TYPE_2__* conn; TYPE_3__ msg; } ;
struct TYPE_4__ {int udp; int raw; scalar_t__ tcp; } ;
struct TYPE_5__ {int type; int mbox; TYPE_1__ pcb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;





 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct apimsg_msg *VAR_1)
{
 u32 VAR_2 = 0;

 if(VAR_1->conn->pcb.tcp) {
  switch(VAR_1->conn->type) {
   case 132:
    FUNC_1(VAR_1->conn->pcb.raw,VAR_1->msg.p);
    break;
   case 129:
   case 128:
   case 130:
    FUNC_2(VAR_1->conn->pcb.udp,VAR_1->msg.p);
    break;
   case 131:
    break;
  }
 }
 FUNC_0(VAR_1->conn->mbox,&VAR_2,VAR_0);
}
