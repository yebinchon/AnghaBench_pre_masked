
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mapped_device {int queue; TYPE_1__* disk; scalar_t__ bs; scalar_t__ io_pool; scalar_t__ tio_pool; int wq; int bdev; } ;
struct TYPE_5__ {int * private_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct mapped_device*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct mapped_device*) ;

__attribute__((used)) static void FUNC_16(struct mapped_device *VAR_2)
{
 int VAR_3 = FUNC_0(FUNC_7(VAR_2->disk));

 FUNC_15(VAR_2);
 FUNC_1(VAR_2->bdev);
 FUNC_6(VAR_2->wq);
 if (VAR_2->tio_pool)
  FUNC_10(VAR_2->tio_pool);
 if (VAR_2->io_pool)
  FUNC_10(VAR_2->io_pool);
 if (VAR_2->bs)
  FUNC_2(VAR_2->bs);
 FUNC_4(VAR_2->disk);
 FUNC_5(VAR_2->disk);
 FUNC_8(VAR_3);

 FUNC_13(&VAR_1);
 VAR_2->disk->private_data = ((void*)0);
 FUNC_14(&VAR_1);

 FUNC_12(VAR_2->disk);
 FUNC_3(VAR_2->queue);
 FUNC_11(VAR_0);
 FUNC_9(VAR_2);
}
