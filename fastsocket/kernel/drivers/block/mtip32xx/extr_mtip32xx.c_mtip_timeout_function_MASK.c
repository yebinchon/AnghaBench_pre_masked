
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtip_port {unsigned long flags; long ic_pause_timer; int cmd_timer; int svc_wait; TYPE_2__* dd; int cmd_slot; struct mtip_cmd* commands; int * completed; } ;
struct mtip_cmd {unsigned long comp_time; int active; int direction; int scatter_ents; int sg; int * comp_func; int (* async_callback ) (int ,int ) ;int async_data; scalar_t__ command; } ;
struct host_to_dev_fis {int dummy; } ;
struct TYPE_5__ {unsigned long dd_flag; int slot_groups; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int (*) (int ,int )) ;
 int FUNC_5 (unsigned long*,int ,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*,unsigned long*,int) ;
 int FUNC_10 (struct mtip_port*,int) ;
 int FUNC_11 (int,unsigned long*) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int,unsigned long*) ;
 scalar_t__ FUNC_14 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static void FUNC_19(unsigned long int VAR_10)
{
 struct mtip_port *VAR_11 = (struct mtip_port *) VAR_10;
 struct host_to_dev_fis *VAR_12;
 struct mtip_cmd *VAR_13;
 int VAR_14, VAR_15 = 0;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18;
 unsigned long VAR_19, VAR_20[VAR_8];

 if (FUNC_15(!VAR_11))
  return;

 if (FUNC_13(VAR_1, &VAR_11->dd->dd_flag)) {
  FUNC_6(&VAR_11->cmd_timer,
   VAR_9 + FUNC_7(30000));
  return;
 }

 FUNC_5(VAR_20, 0, VAR_8 * sizeof(long));
 VAR_18 = VAR_11->dd->slot_groups * 32;

 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {




  if (VAR_14 == VAR_6)
   continue;

  if (FUNC_0(&VAR_11->commands[VAR_14].active) &&
     (FUNC_14(VAR_9, VAR_11->commands[VAR_14].comp_time))) {
   VAR_17 = VAR_14 >> 5;
   VAR_16 = VAR_14 & 0x1F;

   VAR_13 = &VAR_11->commands[VAR_14];
   VAR_12 = (struct host_to_dev_fis *) VAR_13->command;

   FUNC_11(VAR_14, VAR_20);
   VAR_15++;
   if (VAR_15 == 1)
    FUNC_11(VAR_3, &VAR_11->flags);






   FUNC_18(1 << VAR_16, VAR_11->completed[VAR_17]);


   if (FUNC_4(VAR_13->async_callback))
    VAR_13->async_callback(VAR_13->async_data,
        -VAR_0);
   VAR_13->async_callback = ((void*)0);
   VAR_13->comp_func = ((void*)0);


   FUNC_3(&VAR_11->dd->pdev->dev,
     VAR_13->sg,
     VAR_13->scatter_ents,
     VAR_13->direction);





   FUNC_1(&VAR_11->commands[VAR_14].active, 0);
   FUNC_10(VAR_11, VAR_14);

   FUNC_16(&VAR_11->cmd_slot);
  }
 }

 if (VAR_15) {
  FUNC_9(VAR_11->dd, "timed out", VAR_20, VAR_15);
  if (!FUNC_13(VAR_4, &VAR_11->flags)) {
   FUNC_8(VAR_11->dd);
   FUNC_17(&VAR_11->svc_wait);
  }
  FUNC_2(VAR_3, &VAR_11->flags);
 }

 if (VAR_11->ic_pause_timer) {
  VAR_19 = VAR_11->ic_pause_timer + FUNC_7(1000);
  if (FUNC_14(VAR_9, VAR_19)) {
   if (!FUNC_13(VAR_4, &VAR_11->flags)) {
    VAR_11->ic_pause_timer = 0;
    FUNC_2(VAR_5, &VAR_11->flags);
    FUNC_2(VAR_2, &VAR_11->flags);
    FUNC_2(VAR_4, &VAR_11->flags);
    FUNC_17(&VAR_11->svc_wait);
   }


  }
 }


 FUNC_6(&VAR_11->cmd_timer,
  VAR_9 + FUNC_7(VAR_7));
}
