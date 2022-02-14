
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct go7007 {int bitrate; int closed_gop; int gop_size; int aspect_ratio; int format; int dvd_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct v4l2_control *VAR_9, struct go7007 *VAR_10)
{
 switch (VAR_9->id) {
 case 133:
  if (VAR_10->dvd_mode)
   VAR_9->value = VAR_1;
  else
   VAR_9->value = VAR_2;
  break;
 case 130:
  switch (VAR_10->format) {
  case 139:
   VAR_9->value = VAR_6;
   break;
  case 138:
   VAR_9->value = VAR_7;
   break;
  case 137:
   VAR_9->value = VAR_8;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 132:
  switch (VAR_10->aspect_ratio) {
  case 135:
   VAR_9->value = VAR_4;
   break;
  case 134:
   VAR_9->value = VAR_5;
   break;
  case 136:
   VAR_9->value = VAR_3;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
  VAR_9->value = VAR_10->gop_size;
  break;
 case 129:
  VAR_9->value = VAR_10->closed_gop;
  break;
 case 131:
  VAR_9->value = VAR_10->bitrate;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
