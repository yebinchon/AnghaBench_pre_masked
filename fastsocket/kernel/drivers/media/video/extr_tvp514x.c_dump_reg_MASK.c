
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, "Reg(0x%.2X): 0x%.2X\n", VAR_1, VAR_2);
}
