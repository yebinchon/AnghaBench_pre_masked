
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; int width; int height; int bytesperline; int sizeimage; } ;
struct running_context {int tvnormid; struct v4l2_pix_format pix; } ;
struct video_data {struct running_context context; } ;
struct poseidon {int lock; struct video_data video_data; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct poseidon*,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct poseidon *VAR_10, struct v4l2_pix_format *VAR_11)
{
 struct video_data *VAR_12 = &VAR_10->video_data;
 struct running_context *VAR_13 = &VAR_12->context;
 struct v4l2_pix_format *VAR_14 = &VAR_13->pix;
 s32 VAR_15 = 0, VAR_16 = 0, VAR_17;


 if (VAR_11->pixelformat == VAR_5) {
  VAR_17 = VAR_1;
 } else {
  VAR_11->pixelformat = VAR_6;
  VAR_17 = VAR_2;
 }
 VAR_15 = FUNC_1(VAR_10, VAR_9,
    VAR_17, &VAR_16);


 VAR_17 = VAR_4;
 switch (VAR_11->width) {
 case 704:
  VAR_17 = VAR_3;
  break;
 default:
  VAR_11->width = 720;
 case 720:
  break;
 }
 VAR_15 |= FUNC_1(VAR_10, VAR_8,
    VAR_17, &VAR_16);
 if (VAR_15 || VAR_16) {
  FUNC_0(&VAR_10->lock);
  return -VAR_0;
 }

 VAR_14->pixelformat = VAR_11->pixelformat;
 VAR_11->height = (VAR_13->tvnormid & VAR_7) ? 480 : 576;


 if ((VAR_14->width != VAR_11->width)
  || (VAR_14->height != VAR_11->height)) {
  VAR_14->width = VAR_11->width;
  VAR_14->height = VAR_11->height;
  VAR_14->bytesperline = VAR_11->width * 2;
  VAR_14->sizeimage = VAR_11->width * VAR_11->height * 2;
 }
 *VAR_11 = *VAR_14;

 return 0;
}
