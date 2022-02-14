
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netconn {int err; int mbox; } ;
struct TYPE_2__ {struct netconn* conn; } ;
struct api_msg {TYPE_1__ msg; int type; } ;
typedef int mqmsg_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct api_msg*) ;
 int FUNC_2 (int ,struct api_msg*) ;
 struct api_msg* FUNC_3 (int ) ;

__attribute__((used)) static err_t FUNC_4(struct netconn *VAR_5)
{
 u32 VAR_6 = 0;
 struct api_msg *VAR_7;

 if(VAR_5==((void*)0)) return VAR_2;
 if((VAR_7=FUNC_3(VAR_3))==((void*)0)) return VAR_1;

 VAR_7->type = VAR_0;
 VAR_7->msg.conn = VAR_5;
 FUNC_1(VAR_7);
 FUNC_0(VAR_5->mbox,(mqmsg_t)&VAR_6,VAR_4);
 FUNC_2(VAR_3,VAR_7);
 return VAR_5->err;
}
