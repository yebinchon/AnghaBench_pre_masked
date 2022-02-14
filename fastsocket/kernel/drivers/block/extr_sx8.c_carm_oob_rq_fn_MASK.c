
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct carm_host* queuedata; } ;
struct request {struct carm_request* special; } ;
struct carm_request {scalar_t__ n_elem; struct request* rq; } ;
struct carm_host {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*,struct request*) ;
 int FUNC_4 (struct carm_host*,struct request_queue*) ;
 int FUNC_5 (struct carm_host*,struct carm_request*) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_0)
{
 struct carm_host *VAR_1 = VAR_0->queuedata;
 struct carm_request *VAR_2;
 struct request *VAR_3;
 int VAR_4;

 while (1) {
  FUNC_0("get req\n");
  VAR_3 = FUNC_2(VAR_0);
  if (!VAR_3)
   break;

  VAR_2 = VAR_3->special;
  FUNC_1(VAR_2 != ((void*)0));
  FUNC_1(VAR_2->rq == VAR_3);

  VAR_2->n_elem = 0;

  FUNC_0("send req\n");
  VAR_4 = FUNC_5(VAR_1, VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_0, VAR_3);
   FUNC_4(VAR_1, VAR_0);
   return;
  }
 }
}
