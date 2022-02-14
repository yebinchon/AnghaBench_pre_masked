
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_buffer {int done; int ts; int field_count; int state; } ;
struct front_face {struct videobuf_buffer* curr_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct front_face *VAR_1)
{
 struct videobuf_buffer *VAR_2 = VAR_1->curr_frame;

 if (VAR_2 == ((void*)0))
  return;

 VAR_1->curr_frame = ((void*)0);
 VAR_2->state = VAR_0;
 VAR_2->field_count++;
 FUNC_0(&VAR_2->ts);

 FUNC_1(&VAR_2->done);
}
