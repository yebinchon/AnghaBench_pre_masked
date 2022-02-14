
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {int ioprio; TYPE_1__* cfqg; } ;
struct cfq_data {int dummy; } ;
struct TYPE_2__ {int nr_cfqq; } ;


 int FUNC_0 (struct cfq_queue*) ;
 int FUNC_1 (struct cfq_data*,int,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct cfq_data *VAR_0,
          struct cfq_queue *VAR_1)
{



 return (VAR_1->cfqg->nr_cfqq - 1) * (FUNC_1(VAR_0, 1, 0) -
         FUNC_1(VAR_0, FUNC_0(VAR_1), VAR_1->ioprio));
}
