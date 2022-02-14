
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct apimsg_msg {TYPE_2__* conn; } ;
struct TYPE_3__ {int * tcp; } ;
struct TYPE_4__ {int type; int mbox; TYPE_1__ pcb; void* err; int acceptmbox; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct apimsg_msg *VAR_7)
{
 u32 VAR_8 = 0;

 if(VAR_7->conn->pcb.tcp!=((void*)0)) {
  switch(VAR_7->conn->type) {
   case 132:
    FUNC_0(VAR_0, ("api_msg: listen RAW: cannot listen for RAW.\n"));
    break;
   case 129:
   case 128:
   case 130:
    FUNC_0(VAR_0, ("api_msg: listen UDP: cannot listen for UDP.\n"));
    break;
   case 131:
    VAR_7->conn->pcb.tcp = FUNC_5(VAR_7->conn->pcb.tcp);
    if(VAR_7->conn->pcb.tcp==((void*)0))
     VAR_7->conn->err = VAR_1;
    else {
     if(VAR_7->conn->acceptmbox==VAR_5) {
      if(FUNC_1(&VAR_7->conn->acceptmbox,VAR_2)!=VAR_3) {
       VAR_7->conn->err = VAR_1;
       break;
      }
     }
     FUNC_4(VAR_7->conn->pcb.tcp,VAR_7->conn);
     FUNC_3(VAR_7->conn->pcb.tcp,VAR_6);
    }
    break;
   default:
    break;
  }
 }
 FUNC_2(VAR_7->conn->mbox,&VAR_8,VAR_4);
}
