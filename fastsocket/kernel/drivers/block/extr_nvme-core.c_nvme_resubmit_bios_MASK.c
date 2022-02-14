
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_queue {int sq_cong; int sq_cong_wait; int sq_full; } ;
struct nvme_ns {int dummy; } ;
struct bio {TYPE_2__* bi_bdev; } ;
struct TYPE_4__ {TYPE_1__* bd_disk; } ;
struct TYPE_3__ {struct nvme_ns* private_data; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct bio*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct bio* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct nvme_queue*,struct nvme_ns*,struct bio*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct nvme_queue *VAR_0)
{
 while (FUNC_3(&VAR_0->sq_cong)) {
  struct bio *VAR_1 = FUNC_4(&VAR_0->sq_cong);
  struct nvme_ns *VAR_2 = VAR_1->bi_bdev->bd_disk->private_data;

  if (FUNC_2(&VAR_0->sq_cong))
   FUNC_6(&VAR_0->sq_full,
       &VAR_0->sq_cong_wait);
  if (FUNC_5(VAR_0, VAR_2, VAR_1)) {
   if (FUNC_2(&VAR_0->sq_cong))
    FUNC_0(&VAR_0->sq_full,
       &VAR_0->sq_cong_wait);
   FUNC_1(&VAR_0->sq_cong, VAR_1);
   break;
  }
 }
}
