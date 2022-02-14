
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data_cb; int * assist_cb; } ;
struct qeth_card {TYPE_1__ osn_info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;

void FUNC_1(struct net_device *VAR_1)
{
 struct qeth_card *VAR_2;

 FUNC_0(VAR_0, 2, "osndereg");
 if (!VAR_1)
  return;
 VAR_2 = VAR_1->ml_priv;
 if (!VAR_2)
  return;
 VAR_2->osn_info.assist_cb = ((void*)0);
 VAR_2->osn_info.data_cb = ((void*)0);
 return;
}
