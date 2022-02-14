
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct b3dfg_dev* private_data; } ;
struct b3dfg_dev {int transmission_enabled; int buffer_lock; TYPE_1__* buffers; int buffer_waitqueue; } ;
typedef int poll_table ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (struct b3dfg_dev*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_5, poll_table *VAR_6)
{
 struct b3dfg_dev *VAR_7 = VAR_5->private_data;
 unsigned long VAR_8, VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_7);
 FUNC_1(VAR_5, &VAR_7->buffer_waitqueue, VAR_6);

 FUNC_2(&VAR_7->buffer_lock, VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_7->buffers[VAR_10].state == VAR_0) {
   VAR_11 = VAR_2 | VAR_3;
   break;
  }
 }
 FUNC_3(&VAR_7->buffer_lock, VAR_8);


 if (!VAR_7->transmission_enabled || VAR_9 != FUNC_0(VAR_7))
  VAR_11 = VAR_1;

 return VAR_11;
}
