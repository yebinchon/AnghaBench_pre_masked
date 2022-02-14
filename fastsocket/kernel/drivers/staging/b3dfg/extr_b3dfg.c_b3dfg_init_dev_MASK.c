
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b3dfg_dev {int frame_size; int triplets_dropped_lock; int cstate_lock; int buffer_lock; int buffer_waitqueue; int buffer_queue; struct b3dfg_buffer* buffers; } ;
struct b3dfg_buffer {int list; int * frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (struct b3dfg_dev*,int ) ;
 int FUNC_2 (struct b3dfg_dev*,int ,int ) ;
 int FUNC_3 (struct b3dfg_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 struct b3dfg_buffer* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct b3dfg_dev *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9 = FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_2, 0);

 VAR_6->frame_size = VAR_9 * 4096;
 VAR_6->buffers = FUNC_6(sizeof(struct b3dfg_buffer) * VAR_5,
     VAR_4);
 if (!VAR_6->buffers)
  goto err_no_buf;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct b3dfg_buffer *VAR_10 = &VAR_6->buffers[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_10->frame[VAR_8] = FUNC_5(VAR_6->frame_size, VAR_4);
   if (!VAR_10->frame[VAR_8])
    goto err_no_mem;
  }
  FUNC_0(&VAR_10->list);
 }

 FUNC_0(&VAR_6->buffer_queue);
 FUNC_4(&VAR_6->buffer_waitqueue);
 FUNC_7(&VAR_6->buffer_lock);
 FUNC_7(&VAR_6->cstate_lock);
 FUNC_7(&VAR_6->triplets_dropped_lock);
 return 0;

err_no_mem:
 FUNC_3(VAR_6);
err_no_buf:
 return -VAR_3;
}
