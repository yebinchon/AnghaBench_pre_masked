
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct cfq_queue {int dummy; } ;


 int VAR_0 ;
 struct cfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (struct cfq_queue*,struct request*) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_1, struct request *VAR_2,
          int VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct cfq_queue *VAR_4 = FUNC_0(VAR_2);

  FUNC_1(VAR_4, VAR_2);
 }
}
