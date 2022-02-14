
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int top; int left; int height; int width; } ;
struct TYPE_9__ {size_t field; TYPE_2__ w; } ;
struct TYPE_6__ {TYPE_4__ win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_vv {struct saa7146_fh* video_fh; int video_status; TYPE_3__* ov_fmt; TYPE_5__* ov_data; } ;
struct TYPE_10__ {TYPE_4__ win; int * fh; } ;
struct saa7146_fh {TYPE_5__ ov; struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct saa7146_fh*) ;
 scalar_t__ FUNC_3 (struct saa7146_fh*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct saa7146_fh*) ;
 int FUNC_5 (struct saa7146_fh*,int) ;
 scalar_t__ FUNC_6 (struct saa7146_fh*,int) ;
 int * VAR_5 ;
 int FUNC_7 (int *,struct saa7146_fh*,struct v4l2_format*) ;

int FUNC_8(struct saa7146_fh *VAR_6)
{
 struct saa7146_dev *VAR_7 = VAR_6->dev;
 struct saa7146_vv *VAR_8 = VAR_7->vv_data;
 struct v4l2_format VAR_9;
 int VAR_10 = 0, VAR_11 = 0;

 FUNC_1(("dev:%p, fh:%p\n",VAR_7,VAR_6));


 if( ((void*)0) == VAR_6->ov.fh ) {
  FUNC_0(("no overlay data available. try S_FMT first.\n"));
  return -VAR_0;
 }


 if (FUNC_2(VAR_6) != 0) {
  FUNC_0(("streaming capture is active.\n"));
  return -VAR_1;
 }


 if (FUNC_3(VAR_6) != 0) {
  if (VAR_8->video_fh == VAR_6) {
   FUNC_0(("overlay is already active.\n"));
   return 0;
  }
  FUNC_0(("overlay is already active in another open.\n"));
  return -VAR_1;
 }

 if (0 == FUNC_6(VAR_6, VAR_2|VAR_3)) {
  FUNC_0(("cannot get necessary overlay resources\n"));
  return -VAR_1;
 }

 VAR_9.fmt.win = VAR_6->ov.win;
 VAR_11 = FUNC_7(((void*)0), VAR_6, &VAR_9);
 if (0 != VAR_11) {
  FUNC_5(VAR_8->video_fh, VAR_2|VAR_3);
  return -VAR_1;
 }
 VAR_6->ov.win = VAR_9.fmt.win;
 VAR_8->ov_data = &VAR_6->ov;

 FUNC_0(("%dx%d+%d+%d %s field=%s\n",
  VAR_6->ov.win.w.width,VAR_6->ov.win.w.height,
  VAR_6->ov.win.w.left,VAR_6->ov.win.w.top,
  VAR_8->ov_fmt->name,VAR_5[VAR_6->ov.win.field]));

 if (0 != (VAR_10 = FUNC_4(VAR_6))) {
  FUNC_0(("enabling overlay failed: %d\n",VAR_10));
  FUNC_5(VAR_8->video_fh, VAR_2|VAR_3);
  return VAR_10;
 }

 VAR_8->video_status = VAR_4;
 VAR_8->video_fh = VAR_6;

 return 0;
}
