
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {scalar_t__ id; scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ minimum; scalar_t__ maximum; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct v4l2_subdev*,int ,scalar_t__) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_8, struct v4l2_control *VAR_9)
{
 u8 VAR_10, VAR_11;
 VAR_11 = FUNC_0(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_9->id != VAR_7[VAR_10].id)
   continue;
  if (VAR_9->value < VAR_7[VAR_10].minimum ||
      VAR_9->value > VAR_7[VAR_10].maximum)
   return -VAR_1;
  FUNC_2(1, VAR_6, VAR_8, "s_ctrl: id=%d, value=%d\n",
     VAR_9->id, VAR_9->value);
  break;
 }

 switch (VAR_9->id) {
 case 131:
  FUNC_1(VAR_8, VAR_2, VAR_9->value);
  return 0;
 case 130:
  FUNC_1(VAR_8, VAR_3, VAR_9->value);
  return 0;
 case 128:
  FUNC_1(VAR_8, VAR_5, VAR_9->value);
  return 0;
 case 129:
  FUNC_1(VAR_8, VAR_4, VAR_9->value);
  return 0;
 }
 return -VAR_0;
}
