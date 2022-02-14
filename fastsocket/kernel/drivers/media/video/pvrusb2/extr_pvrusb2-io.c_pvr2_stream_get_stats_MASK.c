
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream_stats {scalar_t__ bytes_processed; scalar_t__ buffers_failed; scalar_t__ buffers_processed; int buffers_in_ready; int buffers_in_idle; int buffers_in_queue; } ;
struct pvr2_stream {int list_lock; scalar_t__ bytes_processed; scalar_t__ buffers_failed; scalar_t__ buffers_processed; int r_count; int i_count; int q_count; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct pvr2_stream *VAR_0,
      struct pvr2_stream_stats *VAR_1,
      int VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(&VAR_0->list_lock,VAR_3);
 if (VAR_1) {
  VAR_1->buffers_in_queue = VAR_0->q_count;
  VAR_1->buffers_in_idle = VAR_0->i_count;
  VAR_1->buffers_in_ready = VAR_0->r_count;
  VAR_1->buffers_processed = VAR_0->buffers_processed;
  VAR_1->buffers_failed = VAR_0->buffers_failed;
  VAR_1->bytes_processed = VAR_0->bytes_processed;
 }
 if (VAR_2) {
  VAR_0->buffers_processed = 0;
  VAR_0->buffers_failed = 0;
  VAR_0->bytes_processed = 0;
 }
 FUNC_1(&VAR_0->list_lock,VAR_3);
}
