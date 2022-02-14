
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ open; TYPE_1__* priv; } ;
struct net_device {int base_addr; } ;
struct arcnet_local {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;
typedef TYPE_1__ com20020_dev_t ;


 int VAR_0 ;
 struct arcnet_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1)
{
 com20020_dev_t *VAR_2 = VAR_1->priv;
 struct net_device *VAR_3 = VAR_2->dev;

 if (VAR_1->open) {
  int VAR_4 = VAR_3->base_addr;
  struct arcnet_local *VAR_5 = FUNC_0(VAR_3);
  VAR_0;
 }

 return 0;
}
