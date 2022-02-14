
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int __data_len; struct bio* biotail; int bio; } ;
struct bio {scalar_t__ bi_size; struct bio* bi_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct request*,struct bio*) ;
 int FUNC_1 (struct request_queue*,struct request*,struct bio*) ;

int FUNC_2(struct request_queue *VAR_1, struct request *VAR_2,
        struct bio *VAR_3)
{
 if (!VAR_2->bio)
  FUNC_0(VAR_1, VAR_2, VAR_3);
 else if (!FUNC_1(VAR_1, VAR_2, VAR_3))
  return -VAR_0;
 else {
  VAR_2->biotail->bi_next = VAR_3;
  VAR_2->biotail = VAR_3;

  VAR_2->__data_len += VAR_3->bi_size;
 }
 return 0;
}
