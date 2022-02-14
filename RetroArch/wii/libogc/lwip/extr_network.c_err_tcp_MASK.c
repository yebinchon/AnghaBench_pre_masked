
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * tcp; } ;
struct netconn {scalar_t__ recvmbox; scalar_t__ mbox; scalar_t__ acceptmbox; scalar_t__ sem; int (* callback ) (struct netconn*,int ,int ) ;TYPE_1__ pcb; int err; } ;
typedef int err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct netconn*,int ,int ) ;
 int FUNC_4 (struct netconn*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_5,err_t VAR_6)
{
 u32 VAR_7 = 0;
 struct netconn *VAR_8 = (struct netconn*)VAR_5;

 FUNC_0(VAR_0, ("api_msg: err_tcp: %d\n",VAR_6));
 if(VAR_8) {
  VAR_8->err = VAR_6;
  VAR_8->pcb.tcp = ((void*)0);
  if(VAR_8->recvmbox!=VAR_3) {
   if(VAR_8->callback) (*VAR_8->callback)(VAR_8,VAR_2,0);
   FUNC_2(VAR_8->recvmbox,&VAR_7,VAR_1);
  }
  if(VAR_8->mbox!=VAR_3) {
   FUNC_2(VAR_8->mbox,&VAR_7,VAR_1);
  }
  if(VAR_8->acceptmbox!=VAR_3) {
   if(VAR_8->callback) (*VAR_8->callback)(VAR_8,VAR_2,0);
   FUNC_2(VAR_8->acceptmbox,&VAR_7,VAR_1);
  }
  if(VAR_8->sem!=VAR_4) {
   FUNC_1(VAR_8->sem);
  }
 }
}
