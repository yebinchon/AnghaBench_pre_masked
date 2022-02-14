
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ merge_bvec_fn; } ;
struct bio {scalar_t__ bi_phys_segments; int bi_bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (struct request_queue*) ;

__attribute__((used)) static int FUNC_5(struct bio *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0->bi_bdev);

 if (FUNC_1(VAR_0) > FUNC_3(VAR_1))
  return 0;
 FUNC_2(VAR_1, VAR_0);
 if (VAR_0->bi_phys_segments > FUNC_4(VAR_1))
  return 0;

 if (VAR_1->merge_bvec_fn)



  return 0;

 return 1;
}
