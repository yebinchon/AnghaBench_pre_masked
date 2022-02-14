
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netconn {scalar_t__ err; int mbox; } ;
struct netbuf {TYPE_3__* p; } ;
struct TYPE_4__ {TYPE_3__* p; } ;
struct TYPE_5__ {TYPE_1__ msg; struct netconn* conn; } ;
struct api_msg {TYPE_2__ msg; int type; } ;
typedef int mqmsg_t ;
typedef scalar_t__ err_t ;
struct TYPE_6__ {int tot_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct api_msg*) ;
 int FUNC_3 (int ,struct api_msg*) ;
 struct api_msg* FUNC_4 (int ) ;

__attribute__((used)) static err_t FUNC_5(struct netconn *VAR_7,struct netbuf *VAR_8)
{
 u32 VAR_9 = 0;
 struct api_msg *VAR_10;

 if(VAR_7==((void*)0)) return VAR_4;
 if(VAR_7->err!=VAR_3) return VAR_7->err;
 if((VAR_10=FUNC_4(VAR_5))==((void*)0)) return (VAR_7->err = VAR_2);

 FUNC_0(VAR_1, ("netconn_send: sending %d bytes\n", VAR_8->p->tot_len));
 VAR_10->type = VAR_0;
 VAR_10->msg.conn = VAR_7;
 VAR_10->msg.msg.p = VAR_8->p;
 FUNC_2(VAR_10);
 FUNC_1(VAR_7->mbox,(mqmsg_t)&VAR_9,VAR_6);
 FUNC_3(VAR_5,VAR_10);
 return VAR_7->err;
}
