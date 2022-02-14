
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct videobuf_queue {struct vpif_fh* priv_data; } ;
struct videobuf_buffer {int state; } ;
struct common_obj {scalar_t__ memory; } ;
struct channel_obj {size_t channel_id; struct common_obj* common; } ;
struct TYPE_2__ {unsigned int* channel_bufsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct videobuf_queue*,struct videobuf_buffer*) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_4,
    struct videobuf_buffer *VAR_5)
{
 struct vpif_fh *VAR_6 = VAR_4->priv_data;
 struct channel_obj *VAR_7 = VAR_6->channel;
 struct common_obj *VAR_8;
 unsigned int VAR_9 = 0;

 VAR_8 = &VAR_7->common[VAR_2];

 FUNC_0(VAR_4, VAR_5);
 VAR_5->state = VAR_1;

 if (VAR_0 != VAR_8->memory)
  return;

 VAR_9 = VAR_3.channel_bufsize[VAR_7->channel_id];
}
