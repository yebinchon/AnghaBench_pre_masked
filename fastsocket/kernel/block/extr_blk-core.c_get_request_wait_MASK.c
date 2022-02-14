
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {int * wait; } ;
struct request_queue {int queue_lock; int node; struct request_list rq; } ;
struct request {int dummy; } ;
struct io_context {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 struct io_context* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 struct request* FUNC_5 (struct request_queue*,int,struct bio*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct request_queue*,struct io_context*) ;
 int FUNC_8 (int *,int *,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct request_queue*,struct bio*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_2 ;

__attribute__((used)) static struct request *FUNC_14(struct request_queue *VAR_3, int VAR_4,
     struct bio *VAR_5)
{
 const bool VAR_6 = FUNC_9(VAR_4) != 0;
 struct request *VAR_7;

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_0);
 while (!VAR_7) {
  FUNC_0(VAR_2);
  struct io_context *VAR_8;
  struct request_list *VAR_9 = &VAR_3->rq;

  if (FUNC_13(FUNC_2(VAR_3)))
   return ((void*)0);

  FUNC_8(&VAR_9->wait[VAR_6], &VAR_2,
    VAR_1);

  FUNC_12(VAR_3, VAR_5, VAR_4 & 1);

  FUNC_1(VAR_3);
  FUNC_11(VAR_3->queue_lock);
  FUNC_6();







  VAR_8 = FUNC_3(VAR_0, VAR_3->node);
  FUNC_7(VAR_3, VAR_8);

  FUNC_10(VAR_3->queue_lock);
  FUNC_4(&VAR_9->wait[VAR_6], &VAR_2);

  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_0);
 };

 return VAR_7;
}
