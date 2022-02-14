
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct apimsg_msg {TYPE_2__* conn; } ;
struct TYPE_3__ {int udp; } ;
struct TYPE_4__ {int type; int mbox; TYPE_1__ pcb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;





 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct apimsg_msg *VAR_1)
{
 u32 VAR_2 = 0;

 switch(VAR_1->conn->type) {
  case 132:
   break;
  case 129:
  case 128:
  case 130:
   FUNC_1(VAR_1->conn->pcb.udp);
   break;
  case 131:
   break;
 }
 FUNC_0(VAR_1->conn->mbox,&VAR_2,VAR_0);
}
