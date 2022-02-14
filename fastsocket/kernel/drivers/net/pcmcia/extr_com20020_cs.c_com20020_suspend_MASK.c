
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ open; TYPE_1__* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;
typedef TYPE_1__ com20020_dev_t ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
 com20020_dev_t *VAR_1 = VAR_0->priv;
 struct net_device *VAR_2 = VAR_1->dev;

 if (VAR_0->open)
  FUNC_0(VAR_2);

 return 0;
}
