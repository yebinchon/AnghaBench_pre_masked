
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct request* boundary_rq; int end_sector; } ;
struct request {int cmd_flags; scalar_t__ cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*,struct request*,int) ;
 int FUNC_2 (struct request*) ;

void FUNC_3(struct request_queue *VAR_6, struct request *VAR_7, int VAR_8,
         int VAR_9)
{
 if (VAR_7->cmd_flags & (VAR_4 | VAR_3)) {

  if (VAR_7->cmd_type == VAR_5) {
   VAR_6->end_sector = FUNC_2(VAR_7);
   VAR_6->boundary_rq = VAR_7;
  }
 } else if (!(VAR_7->cmd_flags & VAR_2) &&
      VAR_8 == VAR_1)
  VAR_8 = VAR_0;

 if (VAR_9)
  FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_7, VAR_8);
}
