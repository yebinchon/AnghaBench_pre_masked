
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct com20020_dev_t* priv; scalar_t__ dev_node; } ;
struct net_device {scalar_t__ irq; } ;
struct com20020_dev_t {struct net_device* dev; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (scalar_t__,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct com20020_dev_t*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct pcmcia_device *VAR_0)
{
    struct com20020_dev_t *VAR_1 = VAR_0->priv;
    struct net_device *VAR_2 = VAR_1->dev;

    FUNC_0(1,"detach...\n");

    FUNC_0(0, "com20020_detach(0x%p)\n", VAR_0);

    if (VAR_0->dev_node) {
 FUNC_0(1,"unregister...\n");

 FUNC_5(VAR_2);





 if (VAR_2->irq)
     FUNC_2(VAR_2->irq, VAR_2);
    }

    FUNC_1(VAR_0);


    FUNC_0(1,"unlinking...\n");
    if (VAR_0->priv)
    {
 VAR_2 = VAR_1->dev;
 if (VAR_2)
 {
     FUNC_0(1,"kfree...\n");
     FUNC_3(VAR_2);
 }
 FUNC_0(1,"kfree2...\n");
 FUNC_4(VAR_1);
    }

}
