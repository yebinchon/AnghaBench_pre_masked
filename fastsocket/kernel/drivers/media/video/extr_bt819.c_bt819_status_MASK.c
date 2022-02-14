
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct bt819 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bt819*,int) ;
 int VAR_3 ;
 struct bt819* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, u32 *VAR_5, v4l2_std_id *VAR_6)
{
 struct bt819 *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_0(VAR_7, 0x00);
 int VAR_9 = VAR_0;
 v4l2_std_id VAR_10;

 if ((VAR_8 & 0x80))
  VAR_9 = 0;

 if ((VAR_8 & 0x10))
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;
 if (VAR_6)
  *VAR_6 = VAR_10;
 if (VAR_5)
  *VAR_5 = VAR_8;

 FUNC_2(1, VAR_3, VAR_4, "get status %x\n", VAR_8);
 return 0;
}
