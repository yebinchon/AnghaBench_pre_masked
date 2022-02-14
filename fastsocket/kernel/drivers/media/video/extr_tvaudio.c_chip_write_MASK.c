
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,int) ;
 int FUNC_5 (struct v4l2_subdev*,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct CHIPSTATE *VAR_2, int VAR_3, int VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_2->sd;
 struct i2c_client *VAR_6 = FUNC_3(VAR_5);
 unsigned char VAR_7[2];

 if (VAR_3 < 0) {
  FUNC_2(1, VAR_1, VAR_5, "chip_write: 0x%x\n", VAR_4);
  VAR_2->shadow.bytes[1] = VAR_4;
  VAR_7[0] = VAR_4;
  if (1 != FUNC_1(VAR_6, VAR_7, 1)) {
   FUNC_5(VAR_5, "I/O error (write 0x%x)\n", VAR_4);
   return -1;
  }
 } else {
  if (VAR_3 + 1 >= FUNC_0(VAR_2->shadow.bytes)) {
   FUNC_4(VAR_5,
    "Tried to access a non-existent register: %d\n",
    VAR_3);
   return -VAR_0;
  }

  FUNC_2(1, VAR_1, VAR_5, "chip_write: reg%d=0x%x\n",
   VAR_3, VAR_4);
  VAR_2->shadow.bytes[VAR_3+1] = VAR_4;
  VAR_7[0] = VAR_3;
  VAR_7[1] = VAR_4;
  if (2 != FUNC_1(VAR_6, VAR_7, 2)) {
   FUNC_5(VAR_5, "I/O error (write reg%d=0x%x)\n",
    VAR_3, VAR_4);
   return -1;
  }
 }
 return 0;
}
