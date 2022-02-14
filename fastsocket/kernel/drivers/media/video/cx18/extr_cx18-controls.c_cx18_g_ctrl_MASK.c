
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; } ;
struct cx18 {int sd_av; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_2(struct cx18 *VAR_3, struct v4l2_control *VAR_4)
{
 switch (VAR_4->id) {

 case 131:
 case 129:
 case 128:
 case 130:
  return FUNC_1(VAR_3->sd_av, VAR_1, VAR_2, VAR_4);

 case 132:
 case 134:
 case 137:
 case 136:
 case 133:
 case 135:
  return FUNC_1(VAR_3->sd_av, VAR_1, VAR_2, VAR_4);

 default:
  FUNC_0("invalid control 0x%x\n", VAR_4->id);
  return -VAR_0;
 }
 return 0;
}
