
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int len; int copy; int dataptr; } ;
struct TYPE_10__ {TYPE_2__ w; } ;
struct apimsg_msg {TYPE_7__* conn; TYPE_3__ msg; } ;
typedef int err_t ;
struct TYPE_8__ {TYPE_4__* tcp; } ;
struct TYPE_12__ {int type; int mbox; int (* callback ) (TYPE_7__*,int ,int ) ;TYPE_1__ pcb; int err; } ;
struct TYPE_11__ {int flags; int snd_queuelen; int unacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct apimsg_msg *VAR_7)
{
 err_t VAR_8;
 u32 VAR_9 = 0;

 if(VAR_7->conn->pcb.tcp) {
  switch(VAR_7->conn->type) {
   case 132:
   case 129:
   case 128:
   case 130:
    VAR_7->conn->err = VAR_2;
    break;
   case 131:
    VAR_8 = FUNC_5(VAR_7->conn->pcb.tcp,VAR_7->msg.w.dataptr,VAR_7->msg.w.len,VAR_7->msg.w.copy);
    if(VAR_8==VAR_1 && (!VAR_7->conn->pcb.tcp->unacked || (VAR_7->conn->pcb.tcp->flags&VAR_6)
     || VAR_7->conn->pcb.tcp->snd_queuelen>1)) {
     FUNC_0(VAR_0, ("api_msg: TCP write: tcp_output.\n"));
     FUNC_3(VAR_7->conn->pcb.tcp);
    }
    VAR_7->conn->err = VAR_8;
    if(VAR_7->conn->callback) {
     if(VAR_8==VAR_1) {
      if(FUNC_4(VAR_7->conn->pcb.tcp)<=VAR_5)
       (*VAR_7->conn->callback)(VAR_7->conn,VAR_4,VAR_7->msg.w.len);
     }
    }
    break;
   default:
    break;
  }
 }
 FUNC_1(VAR_7->conn->mbox,&VAR_9,VAR_3);
}
