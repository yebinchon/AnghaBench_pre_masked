
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {scalar_t__ id; scalar_t__ value; } ;
struct mt9v011 {scalar_t__ global_gain; scalar_t__ red_bal; scalar_t__ blue_bal; scalar_t__ hflip; scalar_t__ vflip; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ minimum; scalar_t__ maximum; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct mt9v011* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4, struct v4l2_control *VAR_5)
{
 struct mt9v011 *VAR_6 = FUNC_3(VAR_4);
 u8 VAR_7, VAR_8;
 VAR_8 = FUNC_0(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_5->id != VAR_3[VAR_7].id)
   continue;
  if (VAR_5->value < VAR_3[VAR_7].minimum ||
      VAR_5->value > VAR_3[VAR_7].maximum)
   return -VAR_1;
  FUNC_4(1, VAR_2, VAR_4, "s_ctrl: id=%d, value=%d\n",
     VAR_5->id, VAR_5->value);
  break;
 }

 switch (VAR_5->id) {
 case 131:
  VAR_6->global_gain = VAR_5->value;
  break;
 case 129:
  VAR_6->red_bal = VAR_5->value;
  break;
 case 132:
  VAR_6->blue_bal = VAR_5->value;
  break;
 case 130:
  VAR_6->hflip = VAR_5->value;
  FUNC_2(VAR_4);
  return 0;
 case 128:
  VAR_6->vflip = VAR_5->value;
  FUNC_2(VAR_4);
  return 0;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_4);

 return 0;
}
