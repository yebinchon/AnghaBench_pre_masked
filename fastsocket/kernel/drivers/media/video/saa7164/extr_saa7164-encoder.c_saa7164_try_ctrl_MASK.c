
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct v4l2_ext_control *VAR_9, int VAR_10)
{
 int VAR_11 = -VAR_0;

 switch (VAR_9->id) {
 case 132:
  if ((VAR_9->value >= VAR_2) &&
   (VAR_9->value <= VAR_1))
   VAR_11 = 0;
  break;
 case 134:
  if ((VAR_9->value == VAR_3) ||
   (VAR_9->value == VAR_4))
   VAR_11 = 0;
  break;
 case 135:
  if ((VAR_9->value >= 0) &&
   (VAR_9->value <= 1))
   VAR_11 = 0;
  break;
 case 133:
  if ((VAR_9->value >= VAR_5) &&
   (VAR_9->value <= VAR_6))
   VAR_11 = 0;
  break;
 case 128:
  if ((VAR_9->value >= 0) &&
   (VAR_9->value <= 255))
   VAR_11 = 0;
  break;
 case 131:
  if ((VAR_9->value == VAR_8) ||
   (VAR_9->value == VAR_7))
   VAR_11 = 0;
  break;
 case 129:
  if ((VAR_9->value >= 1) &&
   (VAR_9->value <= 3))
   VAR_11 = 0;
  break;
 case 130:
  if ((VAR_9->value >= VAR_2) &&
   (VAR_9->value <= VAR_1))
   VAR_11 = 0;
  break;
 default:
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
