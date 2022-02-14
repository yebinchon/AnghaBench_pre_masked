
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 FUNC_1(VAR_0, "Status: SA00=0x%02x SA01=0x%02x\n",
   FUNC_0(VAR_0, 0), FUNC_0(VAR_0, 1));
 return 0;
}
