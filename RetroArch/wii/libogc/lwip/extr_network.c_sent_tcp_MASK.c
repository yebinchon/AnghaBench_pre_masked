
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tcp_pcb {int dummy; } ;
struct TYPE_2__ {int tcp; } ;
struct netconn {scalar_t__ sem; int (* callback ) (struct netconn*,int ,int ) ;TYPE_1__ pcb; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct netconn*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static err_t FUNC_4(void *VAR_5,struct tcp_pcb *VAR_6,u16 VAR_7)
{
 struct netconn *VAR_8 = (struct netconn*)VAR_5;

 FUNC_0(VAR_0, ("api_msg: sent_tcp: sent %d bytes\n",VAR_7));
 if(VAR_8 && VAR_8->sem!=VAR_3)
  FUNC_1(VAR_8->sem);

 if(VAR_8 && VAR_8->callback) {
  if(FUNC_3(VAR_8->pcb.tcp)>VAR_4)
   (*VAR_8->callback)(VAR_8,VAR_2,VAR_7);
 }
 return VAR_1;
}
