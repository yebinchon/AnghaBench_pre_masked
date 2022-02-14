
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {scalar_t__* count; int * wait; } ;
struct request_queue {scalar_t__ nr_requests; struct request_list rq; } ;


 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (struct request_queue*,int) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_0, int VAR_1)
{
 struct request_list *VAR_2 = &VAR_0->rq;

 if (VAR_2->count[VAR_1] < FUNC_2(VAR_0))
  FUNC_0(VAR_0, VAR_1);

 if (VAR_2->count[VAR_1] + 1 <= VAR_0->nr_requests) {
  if (FUNC_3(&VAR_2->wait[VAR_1]))
   FUNC_4(&VAR_2->wait[VAR_1]);

  FUNC_1(VAR_0, VAR_1);
 }
}
