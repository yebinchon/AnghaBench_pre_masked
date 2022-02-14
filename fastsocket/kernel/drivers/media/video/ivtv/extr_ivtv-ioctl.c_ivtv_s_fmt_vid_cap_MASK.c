
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int width; int height; int code; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_4__ {int width; int height; int video_encoding; } ;
struct ivtv {int sd_video; TYPE_1__ cxhdl; int capturing; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct ivtv_open_id *VAR_8 = VAR_6;
 struct ivtv *VAR_9 = VAR_8->itv;
 struct v4l2_mbus_framefmt VAR_10;
 int VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7);
 int VAR_12 = VAR_7->fmt.pix.width;
 int VAR_13 = VAR_7->fmt.pix.height;

 if (VAR_11)
  return VAR_11;

 if (VAR_9->cxhdl.width == VAR_12 && VAR_9->cxhdl.height == VAR_13)
  return 0;

 if (FUNC_0(&VAR_9->capturing) > 0)
  return -VAR_0;

 VAR_9->cxhdl.width = VAR_12;
 VAR_9->cxhdl.height = VAR_13;
 if (FUNC_3(VAR_9->cxhdl.video_encoding) == VAR_2)
  VAR_7->fmt.pix.width /= 2;
 VAR_10.width = VAR_7->fmt.pix.width;
 VAR_10.height = VAR_13;
 VAR_10.code = VAR_1;
 FUNC_4(VAR_9->sd_video, VAR_4, VAR_3, &VAR_10);
 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
