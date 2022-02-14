
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target2; scalar_t__ target; } ;
struct stripe_head {int disks; scalar_t__ check_state; struct r5conf* raid_conf; struct r5dev* dev; TYPE_1__ ops; } ;
struct raid5_percpu {int dummy; } ;
struct r5dev {int flags; } ;
struct r5conf {int level; int wait_for_overlap; int percpu; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long FUNC_2 () ;
 struct dma_async_tx_descriptor* FUNC_3 (struct stripe_head*,struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct stripe_head*) ;
 int FUNC_5 (struct stripe_head*,struct raid5_percpu*) ;
 int FUNC_6 (struct stripe_head*,struct raid5_percpu*,int) ;
 struct dma_async_tx_descriptor* FUNC_7 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_8 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_9 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_10 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 int FUNC_11 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 int FUNC_12 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 struct raid5_percpu* FUNC_13 (int ,unsigned long) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,unsigned long*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct stripe_head *VAR_10, unsigned long VAR_11)
{
 int VAR_12 = 0, VAR_13, VAR_14 = VAR_10->disks;
 struct dma_async_tx_descriptor *VAR_15 = ((void*)0);
 struct r5conf *VAR_16 = VAR_10->raid_conf;
 int VAR_17 = VAR_16->level;
 struct raid5_percpu *VAR_18;
 unsigned long VAR_19;

 VAR_19 = FUNC_2();
 VAR_18 = FUNC_13(VAR_16->percpu, VAR_19);
 if (FUNC_16(VAR_2, &VAR_11)) {
  FUNC_4(VAR_10);
  VAR_12++;
 }

 if (FUNC_16(VAR_4, &VAR_11)) {
  if (VAR_17 < 6)
   VAR_15 = FUNC_7(VAR_10, VAR_18);
  else {
   if (VAR_10->ops.target2 < 0 || VAR_10->ops.target < 0)
    VAR_15 = FUNC_8(VAR_10, VAR_18);
   else
    VAR_15 = FUNC_9(VAR_10, VAR_18);
  }

  if (VAR_15 && !FUNC_16(VAR_6, &VAR_11))
   FUNC_1(VAR_15);
 }

 if (FUNC_16(VAR_5, &VAR_11))
  VAR_15 = FUNC_10(VAR_10, VAR_18, VAR_15);

 if (FUNC_16(VAR_1, &VAR_11)) {
  VAR_15 = FUNC_3(VAR_10, VAR_15);
  VAR_12++;
 }

 if (FUNC_16(VAR_6, &VAR_11)) {
  if (VAR_17 < 6)
   FUNC_11(VAR_10, VAR_18, VAR_15);
  else
   FUNC_12(VAR_10, VAR_18, VAR_15);
 }

 if (FUNC_16(VAR_3, &VAR_11)) {
  if (VAR_10->check_state == VAR_7)
   FUNC_5(VAR_10, VAR_18);
  else if (VAR_10->check_state == VAR_9)
   FUNC_6(VAR_10, VAR_18, 0);
  else if (VAR_10->check_state == VAR_8)
   FUNC_6(VAR_10, VAR_18, 1);
  else
   FUNC_0();
 }

 if (VAR_12)
  for (VAR_13 = VAR_14; VAR_13--; ) {
   struct r5dev *VAR_20 = &VAR_10->dev[VAR_13];
   if (FUNC_15(VAR_0, &VAR_20->flags))
    FUNC_17(&VAR_10->raid_conf->wait_for_overlap);
  }
 FUNC_14();
}
