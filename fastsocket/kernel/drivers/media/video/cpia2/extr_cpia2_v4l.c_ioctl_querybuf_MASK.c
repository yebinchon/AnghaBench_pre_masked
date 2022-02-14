
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct v4l2_buffer {scalar_t__ type; size_t index; int bytesused; int sequence; scalar_t__ flags; TYPE_2__ m; int timestamp; int memory; int length; } ;
struct camera_data {size_t num_frames; TYPE_1__* buffers; scalar_t__ mmapped; int frame_size; scalar_t__ frame_buffer; } ;
struct TYPE_3__ {int status; int seq; int timestamp; int length; scalar_t__ data; } ;


 int FUNC_0 (char*,size_t,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(void *VAR_6,struct camera_data *VAR_7)
{
 struct v4l2_buffer *VAR_8 = VAR_6;

 if(VAR_8->type != VAR_4 ||
    VAR_8->index > VAR_7->num_frames)
  return -VAR_0;

 VAR_8->m.offset = VAR_7->buffers[VAR_8->index].data - VAR_7->frame_buffer;
 VAR_8->length = VAR_7->frame_size;

 VAR_8->memory = VAR_5;

 if(VAR_7->mmapped)
  VAR_8->flags = VAR_2;
 else
  VAR_8->flags = 0;

 switch (VAR_7->buffers[VAR_8->index].status) {
 case 131:
 case 130:
 case 129:
  VAR_8->bytesused = 0;
  VAR_8->flags = VAR_3;
  break;
 case 128:
  VAR_8->bytesused = VAR_7->buffers[VAR_8->index].length;
  VAR_8->timestamp = VAR_7->buffers[VAR_8->index].timestamp;
  VAR_8->sequence = VAR_7->buffers[VAR_8->index].seq;
  VAR_8->flags = VAR_1;
  break;
 }

 FUNC_0("QUERYBUF index:%d offset:%d flags:%d seq:%d bytesused:%d\n",
      VAR_8->index, VAR_8->m.offset, VAR_8->flags, VAR_8->sequence,
      VAR_8->bytesused);

 return 0;
}
