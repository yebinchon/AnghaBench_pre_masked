
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int mutex; int list_lock; int callback_func; void* callback_data; } ;
typedef int pvr2_stream_callback ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct pvr2_stream *VAR_0,
         pvr2_stream_callback VAR_1,
         void *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(&VAR_0->mutex); do {
  FUNC_2(&VAR_0->list_lock,VAR_3);
  VAR_0->callback_data = VAR_2;
  VAR_0->callback_func = VAR_1;
  FUNC_3(&VAR_0->list_lock,VAR_3);
 } while(0); FUNC_1(&VAR_0->mutex);
}
