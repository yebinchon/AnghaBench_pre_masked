
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {int* count; int* starved; int elvpriv; } ;
struct request_queue {int nr_requests; int queue_lock; int queue_flags; int node; struct request_list rq; } ;
struct request {int dummy; } ;
struct io_context {int nr_batch_requests; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct request* FUNC_0 (struct request_queue*,int,int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int const) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct request_queue*,int const) ;
 int FUNC_6 (struct request_queue*,int const) ;
 struct io_context* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct request_queue*,int) ;
 int FUNC_9 (struct request_queue*,int) ;
 scalar_t__ FUNC_10 (struct request_queue*,struct io_context*) ;
 int FUNC_11 (struct request_queue*,struct io_context*) ;
 int FUNC_12 (struct request_queue*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct request_queue*,struct bio*,int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static struct request *FUNC_19(struct request_queue *VAR_6, int VAR_7,
       struct bio *VAR_8, gfp_t VAR_9)
{
 struct request *VAR_10 = ((void*)0);
 struct request_list *VAR_11 = &VAR_6->rq;
 struct io_context *VAR_12 = ((void*)0);
 const bool VAR_13 = FUNC_13(VAR_7) != 0;
 int VAR_14;

 if (FUNC_18(FUNC_1(VAR_6)))
  return ((void*)0);

 VAR_14 = FUNC_8(VAR_6, VAR_7);
 if (VAR_14 == VAR_1)
  goto rq_starved;

 if (VAR_11->count[VAR_13]+1 >= FUNC_12(VAR_6)) {
  if (VAR_11->count[VAR_13]+1 >= VAR_6->nr_requests) {
   VAR_12 = FUNC_7(VAR_2, VAR_6->node);






   if (!FUNC_2(VAR_6, VAR_13)) {
    FUNC_11(VAR_6, VAR_12);
    FUNC_6(VAR_6, VAR_13);
   } else {
    if (VAR_14 != VAR_0
      && !FUNC_10(VAR_6, VAR_12)) {





     goto out;
    }
   }
  }
  FUNC_5(VAR_6, VAR_13);
 }






 if (VAR_11->count[VAR_13] >= (3 * VAR_6->nr_requests / 2))
  goto out;

 VAR_11->count[VAR_13]++;
 VAR_11->starved[VAR_13] = 0;

 if (FUNC_4(VAR_8) &&
     !FUNC_16(VAR_3, &VAR_6->queue_flags)) {
  VAR_7 |= VAR_4;
  VAR_11->elvpriv++;
 }

 if (FUNC_3(VAR_6))
  VAR_7 |= VAR_5;
 FUNC_15(VAR_6->queue_lock);

 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9);
 if (FUNC_18(!VAR_10)) {







  FUNC_14(VAR_6->queue_lock);
  FUNC_9(VAR_6, VAR_7);
rq_starved:
  if (FUNC_18(VAR_11->count[VAR_13] == 0))
   VAR_11->starved[VAR_13] = 1;

  goto out;
 }







 if (FUNC_10(VAR_6, VAR_12))
  VAR_12->nr_batch_requests--;

 FUNC_17(VAR_6, VAR_8, VAR_7 & 1);
out:
 return VAR_10;
}
