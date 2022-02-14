
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0, 0x09) & 7;
 u8 VAR_2 = FUNC_0(VAR_0, 0x04);
 int VAR_3 = FUNC_0(VAR_0, 0x08) & 0x3f;

 FUNC_1(VAR_0, "Input:  %d%s\n", VAR_1,
   (VAR_2 & 0x80) ? " (muted)" : "");
 if (VAR_3 >= 32)
  VAR_3 = VAR_3 - 64;
 FUNC_1(VAR_0, "Volume: %d dB\n", VAR_3);
 return 0;
}
