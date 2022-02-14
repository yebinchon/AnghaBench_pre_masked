
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_framebuffer {scalar_t__ map_count; int offset; int data_size; int size; int id; int timestamp; int frame_counter; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct vino_channel_settings {TYPE_2__ fb_queue; } ;
struct TYPE_4__ {int offset; } ;
struct v4l2_buffer {int flags; int timestamp; int sequence; int field; int length; int bytesused; TYPE_1__ m; int memory; int index; } ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(struct vino_channel_settings *VAR_8,
     struct vino_framebuffer *VAR_9,
     struct v4l2_buffer *VAR_10)
{
 if (FUNC_3(&VAR_8->fb_queue,
      VAR_9->id)) {
  VAR_10->flags &= ~VAR_2;
  VAR_10->flags |= VAR_0;
 } else if (FUNC_2(&VAR_8->fb_queue,
           VAR_9->id)) {
  VAR_10->flags &= ~VAR_0;
  VAR_10->flags |= VAR_2;
 } else {
  VAR_10->flags &= ~(VAR_0 |
         VAR_2);
 }

 VAR_10->flags &= ~(VAR_3);

 if (VAR_9->map_count > 0)
  VAR_10->flags |= VAR_1;

 VAR_10->index = VAR_9->id;
 VAR_10->memory = (VAR_8->fb_queue.type == VAR_7) ?
  VAR_5 : VAR_6;
 VAR_10->m.offset = VAR_9->offset;
 VAR_10->bytesused = VAR_9->data_size;
 VAR_10->length = VAR_9->size;
 VAR_10->field = VAR_4;
 VAR_10->sequence = VAR_9->frame_counter;
 FUNC_1(&VAR_10->timestamp, &VAR_9->timestamp,
        sizeof(struct timeval));


 FUNC_0("buffer %d: length = %d, bytesused = %d, offset = %d\n",
  VAR_9->id, VAR_9->size, VAR_9->data_size, VAR_9->offset);
}
