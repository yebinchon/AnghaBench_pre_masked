
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int * in_flight; } ;
struct request {int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request_queue*,struct request*,int ) ;
 size_t FUNC_3 (struct request*) ;

void FUNC_4(struct request_queue *VAR_3, struct request *VAR_4)
{




 if (FUNC_0(VAR_4)) {
  VAR_3->in_flight[FUNC_3(VAR_4)]--;
  if (VAR_4->cmd_flags & VAR_1)
   FUNC_1(VAR_3, VAR_4);
 }

 VAR_4->cmd_flags &= ~VAR_2;

 FUNC_2(VAR_3, VAR_4, VAR_0);
}
