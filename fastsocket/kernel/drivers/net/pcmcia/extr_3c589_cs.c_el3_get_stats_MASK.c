
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct el3_private {int lock; struct pcmcia_device* p_dev; } ;


 struct el3_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_0)
{
    struct el3_private *VAR_1 = FUNC_0(VAR_0);
    unsigned long VAR_2;
    struct pcmcia_device *VAR_3 = VAR_1->p_dev;

    if (FUNC_1(VAR_3)) {
     FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_4(VAR_0);
 FUNC_3(&VAR_1->lock, VAR_2);
    }
    return &VAR_0->stats;
}
