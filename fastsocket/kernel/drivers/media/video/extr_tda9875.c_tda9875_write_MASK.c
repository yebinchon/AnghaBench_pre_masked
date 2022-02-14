
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,unsigned char) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, int VAR_2, unsigned char VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 unsigned char VAR_5[2];

 FUNC_1(1, VAR_0, VAR_1, "Writing %d 0x%x\n", VAR_2, VAR_3);
 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;
 if (2 != FUNC_0(VAR_4, VAR_5, 2)) {
  FUNC_3(VAR_1, "I/O error, trying (write %d 0x%x)\n",
         VAR_2, VAR_3);
  return -1;
 }
 return 0;
}
