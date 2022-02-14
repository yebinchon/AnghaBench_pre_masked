
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {unsigned int i_count; unsigned int i_bcount; unsigned int q_count; unsigned int q_bcount; unsigned int r_count; unsigned int r_bcount; } ;
struct pvr2_buffer {int state; unsigned int max_count; unsigned int used_count; int list_overhead; struct pvr2_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

 int VAR_1 ;


 int FUNC_2 (int ,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pvr2_buffer *VAR_2)
{
 unsigned int *VAR_3;
 unsigned int *VAR_4;
 unsigned int VAR_5;
 struct pvr2_stream *VAR_6 = VAR_2->stream;
 switch (VAR_2->state) {
 case 130:
  VAR_3 = &VAR_6->i_count;
  VAR_4 = &VAR_6->i_bcount;
  VAR_5 = VAR_2->max_count;
  break;
 case 129:
  VAR_3 = &VAR_6->q_count;
  VAR_4 = &VAR_6->q_bcount;
  VAR_5 = VAR_2->max_count;
  break;
 case 128:
  VAR_3 = &VAR_6->r_count;
  VAR_4 = &VAR_6->r_bcount;
  VAR_5 = VAR_2->used_count;
  break;
 default:
  return;
 }
 FUNC_0(&VAR_2->list_overhead);
 (*VAR_3)--;
 (*VAR_4) -= VAR_5;
 FUNC_2(VAR_0,
     "/*---TRACE_FLOW---*/"
     " bufferPool     %8s dec cap=%07d cnt=%02d",
     FUNC_1(VAR_2->state),*VAR_4,*VAR_3);
 VAR_2->state = VAR_1;
}
