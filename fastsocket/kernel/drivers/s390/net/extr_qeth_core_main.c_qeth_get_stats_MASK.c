
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct qeth_card {struct net_device_stats stats; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;

struct net_device_stats *FUNC_1(struct net_device *VAR_1)
{
 struct qeth_card *VAR_2;

 VAR_2 = VAR_1->ml_priv;

 FUNC_0(VAR_0, 5, "getstat");

 return &VAR_2->stats;
}
