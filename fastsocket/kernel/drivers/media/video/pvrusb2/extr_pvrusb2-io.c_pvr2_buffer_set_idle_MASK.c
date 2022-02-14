
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int list_lock; struct pvr2_buffer* i_count; struct pvr2_buffer* i_bcount; int idle_list; } ;
struct pvr2_buffer {int state; scalar_t__ max_count; int list_overhead; struct pvr2_stream* stream; } ;


 int FUNC_0 (struct pvr2_buffer*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct pvr2_buffer*) ;
 struct pvr2_buffer* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,struct pvr2_buffer*,struct pvr2_buffer*,struct pvr2_buffer*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct pvr2_buffer *VAR_2)
{
 unsigned long VAR_3;
 struct pvr2_stream *VAR_4;
 FUNC_0(VAR_2);
 VAR_4 = VAR_2->stream;
 FUNC_4(VAR_0,
     "/*---TRACE_FLOW---*/ bufferState    %p %6s --> %6s",
     VAR_2,
     FUNC_3(VAR_2->state),
     FUNC_3(VAR_1));
 FUNC_5(&VAR_4->list_lock,VAR_3);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->list_overhead,&VAR_4->idle_list);
 VAR_2->state = VAR_1;
 (VAR_4->i_count)++;
 VAR_4->i_bcount += VAR_2->max_count;
 FUNC_4(VAR_0,
     "/*---TRACE_FLOW---*/"
     " bufferPool     %8s inc cap=%07d cnt=%02d",
     FUNC_3(VAR_2->state),
     VAR_4->i_bcount,VAR_4->i_count);
 FUNC_6(&VAR_4->list_lock,VAR_3);
}
