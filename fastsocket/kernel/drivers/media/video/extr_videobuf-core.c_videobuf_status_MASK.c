
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {TYPE_1__* int_ops; } ;
struct videobuf_buffer {int memory; int state; scalar_t__ input; int field_count; int size; int ts; int field; scalar_t__ map; int boff; int bsize; int baddr; int i; int magic; } ;
struct TYPE_4__ {int offset; int userptr; } ;
struct v4l2_buffer {int type; int memory; scalar_t__ input; int sequence; int bytesused; int timestamp; int field; int flags; TYPE_2__ m; int length; int index; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_8, struct v4l2_buffer *VAR_9,
       struct videobuf_buffer *VAR_10, enum v4l2_buf_type VAR_11)
{
 FUNC_0(VAR_10->magic, VAR_0);
 FUNC_0(VAR_8->int_ops->magic, VAR_1);

 VAR_9->index = VAR_10->i;
 VAR_9->type = VAR_11;

 VAR_9->memory = VAR_10->memory;
 switch (VAR_9->memory) {
 case 137:
  VAR_9->m.offset = VAR_10->boff;
  VAR_9->length = VAR_10->bsize;
  break;
 case 135:
  VAR_9->m.userptr = VAR_10->baddr;
  VAR_9->length = VAR_10->bsize;
  break;
 case 136:
  VAR_9->m.offset = VAR_10->boff;
  break;
 }

 VAR_9->flags = 0;
 if (VAR_10->map)
  VAR_9->flags |= VAR_6;

 switch (VAR_10->state) {
 case 129:
 case 128:
 case 134:
  VAR_9->flags |= VAR_7;
  break;
 case 132:
  VAR_9->flags |= VAR_4;

 case 133:
  VAR_9->flags |= VAR_3;
  break;
 case 130:
 case 131:

  break;
 }

 if (VAR_10->input != VAR_2) {
  VAR_9->flags |= VAR_5;
  VAR_9->input = VAR_10->input;
 }

 VAR_9->field = VAR_10->field;
 VAR_9->timestamp = VAR_10->ts;
 VAR_9->bytesused = VAR_10->size;
 VAR_9->sequence = VAR_10->field_count >> 1;
}
