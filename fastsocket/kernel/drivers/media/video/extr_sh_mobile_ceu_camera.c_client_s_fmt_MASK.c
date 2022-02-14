
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {unsigned int width; unsigned int height; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_3__ bounds; int type; TYPE_2__ fmt; } ;
struct v4l2_cropcap {TYPE_3__ bounds; int type; TYPE_2__ fmt; } ;
struct TYPE_4__ {struct device* parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int,unsigned int) ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct soc_camera_device *VAR_4, struct v4l2_format *VAR_5,
   bool VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_3(VAR_4);
 struct device *VAR_8 = VAR_4->dev.parent;
 struct v4l2_pix_format *VAR_9 = &VAR_5->fmt.pix;
 unsigned int VAR_10 = VAR_9->width, VAR_11 = VAR_9->height, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 struct v4l2_cropcap VAR_16;
 int VAR_17;

 VAR_16.type = VAR_0;

 VAR_17 = FUNC_4(VAR_7, VAR_3, VAR_1, &VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14 = FUNC_2(VAR_16.bounds.width, 2560);
 VAR_15 = FUNC_2(VAR_16.bounds.height, 1920);

 VAR_17 = FUNC_4(VAR_7, VAR_3, VAR_2, VAR_5);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_1(VAR_8, "camera scaled to %ux%u\n", VAR_9->width, VAR_9->height);

 if ((VAR_10 == VAR_9->width && VAR_11 == VAR_9->height) || !VAR_6)
  return 0;


 VAR_12 = VAR_9->width;
 VAR_13 = VAR_9->height;


 while ((VAR_10 > VAR_12 || VAR_11 > VAR_13) &&
        VAR_12 < VAR_14 && VAR_13 < VAR_15) {
  VAR_12 = FUNC_2(2 * VAR_12, VAR_14);
  VAR_13 = FUNC_2(2 * VAR_13, VAR_15);
  VAR_9->width = VAR_12;
  VAR_9->height = VAR_13;
  VAR_17 = FUNC_4(VAR_7, VAR_3, VAR_2, VAR_5);
  FUNC_1(VAR_8, "Camera scaled to %ux%u\n",
   VAR_9->width, VAR_9->height);
  if (VAR_17 < 0) {

   FUNC_0(VAR_8, "Client failed to set format: %d\n", VAR_17);
   return VAR_17;
  }
 }

 return 0;
}
