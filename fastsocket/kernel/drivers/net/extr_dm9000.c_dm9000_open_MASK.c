
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_9__ {int mii; scalar_t__ dbug_cnt; int dev; TYPE_1__* irq_res; } ;
typedef TYPE_2__ board_info_t ;
struct TYPE_8__ {unsigned long flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int) ;
 TYPE_2__* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ,int *,unsigned long,int ,struct net_device*) ;

__attribute__((used)) static int
FUNC_11(struct net_device *VAR_5)
{
 board_info_t *VAR_6 = FUNC_6(VAR_5);
 unsigned long VAR_7 = VAR_6->irq_res->flags & VAR_2;

 if (FUNC_7(VAR_6))
  FUNC_0(VAR_6->dev, "enabling %s\n", VAR_5->name);




 if (VAR_7 == VAR_3)
  FUNC_1(VAR_6->dev, "WARNING: no IRQ resource flags set.\n");

 VAR_7 |= VAR_1;

 if (FUNC_10(VAR_5->irq, &VAR_4, VAR_7, VAR_5->name, VAR_5))
  return -VAR_0;


 FUNC_3(VAR_6);
 FUNC_2(VAR_5);


 VAR_6->dbug_cnt = 0;

 FUNC_5(&VAR_6->mii, FUNC_8(VAR_6), 1);
 FUNC_9(VAR_5);

 FUNC_4(VAR_6);

 return 0;
}
