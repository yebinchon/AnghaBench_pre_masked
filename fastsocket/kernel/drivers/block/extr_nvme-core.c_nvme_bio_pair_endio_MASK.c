
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_bio_pair {int err; struct nvme_bio_pair* bv2; struct nvme_bio_pair* bv1; int parent; int cnt; } ;
struct bio {struct nvme_bio_pair* bi_private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvme_bio_pair*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0, int VAR_1)
{
 struct nvme_bio_pair *VAR_2 = VAR_0->bi_private;

 if (VAR_1)
  VAR_2->err = VAR_1;

 if (FUNC_0(&VAR_2->cnt)) {
  FUNC_1(VAR_2->parent, VAR_2->err);
  FUNC_2(VAR_2->bv1);
  FUNC_2(VAR_2->bv2);
  FUNC_2(VAR_2);
 }
}
