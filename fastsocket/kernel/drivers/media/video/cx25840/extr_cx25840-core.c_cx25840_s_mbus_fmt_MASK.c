
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,int,int,int,int) ;
 int FUNC_5 (struct i2c_client*,char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_7, struct v4l2_mbus_framefmt *VAR_8)
{
 struct cx25840_state *VAR_9 = FUNC_2(VAR_7);
 struct i2c_client *VAR_10 = FUNC_3(VAR_7);
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = !(VAR_9->std & VAR_5);

 if (VAR_8->code != VAR_4)
  return -VAR_0;

 VAR_8->field = VAR_3;
 VAR_8->colorspace = VAR_2;

 VAR_13 = (FUNC_0(VAR_10, 0x476) & 0x3f) << 4;
 VAR_13 |= (FUNC_0(VAR_10, 0x475) & 0xf0) >> 4;

 VAR_14 = (FUNC_0(VAR_10, 0x472) & 0x3f) << 4;
 VAR_14 |= (FUNC_0(VAR_10, 0x471) & 0xf0) >> 4;

 VAR_16 = VAR_8->height + (VAR_17 ? 4 : 7);

 if ((VAR_8->width * 16 < VAR_14) || (VAR_14 < VAR_8->width) ||
   (VAR_16 * 8 < VAR_13) || (VAR_13 < VAR_16)) {
  FUNC_5(VAR_10, "%dx%d is not a valid size!\n",
    VAR_8->width, VAR_8->height);
  return -VAR_1;
 }

 VAR_11 = (VAR_14 * (1 << 20)) / VAR_8->width - (1 << 20);
 VAR_12 = (1 << 16) - (VAR_13 * (1 << 9) / VAR_16 - (1 << 9));
 VAR_12 &= 0x1fff;

 if (VAR_8->width >= 385)
  VAR_15 = 0;
 else if (VAR_8->width > 192)
  VAR_15 = 1;
 else if (VAR_8->width > 96)
  VAR_15 = 2;
 else
  VAR_15 = 3;

 FUNC_4(1, VAR_6, VAR_10, "decoder set size %dx%d -> scale  %ux%u\n",
   VAR_8->width, VAR_8->height, VAR_11, VAR_12);


 FUNC_1(VAR_10, 0x418, VAR_11 & 0xff);
 FUNC_1(VAR_10, 0x419, (VAR_11 >> 8) & 0xff);
 FUNC_1(VAR_10, 0x41a, VAR_11 >> 16);

 FUNC_1(VAR_10, 0x41c, VAR_12 & 0xff);
 FUNC_1(VAR_10, 0x41d, VAR_12 >> 8);

 FUNC_1(VAR_10, 0x41e, 0x8 | VAR_15);
 return 0;
}
