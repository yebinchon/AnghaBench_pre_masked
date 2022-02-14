
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int open; } ;
struct net_device {int irq; int name; } ;
struct TYPE_3__ {int watchdog; struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ axnet_dev_t ;


 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
    axnet_dev_t *VAR_1 = FUNC_1(VAR_0);
    struct pcmcia_device *VAR_2 = VAR_1->p_dev;

    FUNC_0(2, "axnet_close('%s')\n", VAR_0->name);

    FUNC_2(VAR_0);
    FUNC_4(VAR_0->irq, VAR_0);

    VAR_2->open--;
    FUNC_5(VAR_0);
    FUNC_3(&VAR_1->watchdog);

    return 0;
}
