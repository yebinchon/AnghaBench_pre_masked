
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct driver_data {TYPE_2__* port; TYPE_1__* pdev; int tasklet; scalar_t__ mmio; int dd_flag; } ;
struct TYPE_6__ {int command_list_dma; int command_list; int cmd_timer; int flags; } ;
struct TYPE_5__ {int dev; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,struct driver_data*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct driver_data *VAR_6)
{




 if (!FUNC_9(VAR_4, &VAR_6->dd_flag)) {

  if (!FUNC_9(VAR_5, &VAR_6->port->flags))
   if (FUNC_6(VAR_6->port))
    FUNC_1(&VAR_6->pdev->dev,
     "STANDBY IMMEDIATE failed\n");


  FUNC_5(VAR_6->port);


  FUNC_10(FUNC_7(VAR_6->mmio + VAR_1) & ~VAR_2,
    VAR_6->mmio + VAR_1);
 }

 FUNC_0(&VAR_6->port->cmd_timer);


 FUNC_2(&VAR_6->pdev->dev, VAR_6->pdev->irq, VAR_6);


 FUNC_8(&VAR_6->tasklet);


 FUNC_3(&VAR_6->pdev->dev,
   VAR_3 + (VAR_0 * 4),
   VAR_6->port->command_list,
   VAR_6->port->command_list_dma);

 FUNC_4(VAR_6->port);

 return 0;
}
