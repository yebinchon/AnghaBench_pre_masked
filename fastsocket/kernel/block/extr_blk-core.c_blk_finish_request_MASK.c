
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ cmd_type; int cmd_flags; int q; struct request* next_rq; int (* end_io ) (struct request*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int ,struct request*) ;
 int FUNC_6 (struct request*) ;
 scalar_t__ FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 () ;
 int VAR_2 ;
 int FUNC_10 (struct request*,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct request *VAR_3, int VAR_4)
{
 if (FUNC_7(VAR_3))
  FUNC_5(VAR_3->q, VAR_3);

 FUNC_0(FUNC_6(VAR_3));

 if (FUNC_11(VAR_2) && VAR_3->cmd_type == VAR_1)
  FUNC_9();

 FUNC_4(VAR_3);

 if (VAR_3->cmd_flags & VAR_0)
  FUNC_8(VAR_3);


 FUNC_2(VAR_3);

 if (VAR_3->end_io)
  VAR_3->end_io(VAR_3, VAR_4);
 else {
  if (FUNC_3(VAR_3))
   FUNC_1(VAR_3->next_rq->q, VAR_3->next_rq);

  FUNC_1(VAR_3->q, VAR_3);
 }
}
