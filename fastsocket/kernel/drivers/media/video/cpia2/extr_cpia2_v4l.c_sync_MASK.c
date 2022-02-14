
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct framebuf {scalar_t__ status; scalar_t__ length; } ;
struct camera_data {int present; int busy_lock; int streaming; int wq_stream; struct framebuf* buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct camera_data *VAR_4, int VAR_5)
{
 struct framebuf *VAR_6 = &VAR_4->buffers[VAR_5];

 while (1) {
  if (VAR_6->status == VAR_2)
   return 0;

  if (!VAR_4->streaming) {
   VAR_6->status = VAR_2;
   VAR_6->length = 0;
   return 0;
  }

  FUNC_1(&VAR_4->busy_lock);
  FUNC_3(VAR_4->wq_stream,
      !VAR_4->streaming ||
      VAR_6->status == VAR_2);
  FUNC_0(&VAR_4->busy_lock);
  if (FUNC_2(VAR_3))
   return -VAR_1;
  if(!VAR_4->present)
   return -VAR_0;
 }
}
