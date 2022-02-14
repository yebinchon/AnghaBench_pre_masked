
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netconn {scalar_t__ acceptmbox; int err; int mbox; } ;
struct TYPE_2__ {struct netconn* conn; } ;
struct api_msg {TYPE_1__ msg; int type; } ;
typedef int mqmsg_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct api_msg*) ;
 int FUNC_4 (int ,struct api_msg*) ;
 struct api_msg* FUNC_5 (int ) ;

__attribute__((used)) static err_t FUNC_6(struct netconn *VAR_8)
{
 u32 VAR_9 = 0;
 struct api_msg *VAR_10;

 FUNC_0(VAR_1, ("netconn_listen(%p)\n", VAR_8));

 if(VAR_8==((void*)0)) return -1;
 if(VAR_8->acceptmbox==VAR_7) {
  if(FUNC_1(&VAR_8->acceptmbox,VAR_4)!=VAR_5) return VAR_2;
 }

 if((VAR_10=FUNC_5(VAR_3))==((void*)0)) return (VAR_8->err = VAR_2);
 VAR_10->type = VAR_0;
 VAR_10->msg.conn = VAR_8;
 FUNC_3(VAR_10);
 FUNC_2(VAR_8->mbox,(mqmsg_t)&VAR_9,VAR_6);
 FUNC_4(VAR_3,VAR_10);
 return VAR_8->err;
}
