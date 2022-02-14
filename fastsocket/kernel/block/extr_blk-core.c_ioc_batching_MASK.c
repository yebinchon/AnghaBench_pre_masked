
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ nr_batching; } ;
struct io_context {scalar_t__ nr_batch_requests; scalar_t__ last_waited; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct request_queue *VAR_2, struct io_context *VAR_3)
{
 if (!VAR_3)
  return 0;






 return VAR_3->nr_batch_requests == VAR_2->nr_batching ||
  (VAR_3->nr_batch_requests > 0
  && FUNC_0(VAR_1, VAR_3->last_waited + VAR_0));
}
