
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int pixelformat; int bytesperline; int sizeimage; int colorspace; scalar_t__ priv; int field; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct tcm825x_sensor {TYPE_2__* i2c_client; } ;
typedef enum image_size { ____Placeholder_image_size } image_size ;
struct TYPE_8__ {int pixelformat; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct v4l2_int_device*,int,int) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_2(struct v4l2_int_device *VAR_7,
        struct v4l2_format *VAR_8)
{
 struct tcm825x_sensor *VAR_9 = VAR_7->priv;
 enum image_size VAR_10;
 int VAR_11;
 struct v4l2_pix_format *VAR_12 = &VAR_8->fmt.pix;

 VAR_10 = FUNC_1(VAR_7, VAR_12->width, VAR_12->height);
 FUNC_0(&VAR_9->i2c_client->dev, "isize = %d num_capture = %lu\n",
  VAR_10, (unsigned long)VAR_1);

 VAR_12->width = VAR_6[VAR_10].width;
 VAR_12->height = VAR_6[VAR_10].height;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  if (VAR_12->pixelformat == VAR_5[VAR_11].pixelformat)
   break;

 if (VAR_11 == VAR_1)
  VAR_11 = 0;

 VAR_12->pixelformat = VAR_5[VAR_11].pixelformat;
 VAR_12->field = VAR_4;
 VAR_12->bytesperline = VAR_12->width * VAR_0;
 VAR_12->sizeimage = VAR_12->bytesperline * VAR_12->height;
 VAR_12->priv = 0;
 FUNC_0(&VAR_9->i2c_client->dev, "format = 0x%08x\n",
  VAR_12->pixelformat);

 switch (VAR_12->pixelformat) {
 case 128:
 default:
  VAR_12->colorspace = VAR_2;
  break;
 case 129:
  VAR_12->colorspace = VAR_3;
  break;
 }

 return 0;
}
