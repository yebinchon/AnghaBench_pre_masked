
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {scalar_t__ expires; scalar_t__ data; int * function; } ;
struct smc_private {TYPE_1__ media; scalar_t__ packets_waiting; int * saved_skb; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int open; } ;
struct net_device {scalar_t__ base_addr; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,struct net_device*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct smc_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_6)
{
    struct smc_private *VAR_7 = FUNC_5(VAR_6);
    struct pcmcia_device *VAR_8 = VAR_7->p_dev;
    if (!FUNC_7(VAR_8))
 return -VAR_1;

    if (FUNC_2(VAR_8) < 0) {
 FUNC_8("smc91c92_cs: Yikes!  Bad chip signature!\n");
 return -VAR_1;
    }
    VAR_8->open++;

    FUNC_6(VAR_6);
    VAR_7->saved_skb = ((void*)0);
    VAR_7->packets_waiting = 0;

    FUNC_10(VAR_6);
    FUNC_3(&VAR_7->media);
    VAR_7->media.function = &VAR_4;
    VAR_7->media.data = (u_long) VAR_6;
    VAR_7->media.expires = VAR_3 + VAR_2;
    FUNC_1(&VAR_7->media);

    return 0;
}
