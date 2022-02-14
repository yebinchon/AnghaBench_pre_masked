
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pbuf {int dummy; } ;
struct netif {int dummy; } ;
struct TYPE_3__ {struct netif* net; struct pbuf* p; } ;
struct TYPE_4__ {TYPE_1__ inp; } ;
struct net_msg {TYPE_2__ msg; int type; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct net_msg*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_msg* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct pbuf*) ;

__attribute__((used)) static err_t FUNC_5(struct pbuf *VAR_7,struct netif *VAR_8)
{
 struct net_msg *VAR_9 = FUNC_3(VAR_2);

 FUNC_0(VAR_5, ("net_input: %p %p\n", VAR_7,VAR_8));

 if(VAR_9==((void*)0)) {
  FUNC_1(("net_input: msg out of memory.\n"));
  FUNC_4(VAR_7);
  return VAR_0;
 }

 VAR_9->type = VAR_4;
 VAR_9->msg.inp.p = VAR_7;
 VAR_9->msg.inp.net = VAR_8;
 FUNC_2(VAR_6,VAR_9,VAR_3);
 return VAR_1;
}
