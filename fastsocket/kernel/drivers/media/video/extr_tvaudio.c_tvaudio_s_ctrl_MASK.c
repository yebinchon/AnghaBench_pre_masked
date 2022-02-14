
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct CHIPSTATE {int muted; size_t input; int left; int right; int bass; int treble; struct CHIPDESC* desc; } ;
struct CHIPDESC {int flags; int (* treblefunc ) (int) ;int treblereg; int (* bassfunc ) (int) ;int bassreg; int (* volfunc ) (int) ;int rightreg; int leftreg; int inputmask; int * inputmap; int inputreg; int inputmute; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct CHIPSTATE*,int ,int ) ;
 int FUNC_1 (struct CHIPSTATE*,int ,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 struct CHIPSTATE* FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_5,
       struct v4l2_control *VAR_6)
{
 struct CHIPSTATE *VAR_7 = FUNC_10(VAR_5);
 struct CHIPDESC *VAR_8 = VAR_7->desc;

 switch (VAR_6->id) {
 case 130:
  if (!(VAR_8->flags & VAR_1))
   break;

  if (VAR_6->value < 0 || VAR_6->value >= 2)
   return -VAR_4;
  VAR_7->muted = VAR_6->value;
  if (VAR_7->muted)
   FUNC_1(VAR_7,VAR_8->inputreg,VAR_8->inputmute,VAR_8->inputmask);
  else
   FUNC_1(VAR_7,VAR_8->inputreg,
     VAR_8->inputmap[VAR_7->input],VAR_8->inputmask);
  return 0;
 case 128:
 {
  int VAR_9,VAR_10;

  if (!(VAR_8->flags & VAR_2))
   break;

  VAR_9 = FUNC_2(VAR_7->left,VAR_7->right);
  if (VAR_9)
   VAR_10=(32768*FUNC_3(VAR_7->left,VAR_7->right))/VAR_9;
  else
   VAR_10=32768;

  VAR_9=VAR_6->value;
  VAR_7->left = (FUNC_3(65536 - VAR_10,32768) * VAR_9) / 32768;
  VAR_7->right = (FUNC_3(VAR_10,VAR_9 *(__u16)32768)) / 32768;

  FUNC_0(VAR_7,VAR_8->leftreg,VAR_8->volfunc(VAR_7->left));
  FUNC_0(VAR_7,VAR_8->rightreg,VAR_8->volfunc(VAR_7->right));

  return 0;
 }
 case 132:
 {
  int VAR_11, VAR_12;
  if (!(VAR_8->flags & VAR_2))
   break;

  VAR_11 = FUNC_2(VAR_7->left,VAR_7->right);
  VAR_12 = VAR_6->value;

  FUNC_0(VAR_7,VAR_8->leftreg,VAR_8->volfunc(VAR_7->left));
  FUNC_0(VAR_7,VAR_8->rightreg,VAR_8->volfunc(VAR_7->right));

  return 0;
 }
 case 131:
  if (!(VAR_8->flags & VAR_0))
   break;
  VAR_7->bass = VAR_6->value;
  FUNC_0(VAR_7,VAR_8->bassreg,VAR_8->bassfunc(VAR_7->bass));

  return 0;
 case 129:
  if (!(VAR_8->flags & VAR_0))
   break;
  VAR_7->treble = VAR_6->value;
  FUNC_0(VAR_7,VAR_8->treblereg,VAR_8->treblefunc(VAR_7->treble));

  return 0;
 }
 return -VAR_3;
}
