
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; int colorspace; int field; } ;
struct saa6752hs_state {int video_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 struct saa6752hs_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_8, struct v4l2_mbus_framefmt *VAR_9)
{
 struct saa6752hs_state *VAR_10 = FUNC_1(VAR_8);
 int VAR_11, VAR_12, VAR_13;

 if (VAR_9->code != VAR_7)
  return -VAR_0;
 VAR_11 = FUNC_0(VAR_9->width - 352);
 VAR_12 = FUNC_0(VAR_9->width - 480);
 VAR_13 = FUNC_0(VAR_9->width - 720);
 if (VAR_13 < VAR_12) {
  VAR_9->width = 720;
  VAR_9->height = 576;
  VAR_10->video_format = VAR_3;
 } else if (VAR_12 < VAR_11) {
  VAR_9->width = 480;
  VAR_9->height = 576;
  VAR_10->video_format = VAR_2;
 } else {
  VAR_9->width = 352;
  if (FUNC_0(VAR_9->height - 576) <
      FUNC_0(VAR_9->height - 288)) {
   VAR_9->height = 576;
   VAR_10->video_format = VAR_1;
  } else {
   VAR_9->height = 288;
   VAR_10->video_format = VAR_4;
  }
 }
 VAR_9->field = VAR_6;
 VAR_9->colorspace = VAR_5;
 return 0;
}
