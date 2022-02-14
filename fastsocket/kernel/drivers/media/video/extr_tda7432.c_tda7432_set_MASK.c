
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tda7432 {unsigned char input; unsigned char volume; unsigned char bass; unsigned char treble; unsigned char lf; unsigned char lr; unsigned char rf; unsigned char rr; unsigned char loud; } ;
struct i2c_client {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 struct tda7432* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_2);
 struct tda7432 *VAR_4 = FUNC_1(VAR_2);
 unsigned char VAR_5[16];

 FUNC_2(1, VAR_1, VAR_2,
  "tda7432: 7432_set(0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x)\n",
  VAR_4->input, VAR_4->volume, VAR_4->bass, VAR_4->treble, VAR_4->lf, VAR_4->lr,
  VAR_4->rf, VAR_4->rr, VAR_4->loud);
 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_4->input;
 VAR_5[2] = VAR_4->volume;
 VAR_5[3] = VAR_4->bass;
 VAR_5[4] = VAR_4->treble;
 VAR_5[5] = VAR_4->lf;
 VAR_5[6] = VAR_4->lr;
 VAR_5[7] = VAR_4->rf;
 VAR_5[8] = VAR_4->rr;
 VAR_5[9] = VAR_4->loud;
 if (10 != FUNC_0(VAR_3, VAR_5, 10)) {
  FUNC_3(VAR_2, "I/O error, trying tda7432_set\n");
  return -1;
 }

 return 0;
}
