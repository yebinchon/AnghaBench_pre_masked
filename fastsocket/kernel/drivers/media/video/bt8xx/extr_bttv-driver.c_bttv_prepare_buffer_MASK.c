
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_queue {struct bttv_fh* priv_data; } ;
struct bttv_format {scalar_t__ btformat; unsigned int depth; } ;
struct bttv_fh {int do_crop; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; scalar_t__ width; scalar_t__ height; } ;
struct bttv_crop {unsigned int min_scaled_width; unsigned int max_scaled_width; unsigned int min_scaled_height; unsigned int max_scaled_height; TYPE_2__ rect; } ;
struct TYPE_7__ {unsigned int bsize; unsigned int size; scalar_t__ baddr; unsigned int width; unsigned int height; int field; scalar_t__ state; } ;
struct bttv_buffer {int tvnorm; TYPE_3__ vb; TYPE_2__ crop; struct bttv_format const* fmt; } ;
struct bttv {int tvnorm; scalar_t__ vbi_end; int fbuf; struct bttv_crop* crop; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_5__ {TYPE_2__ defrect; } ;
struct TYPE_8__ {TYPE_1__ cropcap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bttv*,struct bttv_buffer*) ;
 int FUNC_1 (struct videobuf_queue*,struct bttv*,struct bttv_buffer*) ;
 TYPE_4__* VAR_6 ;
 int FUNC_2 (struct videobuf_queue*,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_7,struct bttv *VAR_8,
          struct bttv_buffer *VAR_9,
          const struct bttv_format *VAR_10,
          unsigned int VAR_11, unsigned int VAR_12,
          enum v4l2_field VAR_13)
{
 struct bttv_fh *VAR_14 = VAR_7->priv_data;
 int VAR_15 = 0;
 struct bttv_crop VAR_16;
 int VAR_17;
 int VAR_18;


 if (((void*)0) == VAR_10)
  return -VAR_1;
 if (VAR_10->btformat == VAR_0) {
  VAR_11 = VAR_2;
  VAR_12 = VAR_3*2;
  if (VAR_11*VAR_12 > VAR_9->vb.bsize)
   return -VAR_1;
  VAR_9->vb.size = VAR_9->vb.bsize;




  VAR_17 = VAR_8->tvnorm;



  if (VAR_8->vbi_end > VAR_6[VAR_17].cropcap.defrect.top) {
   return -VAR_1;
  }

  VAR_16.rect = VAR_6[VAR_17].cropcap.defrect;
 } else {
  VAR_17 = VAR_8->tvnorm;
  VAR_16 = VAR_8->crop[!!VAR_14->do_crop];

  if (VAR_11 < VAR_16.min_scaled_width ||
      VAR_11 > VAR_16.max_scaled_width ||
      VAR_12 < VAR_16.min_scaled_height)
   return -VAR_1;

  switch (VAR_13) {
  case 128:
  case 129:
  case 130:


   if (VAR_12 * 2 > VAR_16.max_scaled_height)
    return -VAR_1;
   break;

  default:
   if (VAR_12 > VAR_16.max_scaled_height)
    return -VAR_1;
   break;
  }

  VAR_9->vb.size = (VAR_11 * VAR_12 * VAR_10->depth) >> 3;
  if (0 != VAR_9->vb.baddr && VAR_9->vb.bsize < VAR_9->vb.size)
   return -VAR_1;
 }


 if (VAR_9->vb.width != VAR_11 || VAR_9->vb.height != VAR_12 ||
     VAR_9->vb.field != VAR_13 ||
     VAR_9->tvnorm != VAR_17 || VAR_9->fmt != VAR_10 ||
     VAR_9->crop.top != VAR_16.rect.top ||
     VAR_9->crop.left != VAR_16.rect.left ||
     VAR_9->crop.width != VAR_16.rect.width ||
     VAR_9->crop.height != VAR_16.rect.height) {
  VAR_9->vb.width = VAR_11;
  VAR_9->vb.height = VAR_12;
  VAR_9->vb.field = VAR_13;
  VAR_9->tvnorm = VAR_17;
  VAR_9->fmt = VAR_10;
  VAR_9->crop = VAR_16.rect;
  VAR_15 = 1;
 }


 if (VAR_4 == VAR_9->vb.state) {
  VAR_15 = 1;
  if (0 != (VAR_18 = FUNC_2(VAR_7,&VAR_9->vb,&VAR_8->fbuf)))
   goto fail;
 }

 if (VAR_15)
  if (0 != (VAR_18 = FUNC_0(VAR_8,VAR_9)))
   goto fail;

 VAR_9->vb.state = VAR_5;
 return 0;

 fail:
 FUNC_1(VAR_7,VAR_8,VAR_9);
 return VAR_18;
}
