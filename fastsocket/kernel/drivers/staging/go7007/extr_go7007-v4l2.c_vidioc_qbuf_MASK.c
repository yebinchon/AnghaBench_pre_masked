
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_buffer {scalar_t__ type; scalar_t__ memory; size_t index; } ;
struct go7007_file {size_t buf_count; int lock; struct go7007_buffer* bufs; struct go7007* go; } ;
struct go7007_buffer {scalar_t__ state; int offset; int user_addr; int page_count; int stream; int * pages; scalar_t__ modet_active; scalar_t__ frame_offset; scalar_t__ bytesused; int mapped; } ;
struct go7007 {int spinlock; int stream; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {TYPE_2__* mm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int,int,int,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_10, void *VAR_11, struct v4l2_buffer *VAR_12)
{
 struct go7007_file *VAR_13 = VAR_11;
 struct go7007 *VAR_14 = VAR_13->go;
 struct go7007_buffer *VAR_15;
 unsigned long VAR_16;
 int VAR_17 = -VAR_3;
 int VAR_18;

 if (VAR_12->type != VAR_7 ||
   VAR_12->memory != VAR_8)
  return VAR_17;

 FUNC_3(&VAR_13->lock);
 if (VAR_12->index < 0 || VAR_12->index >= VAR_13->buf_count)
  goto unlock_and_return;

 VAR_15 = &VAR_13->bufs[VAR_12->index];
 if (!VAR_15->mapped)
  goto unlock_and_return;

 VAR_17 = -VAR_2;
 if (VAR_15->state != VAR_0)
  goto unlock_and_return;


 VAR_15->offset = VAR_15->user_addr & ~VAR_6;
 VAR_15->bytesused = 0;
 VAR_15->frame_offset = 0;
 VAR_15->modet_active = 0;
 if (VAR_15->offset > 0)
  VAR_15->page_count = VAR_5 + 1;
 else
  VAR_15->page_count = VAR_5;

 VAR_17 = -VAR_4;
 FUNC_0(&VAR_9->mm->mmap_sem);
 VAR_18 = FUNC_1(VAR_9, VAR_9->mm,
   VAR_15->user_addr & VAR_6, VAR_15->page_count,
   1, 1, VAR_15->pages, ((void*)0));
 FUNC_8(&VAR_9->mm->mmap_sem);

 if (VAR_18 != VAR_15->page_count) {
  int VAR_19;
  for (VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19)
   FUNC_5(VAR_15->pages[VAR_19]);
  VAR_15->page_count = 0;
  goto unlock_and_return;
 }

 VAR_15->state = VAR_1;
 FUNC_6(&VAR_14->spinlock, VAR_16);
 FUNC_2(&VAR_15->stream, &VAR_14->stream);
 FUNC_7(&VAR_14->spinlock, VAR_16);
 FUNC_4(&VAR_13->lock);

 return 0;

unlock_and_return:
 FUNC_4(&VAR_13->lock);
 return VAR_17;
}
