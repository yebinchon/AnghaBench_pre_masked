
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mmc_queue* queuedata; } ;
struct request {int cmd_flags; } ;
struct mmc_queue {int thread; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_2)
{
 struct mmc_queue *VAR_3 = VAR_2->queuedata;
 struct request *VAR_4;

 if (!VAR_3) {
  while ((VAR_4 = FUNC_1(VAR_2)) != ((void*)0)) {
   VAR_4->cmd_flags |= VAR_1;
   FUNC_0(VAR_4, -VAR_0);
  }
  return;
 }

 if (!VAR_3->req)
  FUNC_2(VAR_3->thread);
}
