
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32_t ;
typedef size_t u16_t ;
struct net_device {scalar_t__* dev_addr; int ml_priv; int mem_end; int mem_start; int base_addr; int irq; } ;
struct TYPE_7__ {int name; scalar_t__* dev_addr; scalar_t__ tx_queue_len; int destructor; int * netdev_ops; int ml_priv; int mem_end; int mem_start; int base_addr; int irq; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char*,size_t) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct net_device* VAR_6, u16_t VAR_7)
{

    VAR_4[VAR_7].dev = FUNC_0(0);
    FUNC_4("Register vap dev=%x\n", (u32_t)VAR_4[VAR_7].dev);

    if(VAR_4[VAR_7].dev == ((void*)0)) {
        FUNC_4("alloc_etherdev fail\n");
        return -VAR_1;
    }


    FUNC_1(VAR_4[VAR_7].dev);


    FUNC_2(VAR_4[VAR_7].dev->dev_addr, VAR_6->dev_addr, VAR_2);

    VAR_4[VAR_7].dev->irq = VAR_6->irq;
    VAR_4[VAR_7].dev->base_addr = VAR_6->base_addr;
    VAR_4[VAR_7].dev->mem_start = VAR_6->mem_start;
    VAR_4[VAR_7].dev->mem_end = VAR_6->mem_end;
    VAR_4[VAR_7].dev->ml_priv = VAR_6->ml_priv;


    VAR_4[VAR_7].dev->netdev_ops = &VAR_5;
    VAR_4[VAR_7].dev->destructor = VAR_3;

    VAR_4[VAR_7].dev->tx_queue_len = 0;

    VAR_4[VAR_7].dev->dev_addr[0] = VAR_6->dev_addr[0];
    VAR_4[VAR_7].dev->dev_addr[1] = VAR_6->dev_addr[1];
    VAR_4[VAR_7].dev->dev_addr[2] = VAR_6->dev_addr[2];
    VAR_4[VAR_7].dev->dev_addr[3] = VAR_6->dev_addr[3];
    VAR_4[VAR_7].dev->dev_addr[4] = VAR_6->dev_addr[4];
    VAR_4[VAR_7].dev->dev_addr[5] = VAR_6->dev_addr[5] + (VAR_7+1);


    FUNC_3(VAR_4[VAR_7].dev);

    FUNC_6(VAR_4[VAR_7].dev->name, "vap%d", VAR_7);
    FUNC_4("Register VAP dev success : %s\n", VAR_4[VAR_7].dev->name);

    if(FUNC_5(VAR_4[VAR_7].dev) != 0) {
        FUNC_4("register VAP device fail\n");
        VAR_4[VAR_7].dev = ((void*)0);
        return -VAR_0;
    }

    return 0;
}
