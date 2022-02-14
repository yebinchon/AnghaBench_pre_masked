
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; int colorspace; int field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_7, struct v4l2_mbus_framefmt *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 FUNC_3(1, VAR_6, VAR_7, "decoder set size\n");

 if (VAR_8->code != VAR_5)
  return -VAR_0;


 if (VAR_8->width < 1 || VAR_8->width > 1440)
  return -VAR_0;
 if (VAR_8->height < 1 || VAR_8->height > 960)
  return -VAR_0;

 VAR_8->field = VAR_4;
 VAR_8->colorspace = VAR_3;



 VAR_9 = VAR_2 / VAR_8->width;
 if (VAR_9 == 0)
  VAR_9 = 1;
 VAR_10 = 1024 * VAR_2 / VAR_9 / VAR_8->width;

 VAR_11 = 512 * 2 * VAR_1 / VAR_8->height;


 FUNC_1(VAR_7, 0, VAR_9);
 FUNC_1(VAR_7, 1, VAR_9);



 FUNC_0(VAR_7, 0x6C, (u8)(VAR_10 & 0xFF));
 FUNC_0(VAR_7, 0x6D, (u8)((VAR_10 >> 8) & 0xFF));

 FUNC_0(VAR_7, 0xAC, (u8)(VAR_10 & 0xFF));
 FUNC_0(VAR_7, 0xAD, (u8)((VAR_10 >> 8) & 0xFF));


 FUNC_2(VAR_7, 0, VAR_11);
 FUNC_2(VAR_7, 1, VAR_11);




 FUNC_0(VAR_7, 0x5C, (u8)(VAR_8->width & 0xFF));
 FUNC_0(VAR_7, 0x5D, (u8)((VAR_8->width >> 8) & 0xFF));

 FUNC_0(VAR_7, 0x9C, (u8)(VAR_8->width & 0xFF));
 FUNC_0(VAR_7, 0x9D, (u8)((VAR_8->width >> 8) & 0xFF));



 FUNC_0(VAR_7, 0x5E, (u8)(VAR_8->height & 0xFF));
 FUNC_0(VAR_7, 0x5F, (u8)((VAR_8->height >> 8) & 0xFF));

 FUNC_0(VAR_7, 0x9E, (u8)(VAR_8->height & 0xFF));
 FUNC_0(VAR_7, 0x9F, (u8)((VAR_8->height >> 8) & 0xFF));
 return 0;
}
