
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct videobuf_queue {struct vpif_fh* priv_data; } ;
struct videobuf_buffer {int state; } ;
struct common_obj {int dummy; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct videobuf_queue*,struct videobuf_buffer*) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_2,
    struct videobuf_buffer *VAR_3)
{

 struct vpif_fh *VAR_4 = VAR_2->priv_data;
 struct channel_obj *VAR_5 = VAR_4->channel;
 struct common_obj *VAR_6;

 VAR_6 = &VAR_5->common[VAR_1];

 FUNC_0(VAR_2, VAR_3);
 VAR_3->state = VAR_0;
}
