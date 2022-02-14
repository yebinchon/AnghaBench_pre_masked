
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {scalar_t__ memory; size_t index; int flags; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int lock; int grabq; TYPE_1__* grab_buffer; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8, void *VAR_9, struct v4l2_buffer *VAR_10)
{
 if (VAR_10->memory != VAR_5)
  return -VAR_0;

 if (VAR_10->index >= VAR_6)
  return -VAR_0;

 if (VAR_7.grab_buffer[VAR_10->index].state != VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_7.lock);
 VAR_10->flags |= VAR_4;
 VAR_10->flags &= ~VAR_3;
 VAR_7.grab_buffer[VAR_10->index].state = VAR_2;
 FUNC_0(VAR_7.grabq, (unsigned char *)&VAR_10->index, sizeof(int));
 FUNC_2(&VAR_7.lock);

 return 0;
}
