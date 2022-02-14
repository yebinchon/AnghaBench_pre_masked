
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_out_q {size_t next_buf_to_fill; struct qeth_qdio_out_buffer** bufs; scalar_t__ do_pack; TYPE_3__* card; int used_buffers; } ;
struct qeth_qdio_out_buffer {scalar_t__ next_element_to_fill; int state; } ;
struct TYPE_5__ {int sc_p_dp; } ;
struct TYPE_4__ {scalar_t__ performance_stats; } ;
struct TYPE_6__ {TYPE_2__ perf_stats; TYPE_1__ options; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct qeth_qdio_out_q *VAR_5)
{
 struct qeth_qdio_out_buffer *VAR_6;
 int VAR_7 = 0;

 if (VAR_5->do_pack) {
  if (FUNC_1(&VAR_5->used_buffers)
      <= VAR_1) {

   FUNC_0(VAR_4, 6, "pack->np");
   if (VAR_5->card->options.performance_stats)
    VAR_5->card->perf_stats.sc_p_dp++;
   VAR_5->do_pack = 0;

   VAR_6 = VAR_5->bufs[VAR_5->next_buf_to_fill];
   if ((FUNC_1(&VAR_6->state) ==
      VAR_2) &&
       (VAR_6->next_element_to_fill > 0)) {
    FUNC_2(&VAR_6->state,
        VAR_3);
    VAR_7++;
    VAR_5->next_buf_to_fill =
     (VAR_5->next_buf_to_fill + 1) %
     VAR_0;
   }
  }
 }
 return VAR_7;
}
