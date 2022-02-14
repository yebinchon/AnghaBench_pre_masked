
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct deadline_data {int dummy; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct deadline_data*,struct request*) ;
 int FUNC_1 (struct deadline_data*,struct request*) ;
 int FUNC_2 (int ,struct request*) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_1,
        struct request *VAR_2, int VAR_3)
{
 struct deadline_data *VAR_4 = VAR_1->elevator->elevator_data;




 if (VAR_3 == VAR_0) {
  FUNC_2(FUNC_1(VAR_4, VAR_2), VAR_2);
  FUNC_0(VAR_4, VAR_2);
 }
}
