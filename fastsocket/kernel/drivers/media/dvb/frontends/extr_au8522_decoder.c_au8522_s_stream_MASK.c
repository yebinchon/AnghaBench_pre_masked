
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct au8522_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct au8522_state*,int ,int) ;
 int FUNC_1 (int) ;
 struct au8522_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct au8522_state *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_4, VAR_0,
    0x01);
  FUNC_1(1);
  FUNC_0(VAR_4, VAR_0,
    VAR_1);
 } else {


  FUNC_0(VAR_4, VAR_0,
    1 << 5);
 }
 return 0;
}
