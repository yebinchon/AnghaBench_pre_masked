
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct videobuf_queue {scalar_t__ streaming; struct vpif_fh* priv_data; } ;
struct videobuf_buffer {scalar_t__ state; int width; int height; int size; int field; scalar_t__ baddr; unsigned long boff; } ;
struct common_obj {int width; int height; scalar_t__ memory; unsigned long ytop_off; unsigned long ybtm_off; unsigned long ctop_off; unsigned long cbtm_off; } ;
struct channel_obj {struct common_obj* common; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_6,
          struct videobuf_buffer *VAR_7,
          enum v4l2_field VAR_8)
{

 struct vpif_fh *VAR_9 = VAR_6->priv_data;
 struct channel_obj *VAR_10 = VAR_9->channel;
 struct common_obj *VAR_11;
 unsigned long VAR_12;


 FUNC_1(2, VAR_5, "vpif_buffer_prepare\n");

 VAR_11 = &VAR_10->common[VAR_4];


 if (VAR_2 == VAR_7->state) {
  VAR_7->width = VAR_11->width;
  VAR_7->height = VAR_11->height;
  VAR_7->size = VAR_7->width * VAR_7->height;
  VAR_7->field = VAR_8;
 }
 VAR_7->state = VAR_3;




 if (VAR_1 == VAR_11->memory) {
  if (0 == VAR_7->baddr) {
   FUNC_1(1, VAR_5, "buffer address is 0\n");
   return -VAR_0;

  }
  VAR_7->boff = FUNC_2(VAR_7->baddr);
  if (!FUNC_0(VAR_7->boff, 8))
   goto exit;
 }

 VAR_12 = VAR_7->boff;
 if (VAR_6->streaming) {
  if (!FUNC_0((VAR_12 + VAR_11->ytop_off), 8) ||
      !FUNC_0((VAR_12 + VAR_11->ybtm_off), 8) ||
      !FUNC_0((VAR_12 + VAR_11->ctop_off), 8) ||
      !FUNC_0((VAR_12 + VAR_11->cbtm_off), 8))
   goto exit;
 }
 return 0;
exit:
 FUNC_1(1, VAR_5, "buffer_prepare:offset is not aligned to 8 bytes\n");
 return -VAR_0;
}
