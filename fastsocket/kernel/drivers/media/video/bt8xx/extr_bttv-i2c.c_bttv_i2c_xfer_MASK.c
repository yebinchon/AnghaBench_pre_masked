
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bttv*,struct i2c_msg*,int) ;
 int FUNC_1 (struct bttv*,struct i2c_msg*,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_4 ;
 struct v4l2_device* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (char*) ;
 struct bttv* FUNC_5 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_5, struct i2c_msg *VAR_6, int VAR_7)
{
 struct v4l2_device *VAR_8 = FUNC_3(VAR_5);
 struct bttv *VAR_9 = FUNC_5(VAR_8);
 int VAR_10 = 0;
 int VAR_11;

 if (VAR_4)
  FUNC_4("bt-i2c:");
 FUNC_2(VAR_0|VAR_1, VAR_2);
 for (VAR_11 = 0 ; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_6[VAR_11].flags & VAR_3) {

   VAR_10 = FUNC_0(VAR_9, &VAR_6[VAR_11], VAR_11+1 == VAR_7);
   if (VAR_10 < 0)
    goto err;
  } else {

   VAR_10 = FUNC_1(VAR_9, &VAR_6[VAR_11], VAR_11+1 == VAR_7);
   if (VAR_10 < 0)
    goto err;
  }
 }
 return VAR_7;

 err:
 return VAR_10;
}
