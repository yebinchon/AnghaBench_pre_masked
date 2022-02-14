
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {TYPE_1__* dev; } ;
struct r5conf {int wait_for_stripe; int active_aligned_reads; struct bio* retry_read_aligned; } ;
struct bio {int bi_sector; int bi_size; int bi_bdev; } ;
typedef int sector_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stripe_head*,struct bio*,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bio*,int ) ;
 struct stripe_head* FUNC_4 (struct r5conf*,int,int ,int,int ) ;
 int FUNC_5 (struct stripe_head*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct r5conf*,int,int ,int*,int *) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct bio*,int) ;
 int FUNC_10 (struct stripe_head*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,struct bio*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct r5conf *VAR_2, struct bio *VAR_3)
{
 struct stripe_head *VAR_4;
 int VAR_5;
 sector_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11 = 0;

 VAR_7 = VAR_3->bi_sector & ~((sector_t)VAR_1-1);
 VAR_6 = FUNC_7(VAR_2, VAR_7,
          0, &VAR_5, ((void*)0));
 VAR_8 = VAR_3->bi_sector + (VAR_3->bi_size>>9);

 for (; VAR_7 < VAR_8;
      VAR_7 += VAR_1,
       VAR_6 += VAR_1,
       VAR_9++) {

  if (VAR_9 < FUNC_6(VAR_3))

   continue;

  VAR_4 = FUNC_4(VAR_2, VAR_6, 0, 1, 0);

  if (!VAR_4) {

   FUNC_9(VAR_3, VAR_9);
   VAR_2->retry_read_aligned = VAR_3;
   return VAR_11;
  }

  if (!FUNC_0(VAR_4, VAR_3, VAR_5, 0)) {
   FUNC_10(VAR_4);
   FUNC_9(VAR_3, VAR_9);
   VAR_2->retry_read_aligned = VAR_3;
   return VAR_11;
  }

  FUNC_11(VAR_0, &VAR_4->dev[VAR_5].flags);
  FUNC_5(VAR_4);
  FUNC_10(VAR_4);
  VAR_11++;
 }
 VAR_10 = FUNC_8(VAR_3);
 if (VAR_10 == 0) {
  FUNC_12(FUNC_2(VAR_3->bi_bdev),
      VAR_3);
  FUNC_3(VAR_3, 0);
 }
 if (FUNC_1(&VAR_2->active_aligned_reads))
  FUNC_13(&VAR_2->wait_for_stripe);
 return VAR_11;
}
