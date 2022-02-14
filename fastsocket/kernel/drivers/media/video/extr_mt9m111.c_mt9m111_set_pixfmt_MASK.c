
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int swap_yuv_y_chromas; int swap_yuv_cb_cr; } ;
struct i2c_client {int dev; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*) ;
 struct mt9m111* FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1,
         enum v4l2_mbus_pixelcode VAR_2)
{
 struct mt9m111 *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 switch (VAR_2) {
 case 132:
  VAR_4 = FUNC_2(VAR_1);
  break;
 case 133:
  VAR_4 = FUNC_1(VAR_1);
  break;
 case 135:
  VAR_4 = FUNC_3(VAR_1);
  break;
 case 134:
  VAR_4 = FUNC_4(VAR_1);
  break;
 case 131:
  VAR_3->swap_yuv_y_chromas = 0;
  VAR_3->swap_yuv_cb_cr = 0;
  VAR_4 = FUNC_5(VAR_1);
  break;
 case 130:
  VAR_3->swap_yuv_y_chromas = 0;
  VAR_3->swap_yuv_cb_cr = 1;
  VAR_4 = FUNC_5(VAR_1);
  break;
 case 129:
  VAR_3->swap_yuv_y_chromas = 1;
  VAR_3->swap_yuv_cb_cr = 0;
  VAR_4 = FUNC_5(VAR_1);
  break;
 case 128:
  VAR_3->swap_yuv_y_chromas = 1;
  VAR_3->swap_yuv_cb_cr = 1;
  VAR_4 = FUNC_5(VAR_1);
  break;
 default:
  FUNC_0(&VAR_1->dev, "Pixel format not handled : %x\n",
   VAR_2);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
