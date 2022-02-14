
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {TYPE_1__* channel; } ;
struct videobuf_queue {scalar_t__ type; scalar_t__ streaming; struct vpif_fh* priv_data; } ;
struct videobuf_buffer {scalar_t__ state; int width; int height; int size; int field; unsigned long boff; int baddr; } ;
struct common_obj {int width; int height; scalar_t__ memory; unsigned long ytop_off; unsigned long ybtm_off; unsigned long ctop_off; unsigned long cbtm_off; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {struct common_obj* common; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_6,
          struct videobuf_buffer *VAR_7,
          enum v4l2_field VAR_8)
{
 struct vpif_fh *VAR_9 = VAR_6->priv_data;
 struct common_obj *VAR_10;
 unsigned long VAR_11;

 VAR_10 = &VAR_9->channel->common[VAR_5];
 if (VAR_3 == VAR_7->state) {
  VAR_7->width = VAR_10->width;
  VAR_7->height = VAR_10->height;
  VAR_7->size = VAR_7->width * VAR_7->height;
  VAR_7->field = VAR_8;
 }
 VAR_7->state = VAR_4;



 if (VAR_2 == VAR_10->memory) {
  if (!VAR_7->baddr) {
   FUNC_1("buffer_address is 0\n");
   return -VAR_0;
  }

  VAR_7->boff = FUNC_2(VAR_7->baddr);
  if (!FUNC_0(VAR_7->boff))
   goto buf_align_exit;
 }

 VAR_11 = VAR_7->boff;
 if (VAR_6->streaming && (VAR_1 != VAR_6->type)) {
  if (!FUNC_0(VAR_11 + VAR_10->ytop_off) ||
      !FUNC_0(VAR_11 + VAR_10->ybtm_off) ||
      !FUNC_0(VAR_11 + VAR_10->ctop_off) ||
      !FUNC_0(VAR_11 + VAR_10->cbtm_off))
   goto buf_align_exit;
 }
 return 0;

buf_align_exit:
 FUNC_1("buffer offset not aligned to 8 bytes\n");
 return -VAR_0;
}
