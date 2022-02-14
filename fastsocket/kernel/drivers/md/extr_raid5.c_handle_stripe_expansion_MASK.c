
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; int pd_idx; int qd_idx; int state; TYPE_1__* dev; } ;
struct r5conf {int raid_disks; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct async_submit_ctl {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int flags; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dma_async_tx_descriptor* FUNC_0 (int ,int ,int ,int ,int ,struct async_submit_ctl*) ;
 int FUNC_1 (struct dma_async_tx_descriptor**) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct stripe_head*,int,int) ;
 struct stripe_head* FUNC_4 (struct r5conf*,int ,int ,int,int) ;
 int FUNC_5 (struct async_submit_ctl*,int ,struct dma_async_tx_descriptor*,int *,int *,int *) ;
 int FUNC_6 (struct r5conf*,int ,int ,int*,int *) ;
 int FUNC_7 (struct stripe_head*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct r5conf *VAR_7, struct stripe_head *VAR_8)
{
 int VAR_9;




 struct dma_async_tx_descriptor *VAR_10 = ((void*)0);
 FUNC_2(VAR_4, &VAR_8->state);
 for (VAR_9 = 0; VAR_9 < VAR_8->disks; VAR_9++)
  if (VAR_9 != VAR_8->pd_idx && VAR_9 != VAR_8->qd_idx) {
   int VAR_11, VAR_12;
   struct stripe_head *VAR_13;
   struct async_submit_ctl VAR_14;

   sector_t VAR_15 = FUNC_3(VAR_8, VAR_9, 1);
   sector_t VAR_16 = FUNC_6(VAR_7, VAR_15, 0,
         &VAR_11, ((void*)0));
   VAR_13 = FUNC_4(VAR_7, VAR_16, 0, 1, 1);
   if (VAR_13 == ((void*)0))




    continue;
   if (!FUNC_9(VAR_2, &VAR_13->state) ||
      FUNC_9(VAR_0, &VAR_13->dev[VAR_11].flags)) {

    FUNC_7(VAR_13);
    continue;
   }


   FUNC_5(&VAR_14, 0, VAR_10, ((void*)0), ((void*)0), ((void*)0));
   VAR_10 = FUNC_0(VAR_13->dev[VAR_11].page,
       VAR_8->dev[VAR_9].page, 0, 0, VAR_6,
       &VAR_14);

   FUNC_8(VAR_0, &VAR_13->dev[VAR_11].flags);
   FUNC_8(VAR_1, &VAR_13->dev[VAR_11].flags);
   for (VAR_12 = 0; VAR_12 < VAR_7->raid_disks; VAR_12++)
    if (VAR_12 != VAR_13->pd_idx &&
        VAR_12 != VAR_13->qd_idx &&
        !FUNC_9(VAR_0, &VAR_13->dev[VAR_12].flags))
     break;
   if (VAR_12 == VAR_7->raid_disks) {
    FUNC_8(VAR_3, &VAR_13->state);
    FUNC_8(VAR_5, &VAR_13->state);
   }
   FUNC_7(VAR_13);

  }

 FUNC_1(&VAR_10);
}
