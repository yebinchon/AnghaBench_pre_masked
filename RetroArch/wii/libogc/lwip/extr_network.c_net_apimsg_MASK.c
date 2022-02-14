
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct api_msg* apimsg; } ;
struct net_msg {TYPE_1__ msg; int type; } ;
struct api_msg {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct net_msg*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct api_msg*) ;
 struct net_msg* FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct api_msg *VAR_6)
{
 struct net_msg *VAR_7 = FUNC_4(VAR_1);

 FUNC_0(VAR_4, ("net_apimsg: %p\n",VAR_6));
 if(VAR_7==((void*)0)) {
  FUNC_1(("net_apimsg: msg out of memory.\n"));
  FUNC_3(VAR_0,VAR_6);
  return;
 }

 VAR_7->type = VAR_3;
 VAR_7->msg.apimsg = VAR_6;
 FUNC_2(VAR_5,VAR_7,VAR_2);
}
