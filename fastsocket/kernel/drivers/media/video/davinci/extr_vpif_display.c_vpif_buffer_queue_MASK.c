
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {TYPE_1__* channel; } ;
struct videobuf_queue {struct vpif_fh* priv_data; } ;
struct videobuf_buffer {int state; int queue; } ;
struct common_obj {int dma_queue; } ;
struct TYPE_2__ {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_2,
         struct videobuf_buffer *VAR_3)
{
 struct vpif_fh *VAR_4 = VAR_2->priv_data;
 struct common_obj *VAR_5;

 VAR_5 = &VAR_4->channel->common[VAR_1];


 FUNC_0(&VAR_3->queue, &VAR_5->dma_queue);
 VAR_3->state = VAR_0;
}
