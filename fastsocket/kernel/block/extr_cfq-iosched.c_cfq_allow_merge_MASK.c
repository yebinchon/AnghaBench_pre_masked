
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct cfq_queue {int dummy; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_data {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {int io_context; } ;
struct TYPE_3__ {struct cfq_data* elevator_data; } ;


 struct cfq_queue* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct cfq_io_context* FUNC_2 (struct cfq_data*,int ) ;
 struct cfq_queue* FUNC_3 (struct cfq_io_context*,scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (struct request*) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_1, struct request *VAR_2,
      struct bio *VAR_3)
{
 struct cfq_data *VAR_4 = VAR_1->elevator->elevator_data;
 struct cfq_io_context *VAR_5;
 struct cfq_queue *VAR_6;




 if (FUNC_1(VAR_3) && !FUNC_4(VAR_2))
  return 0;





 VAR_5 = FUNC_2(VAR_4, VAR_0->io_context);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_3(VAR_5, FUNC_1(VAR_3));
 return VAR_6 == FUNC_0(VAR_2);
}
