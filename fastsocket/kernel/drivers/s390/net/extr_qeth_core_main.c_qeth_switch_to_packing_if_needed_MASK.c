
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_out_q {int do_pack; TYPE_3__* card; int used_buffers; } ;
struct TYPE_5__ {int sc_dp_p; } ;
struct TYPE_4__ {scalar_t__ performance_stats; } ;
struct TYPE_6__ {TYPE_2__ perf_stats; TYPE_1__ options; } ;


 int FUNC_0 (int ,int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qeth_qdio_out_q *VAR_2)
{
 if (!VAR_2->do_pack) {
  if (FUNC_1(&VAR_2->used_buffers)
      >= VAR_0){

   FUNC_0(VAR_1, 6, "np->pack");
   if (VAR_2->card->options.performance_stats)
    VAR_2->card->perf_stats.sc_dp_p++;
   VAR_2->do_pack = 1;
  }
 }
}
