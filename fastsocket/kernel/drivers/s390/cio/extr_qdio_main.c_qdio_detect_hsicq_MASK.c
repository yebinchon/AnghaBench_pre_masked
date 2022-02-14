
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {int dummy; } ;
struct qdio_output_q {int dummy; } ;
struct qdio_irq {int nr_input_qs; int nr_output_qs; TYPE_2__** output_qs; struct qdio_q** input_qs; } ;
struct TYPE_3__ {struct qdio_output_q out; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qdio_output_q*) ;
 scalar_t__ FUNC_2 (struct qdio_output_q*) ;
 scalar_t__ FUNC_3 (struct qdio_q*) ;

__attribute__((used)) static inline void FUNC_4(struct qdio_irq *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_1->nr_input_qs <= 1) {
  VAR_2 = 0;
 } else {
  VAR_2 = 1;
  for (VAR_3 = 0; VAR_3 < VAR_1->nr_input_qs; ++VAR_3) {
   struct qdio_q *VAR_4 = VAR_1->input_qs[VAR_3];
   if (FUNC_3(VAR_4) != VAR_0) {
    VAR_2 = 0;
    break;
   }
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_output_qs; ++VAR_3) {
  struct qdio_output_q *VAR_5 = &VAR_1->output_qs[VAR_3]->u.out;

  if (VAR_2) {
   if (FUNC_2(VAR_5)) {
    VAR_2 = 0;
    VAR_3 = -1;
    continue;
   }
  } else {
   FUNC_1(VAR_5);
  }
 }

 FUNC_0("use_cq:%d", VAR_2);
}
