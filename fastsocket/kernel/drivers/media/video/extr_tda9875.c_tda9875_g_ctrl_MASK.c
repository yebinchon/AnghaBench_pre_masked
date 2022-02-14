
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct tda9875 {int treble; int bass; int rvol; int lvol; } ;


 int VAR_0 ;




 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 struct tda9875* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct tda9875 *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2->id) {
 case 128:
 {
  int VAR_4 = (VAR_3->lvol+84)*606;
  int VAR_5 = (VAR_3->rvol+84)*606;

  VAR_2->value=FUNC_0(VAR_4,VAR_5);
  return 0;
 }
 case 131:
 {
  int VAR_6 = (VAR_3->lvol+84)*606;
  int VAR_7 = (VAR_3->rvol+84)*606;
  int VAR_8 = FUNC_0(VAR_6,VAR_7);
  int VAR_9 = (32768*FUNC_1(VAR_6,VAR_7))/
         (VAR_8 ? VAR_8 : 1);
  VAR_2->value=(VAR_6<VAR_7)?
   (65535-VAR_9) : VAR_9;
  return 0;
 }
 case 130:
  VAR_2->value = (VAR_3->bass+12)*2427;
  return 0;
 case 129:
  VAR_2->value = (VAR_3->treble+12)*2730;
  return 0;
 }
 return -VAR_0;
}
