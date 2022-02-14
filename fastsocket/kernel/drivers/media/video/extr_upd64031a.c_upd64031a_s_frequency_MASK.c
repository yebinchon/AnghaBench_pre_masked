
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int dummy; } ;
struct upd64031a_state {int* regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct upd64031a_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,size_t,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_frequency *VAR_3)
{
 struct upd64031a_state *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5 = VAR_4->regs[VAR_0];

 FUNC_2(1, VAR_1, VAR_2, "changed input or channel\n");
 FUNC_1(VAR_2, VAR_0, VAR_5 | 0x10);
 FUNC_1(VAR_2, VAR_0, VAR_5 & ~0x10);
 return 0;
}
