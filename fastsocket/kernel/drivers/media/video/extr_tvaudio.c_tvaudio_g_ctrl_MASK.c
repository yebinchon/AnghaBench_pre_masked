
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct CHIPSTATE {int muted; int bass; int treble; int right; int left; struct CHIPDESC* desc; } ;
struct CHIPDESC {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct CHIPSTATE* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
       struct v4l2_control *VAR_5)
{
 struct CHIPSTATE *VAR_6 = FUNC_2(VAR_4);
 struct CHIPDESC *VAR_7 = VAR_6->desc;

 switch (VAR_5->id) {
 case 130:
  if (!(VAR_7->flags & VAR_1))
   break;
  VAR_5->value=VAR_6->muted;
  return 0;
 case 128:
  if (!(VAR_7->flags & VAR_2))
   break;
  VAR_5->value = FUNC_0(VAR_6->left,VAR_6->right);
  return 0;
 case 132:
 {
  int VAR_8;
  if (!(VAR_7->flags & VAR_2))
   break;
  VAR_8 = FUNC_0(VAR_6->left,VAR_6->right);
  if (VAR_8)
   VAR_5->value=(32768*FUNC_1(VAR_6->left,VAR_6->right))/VAR_8;
  else
   VAR_5->value=32768;
  return 0;
 }
 case 131:
  if (!(VAR_7->flags & VAR_0))
   break;
  VAR_5->value = VAR_6->bass;
  return 0;
 case 129:
  if (!(VAR_7->flags & VAR_0))
   break;
  VAR_5->value = VAR_6->treble;
  return 0;
 }
 return -VAR_3;
}
