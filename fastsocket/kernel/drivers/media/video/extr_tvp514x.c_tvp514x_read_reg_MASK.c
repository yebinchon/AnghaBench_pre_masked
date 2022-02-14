
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct i2c_client *VAR_5 = FUNC_2(VAR_1);

read_again:

 VAR_3 = FUNC_0(VAR_5, VAR_2);
 if (VAR_3 == -1) {
  if (VAR_4 <= VAR_0) {
   FUNC_3(VAR_1, "Read: retry ... %d\n", VAR_4);
   VAR_4++;
   FUNC_1(10);
   goto read_again;
  }
 }

 return VAR_3;
}
