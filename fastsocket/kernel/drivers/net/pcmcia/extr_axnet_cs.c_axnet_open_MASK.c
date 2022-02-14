
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; int irq; int name; } ;
struct TYPE_6__ {scalar_t__ expires; scalar_t__ data; int * function; } ;
struct TYPE_5__ {int link_status; TYPE_2__ watchdog; struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ axnet_dev_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_7)
{
    int VAR_8;
    axnet_dev_t *VAR_9 = FUNC_1(VAR_7);
    struct pcmcia_device *VAR_10 = VAR_9->p_dev;
    unsigned int VAR_11 = VAR_7->base_addr;

    FUNC_0(2, "axnet_open('%s')\n", VAR_7->name);

    if (!FUNC_6(VAR_10))
 return -VAR_1;

    FUNC_5(0xFF, VAR_11 + VAR_0);
    VAR_8 = FUNC_7(VAR_7->irq, VAR_4, VAR_3, "axnet_cs", VAR_7);
    if (VAR_8)
     return VAR_8;

    VAR_10->open++;

    VAR_9->link_status = 0x00;
    FUNC_4(&VAR_9->watchdog);
    VAR_9->watchdog.function = &VAR_5;
    VAR_9->watchdog.data = (u_long)VAR_7;
    VAR_9->watchdog.expires = VAR_6 + VAR_2;
    FUNC_2(&VAR_9->watchdog);

    return FUNC_3(VAR_7);
}
