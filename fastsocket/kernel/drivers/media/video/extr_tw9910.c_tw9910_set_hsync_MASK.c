
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_priv {int revision; } ;
struct tw9910_hsync_ctrl {int start; int end; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct tw9910_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
       const struct tw9910_hsync_ctrl *VAR_4)
{
 struct tw9910_priv *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;


 VAR_6 = FUNC_0(VAR_3, VAR_0,
     (VAR_4->start & 0x07F8) >> 3);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_3, VAR_1,
     (VAR_4->end & 0x07F8) >> 3);
 if (VAR_6 < 0)
  return VAR_6;



 if (1 == VAR_5->revision)
  VAR_6 = FUNC_2(VAR_3, VAR_2, 0x77,
          (VAR_4->start & 0x0007) << 4 |
          (VAR_4->end & 0x0007));

 return VAR_6;
}
