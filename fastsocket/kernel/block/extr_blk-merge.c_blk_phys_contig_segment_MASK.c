
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_flags; } ;
struct bio {scalar_t__ bi_seg_back_size; scalar_t__ bi_seg_front_size; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct request_queue*,struct bio*,struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ FUNC_5 (struct request_queue*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct request_queue *VAR_1, struct bio *VAR_2,
       struct bio *VAR_3)
{
 if (!FUNC_6(VAR_0, &VAR_1->queue_flags))
  return 0;

 if (VAR_2->bi_seg_back_size + VAR_3->bi_seg_front_size >
     FUNC_5(VAR_1))
  return 0;

 if (!FUNC_4(VAR_2))
  return 1;

 if (!FUNC_0(FUNC_2(VAR_2), FUNC_3(VAR_3)))
  return 0;





 if (FUNC_1(VAR_1, VAR_2, VAR_3))
  return 1;

 return 0;
}
