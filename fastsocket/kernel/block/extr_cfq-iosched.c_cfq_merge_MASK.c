
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct cfq_data {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct request* FUNC_0 (struct cfq_data*,struct bio*) ;
 scalar_t__ FUNC_1 (struct request*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct request_queue *VAR_2, struct request **VAR_3,
       struct bio *VAR_4)
{
 struct cfq_data *VAR_5 = VAR_2->elevator->elevator_data;
 struct request *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 && FUNC_1(VAR_6, VAR_4)) {
  *VAR_3 = VAR_6;
  return VAR_0;
 }

 return VAR_1;
}
