
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int ref_count; int cmd_flags; int hash; int queuelist; int * bio; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*,struct request*) ;
 int FUNC_3 (struct request_queue*,struct request*) ;
 int FUNC_4 (struct request_queue*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct request_queue *VAR_1, struct request *VAR_2)
{
 if (FUNC_7(!VAR_1))
  return;
 if (FUNC_7(--VAR_2->ref_count))
  return;

 FUNC_3(VAR_1, VAR_2);


 FUNC_1(VAR_2->bio != ((void*)0));





 if (VAR_2->cmd_flags & VAR_0) {
  unsigned int VAR_3 = VAR_2->cmd_flags;

  FUNC_0(!FUNC_6(&VAR_2->queuelist));
  FUNC_0(!FUNC_5(&VAR_2->hash));

  FUNC_2(VAR_1, VAR_2);
  FUNC_4(VAR_1, VAR_3);
 }
}
