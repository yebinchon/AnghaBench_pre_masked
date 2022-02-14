
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {scalar_t__ ml_priv; } ;
struct lcs_card {struct net_device_stats stats; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct net_device_stats *
FUNC_1(struct net_device *VAR_1)
{
 struct lcs_card *VAR_2;

 FUNC_0(4, VAR_0, "netstats");
 VAR_2 = (struct lcs_card *) VAR_1->ml_priv;
 return &VAR_2->stats;
}
