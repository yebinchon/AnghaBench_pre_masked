
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_sbal_total; int * nr_sbals; } ;
struct qdio_q {TYPE_1__ q_stats; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct qdio_q *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_1->q_stats.nr_sbal_total += VAR_2;
 if (VAR_2 == VAR_0) {
  VAR_1->q_stats.nr_sbals[7]++;
  return;
 }
 while (VAR_2 >>= 1)
  VAR_3++;
 VAR_1->q_stats.nr_sbals[VAR_3]++;
}
