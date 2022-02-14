
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue; } ;
struct mmc_blk_data {scalar_t__ usage; TYPE_2__* disk; TYPE_1__ queue; } ;
struct TYPE_5__ {int first_minor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mmc_blk_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct mmc_blk_data *VAR_3)
{
 FUNC_6(&VAR_2);
 VAR_3->usage--;
 if (VAR_3->usage == 0) {
  int VAR_4 = FUNC_0(FUNC_4(VAR_3->disk));
  int VAR_5 = FUNC_1(FUNC_4(VAR_3->disk)) >> VAR_0;

  if (!VAR_4)
   VAR_5 = VAR_3->disk->first_minor >> VAR_0;

  FUNC_3(VAR_3->queue.queue);

  FUNC_2(VAR_5, VAR_1);

  FUNC_8(VAR_3->disk);
  FUNC_5(VAR_3);
 }
 FUNC_7(&VAR_2);
}
