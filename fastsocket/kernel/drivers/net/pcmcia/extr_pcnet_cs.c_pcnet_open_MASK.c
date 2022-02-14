
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
struct TYPE_5__ {int link_status; TYPE_2__ watchdog; int eth_phy; int phy_id; struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ pcnet_dev_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8)
{
    int VAR_9;
    pcnet_dev_t *VAR_10 = FUNC_1(VAR_8);
    struct pcmcia_device *VAR_11 = VAR_10->p_dev;
    unsigned int VAR_12 = VAR_8->base_addr;

    FUNC_0(2, "pcnet_open('%s')\n", VAR_8->name);

    if (!FUNC_6(VAR_11))
 return -VAR_1;

    FUNC_8(VAR_8);

    FUNC_5(0xFF, VAR_12 + VAR_0);
    VAR_9 = FUNC_7(VAR_8->irq, VAR_5, VAR_3, VAR_4, VAR_8);
    if (VAR_9)
     return VAR_9;

    VAR_11->open++;

    VAR_10->phy_id = VAR_10->eth_phy;
    VAR_10->link_status = 0x00;
    FUNC_4(&VAR_10->watchdog);
    VAR_10->watchdog.function = &VAR_6;
    VAR_10->watchdog.data = (u_long)VAR_8;
    VAR_10->watchdog.expires = VAR_7 + VAR_2;
    FUNC_2(&VAR_10->watchdog);

    return FUNC_3(VAR_8);
}
