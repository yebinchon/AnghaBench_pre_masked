
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int queuelist; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*,struct request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct request_queue *VAR_1, struct request *VAR_2,
     struct request *VAR_3)
{




 if (!FUNC_3(&VAR_2->queuelist) && !FUNC_3(&VAR_3->queuelist)) {
  if (FUNC_7(FUNC_5(VAR_3), FUNC_5(VAR_2))) {
   FUNC_4(&VAR_2->queuelist, &VAR_3->queuelist);
   FUNC_6(VAR_2, FUNC_5(VAR_3));
  }
 }




 FUNC_2(VAR_1, VAR_3);
 FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_0);
}
