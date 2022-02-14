
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6, u32 *VAR_7, v4l2_std_id *VAR_8)
{
 int VAR_9 = VAR_2;
 u8 VAR_10;
 v4l2_std_id VAR_11 = VAR_3;

 VAR_10 = FUNC_0(VAR_6, VAR_0);
 if (!(VAR_10 & 0x20))
  VAR_9 = 0;
 if (!(VAR_10 & 0x01))
  VAR_9 |= VAR_1;
 if ((VAR_10 & 0x08))
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;
 if (VAR_8)
  *VAR_8 = VAR_11;
 if (VAR_7)
  *VAR_7 = VAR_9;
 return 0;
}
