
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;
struct CHIPSTATE {struct CHIPDESC* desc; } ;
struct CHIPDESC {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 struct CHIPSTATE* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_queryctrl*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, struct v4l2_queryctrl *VAR_5)
{
 struct CHIPSTATE *VAR_6 = FUNC_0(VAR_4);
 struct CHIPDESC *VAR_7 = VAR_6->desc;

 switch (VAR_5->id) {
 case 130:
  if (VAR_7->flags & VAR_1)
   return FUNC_1(VAR_5, 0, 1, 1, 0);
  break;
 case 128:
  if (VAR_7->flags & VAR_2)
   return FUNC_1(VAR_5, 0, 65535, 65535 / 100, 58880);
  break;
 case 132:
  if (VAR_7->flags & VAR_2)
   return FUNC_1(VAR_5, 0, 65535, 65535 / 100, 32768);
  break;
 case 131:
 case 129:
  if (VAR_7->flags & VAR_0)
   return FUNC_1(VAR_5, 0, 65535, 65535 / 100, 32768);
  break;
 default:
  break;
 }
 return -VAR_3;
}
