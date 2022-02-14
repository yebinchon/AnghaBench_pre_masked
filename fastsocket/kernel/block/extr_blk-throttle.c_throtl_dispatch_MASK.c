
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_data {int * nr_queued; } ;
struct request_queue {int queue_lock; struct throtl_data* td; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct bio_list*) ;
 struct bio* FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct throtl_data*,char*,unsigned int,...) ;
 int FUNC_7 (struct throtl_data*) ;
 int FUNC_8 (struct throtl_data*) ;
 unsigned int FUNC_9 (struct throtl_data*,struct bio_list*) ;
 int FUNC_10 (struct throtl_data*) ;

__attribute__((used)) static int FUNC_11(struct request_queue *VAR_2)
{
 struct throtl_data *VAR_3 = VAR_2->td;
 unsigned int VAR_4 = 0;
 struct bio_list VAR_5;
 struct bio *VAR_6;

 FUNC_4(VAR_2->queue_lock);

 FUNC_7(VAR_3);

 if (!FUNC_10(VAR_3))
  goto out;

 FUNC_0(&VAR_5);

 FUNC_6(VAR_3, "dispatch nr_queued=%lu read=%u write=%u",
   FUNC_10(VAR_3), VAR_3->nr_queued[VAR_0],
   VAR_3->nr_queued[VAR_1]);

 VAR_4 = FUNC_9(VAR_3, &VAR_5);

 if (VAR_4)
  FUNC_6(VAR_3, "bios disp=%u", VAR_4);

 FUNC_8(VAR_3);
out:
 FUNC_5(VAR_2->queue_lock);





 if (VAR_4) {
  while((VAR_6 = FUNC_1(&VAR_5)))
   FUNC_3(VAR_6);
  FUNC_2(VAR_2);
 }
 return VAR_4;
}
