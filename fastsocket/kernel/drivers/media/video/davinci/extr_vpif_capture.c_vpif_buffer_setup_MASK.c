
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct videobuf_queue {struct vpif_fh* priv_data; } ;
struct common_obj {scalar_t__ memory; } ;
struct channel_obj {size_t channel_id; struct common_obj* common; } ;
struct TYPE_2__ {unsigned int* channel_bufsize; unsigned int min_numbuffers; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_4, unsigned int *VAR_5,
        unsigned int *VAR_6)
{

 struct vpif_fh *VAR_7 = VAR_4->priv_data;
 struct channel_obj *VAR_8 = VAR_7->channel;
 struct common_obj *VAR_9;

 VAR_9 = &VAR_8->common[VAR_1];

 FUNC_0(2, VAR_3, "vpif_buffer_setup\n");


 if (VAR_0 != VAR_9->memory)
  return 0;


 *VAR_6 = VAR_2.channel_bufsize[VAR_8->channel_id];

 if (*VAR_5 < VAR_2.min_numbuffers)
  *VAR_5 = VAR_2.min_numbuffers;
 return 0;
}
