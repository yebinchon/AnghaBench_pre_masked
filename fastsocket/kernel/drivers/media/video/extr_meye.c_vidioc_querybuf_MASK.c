
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int offset; } ;
struct v4l2_buffer {unsigned int index; unsigned int length; TYPE_2__ m; int memory; int sequence; int timestamp; int field; int flags; int bytesused; } ;
struct file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* grab_buffer; } ;
struct TYPE_4__ {scalar_t__ state; int sequence; int timestamp; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_11, void *VAR_12, struct v4l2_buffer *VAR_13)
{
 unsigned int VAR_14 = VAR_13->index;

 if (VAR_14 >= VAR_8)
  return -VAR_0;

 VAR_13->bytesused = VAR_10.grab_buffer[VAR_14].size;
 VAR_13->flags = VAR_4;

 if (VAR_10.grab_buffer[VAR_14].state == VAR_2)
  VAR_13->flags |= VAR_5;

 if (VAR_10.grab_buffer[VAR_14].state == VAR_1)
  VAR_13->flags |= VAR_3;

 VAR_13->field = VAR_6;
 VAR_13->timestamp = VAR_10.grab_buffer[VAR_14].timestamp;
 VAR_13->sequence = VAR_10.grab_buffer[VAR_14].sequence;
 VAR_13->memory = VAR_7;
 VAR_13->m.offset = VAR_14 * VAR_9;
 VAR_13->length = VAR_9;

 return 0;
}
