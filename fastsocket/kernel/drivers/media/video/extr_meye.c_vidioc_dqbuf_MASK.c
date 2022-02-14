
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct v4l2_buffer {scalar_t__ memory; int index; int length; TYPE_1__ m; int sequence; int timestamp; int field; int flags; int bytesused; } ;
struct file {int f_flags; } ;
struct TYPE_6__ {int lock; TYPE_2__* grab_buffer; int doneq; int proc_list; } ;
struct TYPE_5__ {scalar_t__ state; int sequence; int timestamp; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_12, void *VAR_13, struct v4l2_buffer *VAR_14)
{
 int VAR_15;

 if (VAR_14->memory != VAR_9)
  return -VAR_3;

 FUNC_2(&VAR_11.lock);

 if (FUNC_1(VAR_11.doneq) == 0 && VAR_12->f_flags & VAR_6) {
  FUNC_3(&VAR_11.lock);
  return -VAR_0;
 }

 if (FUNC_4(VAR_11.proc_list,
         FUNC_1(VAR_11.doneq) != 0) < 0) {
  FUNC_3(&VAR_11.lock);
  return -VAR_2;
 }

 if (!FUNC_0(VAR_11.doneq, (unsigned char *)&VAR_15,
         sizeof(int))) {
  FUNC_3(&VAR_11.lock);
  return -VAR_1;
 }

 if (VAR_11.grab_buffer[VAR_15].state != VAR_4) {
  FUNC_3(&VAR_11.lock);
  return -VAR_3;
 }

 VAR_14->index = VAR_15;
 VAR_14->bytesused = VAR_11.grab_buffer[VAR_15].size;
 VAR_14->flags = VAR_7;
 VAR_14->field = VAR_8;
 VAR_14->timestamp = VAR_11.grab_buffer[VAR_15].timestamp;
 VAR_14->sequence = VAR_11.grab_buffer[VAR_15].sequence;
 VAR_14->memory = VAR_9;
 VAR_14->m.offset = VAR_15 * VAR_10;
 VAR_14->length = VAR_10;
 VAR_11.grab_buffer[VAR_15].state = VAR_5;
 FUNC_3(&VAR_11.lock);

 return 0;
}
