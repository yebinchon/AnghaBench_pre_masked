
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct ei_device {scalar_t__ mem; } ;
struct TYPE_7__ {unsigned long data; int function; scalar_t__ expires; } ;
struct ax_device {int running; TYPE_3__ mii_timer; TYPE_2__* plat; int irqflags; TYPE_1__* dev; } ;
struct TYPE_6__ {int gpoc_val; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 struct ei_device* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 struct ax_device* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct ax_device *VAR_4 = FUNC_8(VAR_3);
 struct ei_device *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 FUNC_3(&VAR_4->dev->dev, "%s: open\n", VAR_3->name);

 VAR_6 = FUNC_7(VAR_3->irq, VAR_0, VAR_4->irqflags,
     VAR_3->name, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;



 FUNC_4(VAR_4->plat->gpoc_val, VAR_5->mem + FUNC_0(0x17));
 VAR_4->running = 1;



 FUNC_5(&VAR_4->mii_timer);

 VAR_4->mii_timer.expires = VAR_2+1;
 VAR_4->mii_timer.data = (unsigned long) VAR_3;
 VAR_4->mii_timer.function = VAR_1;

 FUNC_1(&VAR_4->mii_timer);

 return 0;
}
