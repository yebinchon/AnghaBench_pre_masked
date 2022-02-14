
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {int* count; int * wait; } ;
struct request_queue {unsigned long nr_requests; int queue_lock; int request_fn; struct request_list rq; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request_queue*,size_t) ;
 int FUNC_1 (struct request_queue*,size_t) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*,size_t) ;
 int FUNC_4 (struct request_queue*,size_t) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (unsigned long*,char const*,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ssize_t
FUNC_11(struct request_queue *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct request_list *VAR_7 = &VAR_4->rq;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_4->request_fn)
  return -VAR_3;

 VAR_9 = FUNC_7(&VAR_8, VAR_5, VAR_6);
 if (VAR_8 < VAR_0)
  VAR_8 = VAR_0;

 FUNC_8(VAR_4->queue_lock);
 VAR_4->nr_requests = VAR_8;
 FUNC_2(VAR_4);

 if (VAR_7->count[VAR_2] >= FUNC_6(VAR_4))
  FUNC_3(VAR_4, VAR_2);
 else if (VAR_7->count[VAR_2] < FUNC_5(VAR_4))
  FUNC_0(VAR_4, VAR_2);

 if (VAR_7->count[VAR_1] >= FUNC_6(VAR_4))
  FUNC_3(VAR_4, VAR_1);
 else if (VAR_7->count[VAR_1] < FUNC_5(VAR_4))
  FUNC_0(VAR_4, VAR_1);

 if (VAR_7->count[VAR_2] >= VAR_4->nr_requests) {
  FUNC_4(VAR_4, VAR_2);
 } else if (VAR_7->count[VAR_2]+1 <= VAR_4->nr_requests) {
  FUNC_1(VAR_4, VAR_2);
  FUNC_10(&VAR_7->wait[VAR_2]);
 }

 if (VAR_7->count[VAR_1] >= VAR_4->nr_requests) {
  FUNC_4(VAR_4, VAR_1);
 } else if (VAR_7->count[VAR_1]+1 <= VAR_4->nr_requests) {
  FUNC_1(VAR_4, VAR_1);
  FUNC_10(&VAR_7->wait[VAR_1]);
 }
 FUNC_9(VAR_4->queue_lock);
 return VAR_9;
}
