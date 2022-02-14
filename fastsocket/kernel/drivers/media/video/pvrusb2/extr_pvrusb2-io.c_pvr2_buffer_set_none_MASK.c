
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int list_lock; } ;
struct pvr2_buffer {int state; struct pvr2_stream* stream; } ;


 int FUNC_0 (struct pvr2_buffer*) ;
 int VAR_0 ;
 int FUNC_1 (struct pvr2_buffer*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,struct pvr2_buffer*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pvr2_buffer *VAR_2)
{
 unsigned long VAR_3;
 struct pvr2_stream *VAR_4;
 FUNC_0(VAR_2);
 VAR_4 = VAR_2->stream;
 FUNC_3(VAR_0,
     "/*---TRACE_FLOW---*/ bufferState    %p %6s --> %6s",
     VAR_2,
     FUNC_2(VAR_2->state),
     FUNC_2(VAR_1));
 FUNC_4(&VAR_4->list_lock,VAR_3);
 FUNC_1(VAR_2);
 FUNC_5(&VAR_4->list_lock,VAR_3);
}
