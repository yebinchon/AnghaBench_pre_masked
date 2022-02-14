
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct au8522_state {scalar_t__ current_frequency; int operational_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct au8522_state*,int,int) ;
 struct au8522_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 struct au8522_state *VAR_3 = FUNC_1(VAR_1);

 VAR_3->operational_mode = VAR_0;




 VAR_3->current_frequency = 0;

 FUNC_0(VAR_3, 0xa4, 1 << 5);

 return 0;
}
