
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int irq; int name; } ;
struct ei_device {scalar_t__ mem; } ;
struct ax_device {int mii_timer; scalar_t__ running; TYPE_1__* plat; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int gpoc_val; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,struct net_device*) ;
 struct ei_device* FUNC_6 (struct net_device*) ;
 struct ax_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct ax_device *VAR_1 = FUNC_7(VAR_0);
 struct ei_device *VAR_2 = FUNC_6(VAR_0);

 FUNC_3(&VAR_1->dev->dev, "%s: close\n", VAR_0->name);



 FUNC_4(VAR_1->plat->gpoc_val | (1<<6),
        VAR_2->mem + FUNC_0(0x17));

 VAR_1->running = 0;
 FUNC_8();

 FUNC_2(&VAR_1->mii_timer);
 FUNC_1(VAR_0);

 FUNC_5(VAR_0->irq, VAR_0);
 return 0;
}
