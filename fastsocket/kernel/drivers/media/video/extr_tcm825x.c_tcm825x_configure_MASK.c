
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_pix_format {int pixelformat; int height; int width; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct tcm825x_sensor {TYPE_2__* i2c_client; TYPE_1__* platform_data; struct v4l2_fract timeperframe; struct v4l2_pix_format pix; } ;
typedef enum pixel_format { ____Placeholder_pixel_format } pixel_format ;
typedef enum image_size { ____Placeholder_image_size } image_size ;
struct TYPE_11__ {int val; int reg; } ;
struct TYPE_10__ {int val; int reg; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int (* default_regs ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct v4l2_int_device*,int ,int ) ;
 TYPE_7__** VAR_3 ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_5__** VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct v4l2_int_device *VAR_5)
{
 struct tcm825x_sensor *VAR_6 = VAR_5->priv;
 struct v4l2_pix_format *VAR_7 = &VAR_6->pix;
 enum image_size VAR_8 = FUNC_2(VAR_5, VAR_7->width, VAR_7->height);
 struct v4l2_fract *VAR_9 = &VAR_6->timeperframe;
 enum pixel_format VAR_10;
 int VAR_11;
 u32 VAR_12;
 u8 VAR_13;


 VAR_11 = FUNC_4(
  VAR_6->i2c_client, VAR_6->platform_data->default_regs());
 if (VAR_11)
  return VAR_11;


 VAR_13 = VAR_4[VAR_8]->val;
 FUNC_0(&VAR_6->i2c_client->dev,
  "configuring image size %d\n", VAR_8);
 VAR_11 = FUNC_6(VAR_6->i2c_client,
         VAR_4[VAR_8]->reg, VAR_13);
 if (VAR_11)
  return VAR_11;


 switch (VAR_7->pixelformat) {
 default:
 case 129:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 }

 FUNC_0(&VAR_6->i2c_client->dev,
  "configuring pixel format %d\n", VAR_10);
 VAR_13 = VAR_3[VAR_10]->val;

 VAR_11 = FUNC_6(VAR_6->i2c_client,
         VAR_3[VAR_10]->reg, VAR_13);
 if (VAR_11)
  return VAR_11;





 VAR_12 = VAR_9->denominator / VAR_9->numerator;
 if (VAR_12 <= VAR_0) {
  VAR_13 = FUNC_3(VAR_6->i2c_client, 0x02);
  VAR_13 |= 0x80;
  FUNC_5(VAR_6->i2c_client, 0x02, VAR_13);
 }

 return 0;
}
