
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {void* output; void* input; } ;


 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
        u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tvp5150 *VAR_4 = FUNC_0(VAR_0);

 VAR_4->input = VAR_1;
 VAR_4->output = VAR_2;
 FUNC_1(VAR_0);
 return 0;
}
