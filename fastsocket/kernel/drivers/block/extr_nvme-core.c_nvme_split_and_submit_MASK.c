
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int sq_cong; int sq_cong_wait; int sq_full; } ;
struct nvme_bio_pair {int b2; int b1; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct nvme_bio_pair* FUNC_3 (struct bio*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct bio *VAR_1, struct nvme_queue *VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 struct nvme_bio_pair *VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_2(&VAR_2->sq_cong))
  FUNC_0(&VAR_2->sq_full, &VAR_2->sq_cong_wait);
 FUNC_1(&VAR_2->sq_cong, &VAR_6->b1);
 FUNC_1(&VAR_2->sq_cong, &VAR_6->b2);

 return 0;
}
