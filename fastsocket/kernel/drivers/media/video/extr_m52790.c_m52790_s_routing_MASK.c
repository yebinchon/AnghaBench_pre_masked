
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct v4l2_subdev {int dummy; } ;
struct m52790_state {void* output; void* input; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 struct m52790_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
       u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct m52790_state *VAR_4 = FUNC_1(VAR_0);

 VAR_4->input = VAR_1;
 VAR_4->output = VAR_2;
 FUNC_0(VAR_0);
 return 0;
}
