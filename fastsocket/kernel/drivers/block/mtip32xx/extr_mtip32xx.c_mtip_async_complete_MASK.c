
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtip_port {int cmd_slot; int cmd_slot_unal; struct mtip_cmd* commands; TYPE_2__* dd; } ;
struct mtip_cmd {int unaligned; int active; int direction; int scatter_ents; int sg; int * comp_func; int (* async_callback ) (int ,int) ;int async_data; } ;
struct driver_data {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int (*) (int ,int)) ;
 int FUNC_4 (struct mtip_port*,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mtip_port *VAR_2,
    int VAR_3,
    void *VAR_4,
    int VAR_5)
{
 struct mtip_cmd *VAR_6;
 struct driver_data *VAR_7 = VAR_4;
 int VAR_8 = VAR_5 ? -VAR_0 : 0;

 if (FUNC_6(!VAR_7) || FUNC_6(!VAR_2))
  return;

 VAR_6 = &VAR_2->commands[VAR_3];

 if (FUNC_6(VAR_5 == VAR_1)) {
  FUNC_1(&VAR_2->dd->pdev->dev,
   "Command tag %d failed due to TFE\n", VAR_3);
 }


 if (FUNC_3(VAR_6->async_callback))
  VAR_6->async_callback(VAR_6->async_data, VAR_8);

 VAR_6->async_callback = ((void*)0);
 VAR_6->comp_func = ((void*)0);


 FUNC_2(&VAR_7->pdev->dev,
  VAR_6->sg,
  VAR_6->scatter_ents,
  VAR_6->direction);


 FUNC_0(&VAR_2->commands[VAR_3].active, 0);
 FUNC_4(VAR_2, VAR_3);

 if (FUNC_6(VAR_6->unaligned))
  FUNC_7(&VAR_2->cmd_slot_unal);
 else
  FUNC_7(&VAR_2->cmd_slot);
}
