
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct videobuf_queue {struct vpif_fh* priv_data; } ;
struct videobuf_buffer {int state; int queue; } ;
struct common_obj {int dma_queue; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_3,
         struct videobuf_buffer *VAR_4)
{

 struct vpif_fh *VAR_5 = VAR_3->priv_data;
 struct channel_obj *VAR_6 = VAR_5->channel;
 struct common_obj *VAR_7;

 VAR_7 = &VAR_6->common[VAR_1];

 FUNC_1(2, VAR_2, "vpif_buffer_queue\n");


 FUNC_0(&VAR_4->queue, &VAR_7->dma_queue);

 VAR_4->state = VAR_0;
}
