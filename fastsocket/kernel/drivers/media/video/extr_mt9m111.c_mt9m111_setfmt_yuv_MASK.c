
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {scalar_t__ swap_yuv_y_chromas; scalar_t__ swap_yuv_cb_cr; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 struct mt9m111 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 if (VAR_3->swap_yuv_cb_cr)
  VAR_4 |= VAR_1;
 if (VAR_3->swap_yuv_y_chromas)
  VAR_4 |= VAR_0;

 return FUNC_0(VAR_2, VAR_4);
}
