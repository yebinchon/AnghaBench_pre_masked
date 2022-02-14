
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int name; } ;
struct cs53l32a_state {int hdl; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct cs53l32a_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct cs53l32a_state *VAR_1 = FUNC_1(VAR_0);
 u8 VAR_2 = FUNC_0(VAR_0, 0x01);

 FUNC_3(VAR_0, "Input:  %d\n", (VAR_2 >> 4) & 3);
 FUNC_2(&VAR_1->hdl, VAR_0->name);
 return 0;
}
