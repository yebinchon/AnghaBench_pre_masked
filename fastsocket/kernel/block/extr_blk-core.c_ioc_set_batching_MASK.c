
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int nr_batching; } ;
struct io_context {int last_waited; int nr_batch_requests; } ;


 scalar_t__ FUNC_0 (struct request_queue*,struct io_context*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct request_queue *VAR_1, struct io_context *VAR_2)
{
 if (!VAR_2 || FUNC_0(VAR_1, VAR_2))
  return;

 VAR_2->nr_batch_requests = VAR_1->nr_batching;
 VAR_2->last_waited = VAR_0;
}
