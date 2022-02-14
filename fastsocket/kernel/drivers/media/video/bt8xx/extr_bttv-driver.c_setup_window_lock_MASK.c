
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_19__ {int height; int width; } ;
struct v4l2_window {int clipcount; int field; TYPE_9__ w; int clips; } ;
struct v4l2_clip {int dummy; } ;
struct TYPE_17__ {int nclips; int setup_ok; int field; TYPE_9__ w; struct v4l2_clip* clips; } ;
struct bttv_fh {TYPE_8__* ovfmt; TYPE_7__ ov; int do_crop; } ;
struct bttv_buffer {int crop; } ;
struct TYPE_13__ {int height; int width; } ;
struct TYPE_14__ {int field; TYPE_3__ w; } ;
struct TYPE_15__ {TYPE_4__ ov; } ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_12__ {TYPE_1__ fmt; int * base; } ;
struct bttv {TYPE_6__* crop; TYPE_5__ init; TYPE_2__ fbuf; } ;
struct TYPE_18__ {int flags; int depth; } ;
struct TYPE_16__ {int rect; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_9__*,struct v4l2_clip*,int,int) ;
 int FUNC_2 (int ,int ,TYPE_9__*,struct v4l2_clip*,int) ;
 int FUNC_3 (struct v4l2_clip*,int) ;
 int FUNC_4 (struct bttv*,TYPE_7__*,TYPE_8__*,struct bttv_buffer*) ;
 int FUNC_5 (struct bttv*,struct bttv_fh*,struct bttv_buffer*) ;
 scalar_t__ FUNC_6 (struct bttv_fh*,int ) ;
 scalar_t__ FUNC_7 (struct v4l2_clip*,int ,int) ;
 int FUNC_8 (struct v4l2_clip*) ;
 struct v4l2_clip* FUNC_9 (int,int ) ;
 int FUNC_10 (struct bttv_fh*,struct v4l2_window*,int,int) ;
 struct bttv_buffer* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct bttv_fh *VAR_6, struct bttv *VAR_7,
   struct v4l2_window *VAR_8, int VAR_9)
{
 struct v4l2_clip *VAR_10 = ((void*)0);
 int VAR_11,VAR_12,VAR_13 = 0;

 if (((void*)0) == VAR_6->ovfmt)
  return -VAR_1;
 if (!(VAR_6->ovfmt->flags & VAR_3))
  return -VAR_1;
 VAR_13 = FUNC_10(VAR_6, VAR_8,
                            VAR_9,
                            VAR_9);
 if (0 != VAR_13)
  return VAR_13;



 VAR_11 = VAR_8->clipcount;
 VAR_12 = sizeof(*VAR_10)*(VAR_11+4);
 VAR_10 = FUNC_9(VAR_12,VAR_4);
 if (((void*)0) == VAR_10)
  return -VAR_2;
 if (VAR_11 > 0) {
  if (FUNC_7(VAR_10,VAR_8->clips,sizeof(struct v4l2_clip)*VAR_11)) {
   FUNC_8(VAR_10);
   return -VAR_0;
  }
 }


 if (((void*)0) != VAR_7->fbuf.base)
  VAR_11 = FUNC_2(VAR_7->fbuf.fmt.width, VAR_7->fbuf.fmt.height,
          &VAR_8->w, VAR_10, VAR_11);
 FUNC_3(VAR_10,VAR_11);


 switch (VAR_6->ovfmt->depth) {
 case 8:
 case 24:
  FUNC_1(&VAR_8->w, VAR_10, VAR_11, 3);
  break;
 case 16:
  FUNC_1(&VAR_8->w, VAR_10, VAR_11, 1);
  break;
 case 32:

  break;
 default:
  FUNC_0();
 }

 FUNC_8(VAR_6->ov.clips);
 VAR_6->ov.clips = VAR_10;
 VAR_6->ov.nclips = VAR_11;

 VAR_6->ov.w = VAR_8->w;
 VAR_6->ov.field = VAR_8->field;
 VAR_6->ov.setup_ok = 1;

 VAR_7->init.ov.w.width = VAR_8->w.width;
 VAR_7->init.ov.w.height = VAR_8->w.height;
 VAR_7->init.ov.field = VAR_8->field;


 VAR_13 = 0;
 if (FUNC_6(VAR_6, VAR_5)) {
  struct bttv_buffer *VAR_14;

  VAR_14 = FUNC_11(sizeof(*VAR_14));
  VAR_14->crop = VAR_7->crop[!!VAR_6->do_crop].rect;
  FUNC_4(VAR_7, &VAR_6->ov, VAR_6->ovfmt, VAR_14);
  VAR_13 = FUNC_5(VAR_7,VAR_6,VAR_14);
 }
 return VAR_13;
}
