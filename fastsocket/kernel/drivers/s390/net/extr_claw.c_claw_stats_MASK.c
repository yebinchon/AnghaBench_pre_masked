
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct claw_privbk* ml_priv; } ;
struct claw_privbk {struct net_device_stats stats; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct
net_device_stats *FUNC_1(struct net_device *VAR_1)
{
        struct claw_privbk *VAR_2;

 FUNC_0(4, VAR_0, "stats");
 VAR_2 = VAR_1->ml_priv;
        return &VAR_2->stats;
}
