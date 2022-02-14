
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtip_port {int* allocated; int cmd_slot; TYPE_2__* dd; struct mtip_cmd* commands; } ;
struct mtip_cmd {int direction; int scatter_ents; int sg; int * async_data; int (* async_callback ) (int *,int ) ;int active; } ;
struct driver_data {int dd_flag; struct mtip_port* port; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct driver_data *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 struct mtip_cmd *VAR_6;
 struct mtip_port *VAR_7 = VAR_2->port;
 static int VAR_8;

 if (VAR_8)
  return;

 VAR_8 = 1;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
   if (!(VAR_7->allocated[VAR_3] & (1 << VAR_4)))
    continue;

   VAR_5 = VAR_3 << 5 | VAR_4;
   VAR_6 = &VAR_7->commands[VAR_5];

   if (FUNC_0(&VAR_6->active)
       && (VAR_6->async_callback)) {
    VAR_6->async_callback(VAR_6->async_data,
     -VAR_0);
    VAR_6->async_callback = ((void*)0);
    VAR_6->async_data = ((void*)0);
   }

   FUNC_1(&VAR_7->dd->pdev->dev,
    VAR_6->sg,
    VAR_6->scatter_ents,
    VAR_6->direction);
  }
 }

 FUNC_4(&VAR_7->cmd_slot);

 FUNC_2(VAR_1, &VAR_2->dd_flag);
 VAR_8 = 0;
}
