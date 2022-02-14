
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videobuf_queue {struct file* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct saa7146_vv {int ov_fb; TYPE_1__* standard; } ;
struct saa7146_format {int trans; } ;
struct TYPE_5__ {int width; int height; int sizeimage; size_t field; scalar_t__ bytesperline; int pixelformat; } ;
struct saa7146_fh {TYPE_2__ video_fmt; struct saa7146_dev* dev; } ;
struct saa7146_dev {int pci; struct saa7146_vv* vv_data; } ;
struct TYPE_6__ {scalar_t__ baddr; int bsize; int width; scalar_t__ bytesperline; int height; int size; int field; scalar_t__ state; } ;
struct saa7146_buf {int activate; TYPE_3__ vb; int * pt; TYPE_2__* fmt; } ;
struct file {struct saa7146_fh* private_data; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_4__ {int h_max_out; int v_max_out; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct saa7146_dev*,struct saa7146_buf*) ;
 int FUNC_4 (struct saa7146_dev*,struct videobuf_queue*,struct saa7146_buf*) ;
 struct saa7146_format* FUNC_5 (struct saa7146_dev*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct saa7146_dev*,struct saa7146_buf*) ;
 int * VAR_4 ;
 int FUNC_8 (struct videobuf_queue*,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_9(struct videobuf_queue *VAR_5,
     struct videobuf_buffer *VAR_6, enum v4l2_field VAR_7)
{
 struct file *VAR_8 = VAR_5->priv_data;
 struct saa7146_fh *VAR_9 = VAR_8->private_data;
 struct saa7146_dev *VAR_10 = VAR_9->dev;
 struct saa7146_vv *VAR_11 = VAR_10->vv_data;
 struct saa7146_buf *VAR_12 = (struct saa7146_buf *)VAR_6;
 int VAR_13,VAR_14 = 0;

 FUNC_0(("vbuf:%p\n",VAR_6));


 if (VAR_9->video_fmt.width < 48 ||
     VAR_9->video_fmt.height < 32 ||
     VAR_9->video_fmt.width > VAR_11->standard->h_max_out ||
     VAR_9->video_fmt.height > VAR_11->standard->v_max_out) {
  FUNC_1(("w (%d) / h (%d) out of bounds.\n",VAR_9->video_fmt.width,VAR_9->video_fmt.height));
  return -VAR_0;
 }

 VAR_13 = VAR_9->video_fmt.sizeimage;
 if (0 != VAR_12->vb.baddr && VAR_12->vb.bsize < VAR_13) {
  FUNC_1(("size mismatch.\n"));
  return -VAR_0;
 }

 FUNC_0(("buffer_prepare [size=%dx%d,bytes=%d,fields=%s]\n",
  VAR_9->video_fmt.width,VAR_9->video_fmt.height,VAR_13,VAR_4[VAR_9->video_fmt.field]));
 if (VAR_12->vb.width != VAR_9->video_fmt.width ||
     VAR_12->vb.bytesperline != VAR_9->video_fmt.bytesperline ||
     VAR_12->vb.height != VAR_9->video_fmt.height ||
     VAR_12->vb.size != VAR_13 ||
     VAR_12->vb.field != VAR_7 ||
     VAR_12->vb.field != VAR_9->video_fmt.field ||
     VAR_12->fmt != &VAR_9->video_fmt) {
  FUNC_4(VAR_10,VAR_5,VAR_12);
 }

 if (VAR_1 == VAR_12->vb.state) {
  struct saa7146_format *VAR_15;

  VAR_12->vb.bytesperline = VAR_9->video_fmt.bytesperline;
  VAR_12->vb.width = VAR_9->video_fmt.width;
  VAR_12->vb.height = VAR_9->video_fmt.height;
  VAR_12->vb.size = VAR_13;
  VAR_12->vb.field = VAR_7;
  VAR_12->fmt = &VAR_9->video_fmt;
  VAR_12->vb.field = VAR_9->video_fmt.field;

  VAR_15 = FUNC_5(VAR_10,VAR_12->fmt->pixelformat);

  FUNC_3(VAR_10, VAR_12);
  if( 0 != FUNC_2(VAR_15->trans)) {
   FUNC_6(VAR_10->pci, &VAR_12->pt[0]);
   FUNC_6(VAR_10->pci, &VAR_12->pt[1]);
   FUNC_6(VAR_10->pci, &VAR_12->pt[2]);
  } else {
   FUNC_6(VAR_10->pci, &VAR_12->pt[0]);
  }

  VAR_14 = FUNC_8(VAR_5,&VAR_12->vb, &VAR_11->ov_fb);
  if (VAR_14)
   goto oops;
  VAR_14 = FUNC_7(VAR_10,VAR_12);
  if (VAR_14)
   goto oops;
 }
 VAR_12->vb.state = VAR_2;
 VAR_12->activate = VAR_3;

 return 0;

 oops:
 FUNC_1(("error out.\n"));
 FUNC_4(VAR_10,VAR_5,VAR_12);

 return VAR_14;
}
