
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_2, int VAR_3)
{
 FUNC_1(1, VAR_0, VAR_2, "writing registers to set audio mode by set %d\n",
   VAR_3);

 FUNC_0(VAR_2, 0x46c, VAR_1[VAR_3][0]);
 FUNC_0(VAR_2, 0x470, VAR_1[VAR_3][1]);
}
