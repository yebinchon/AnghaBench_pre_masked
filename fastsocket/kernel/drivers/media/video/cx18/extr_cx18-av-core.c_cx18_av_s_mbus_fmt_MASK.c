
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;
struct cx18_av_state {int std; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int,int,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cx18*,int) ;
 int FUNC_3 (struct cx18*,int,int) ;
 struct cx18_av_state* FUNC_4 (struct v4l2_subdev*) ;
 struct cx18* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_6, struct v4l2_mbus_framefmt *VAR_7)
{
 struct cx18_av_state *VAR_8 = FUNC_4(VAR_6);
 struct cx18 *VAR_9 = FUNC_5(VAR_6);
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = !(VAR_8->std & VAR_5);

 if (VAR_7->code != VAR_4)
  return -VAR_0;

 VAR_7->field = VAR_3;
 VAR_7->colorspace = VAR_2;

 VAR_12 = (FUNC_2(VAR_9, 0x476) & 0x3f) << 4;
 VAR_12 |= (FUNC_2(VAR_9, 0x475) & 0xf0) >> 4;

 VAR_13 = (FUNC_2(VAR_9, 0x472) & 0x3f) << 4;
 VAR_13 |= (FUNC_2(VAR_9, 0x471) & 0xf0) >> 4;
 VAR_15 = VAR_7->height + (VAR_16 ? 3 : 1);
 if ((VAR_7->width * 16 < VAR_13) || (VAR_13 < VAR_7->width) ||
     (VAR_15 * 8 < VAR_12) || (VAR_12 < VAR_15)) {
  FUNC_1(VAR_6, "%dx%d is not a valid size!\n",
        VAR_7->width, VAR_7->height);
  return -VAR_1;
 }

 VAR_10 = (VAR_13 * (1 << 20)) / VAR_7->width - (1 << 20);
 VAR_11 = (1 << 16) - (VAR_12 * (1 << 9) / VAR_15 - (1 << 9));
 VAR_11 &= 0x1fff;

 if (VAR_7->width >= 385)
  VAR_14 = 0;
 else if (VAR_7->width > 192)
  VAR_14 = 1;
 else if (VAR_7->width > 96)
  VAR_14 = 2;
 else
  VAR_14 = 3;

 FUNC_0(VAR_6,
       "decoder set size %dx%d -> scale  %ux%u\n",
       VAR_7->width, VAR_7->height, VAR_10, VAR_11);


 FUNC_3(VAR_9, 0x418, VAR_10 & 0xff);
 FUNC_3(VAR_9, 0x419, (VAR_10 >> 8) & 0xff);
 FUNC_3(VAR_9, 0x41a, VAR_10 >> 16);

 FUNC_3(VAR_9, 0x41c, VAR_11 & 0xff);
 FUNC_3(VAR_9, 0x41d, VAR_11 >> 8);

 FUNC_3(VAR_9, 0x41e, 0x8 | VAR_14);
 return 0;
}
