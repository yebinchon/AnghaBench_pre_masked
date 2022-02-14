
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct tda7432 {int muted; int volume; int lf; int rf; int bass; int treble; } ;


 int VAR_0 ;





 int VAR_1 ;
 struct tda7432* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct tda7432 *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3->id) {
 case 130:
  VAR_3->value=VAR_4->muted;
  return 0;
 case 128:
  if (!VAR_1){
   VAR_3->value = ( 0x6f - (VAR_4->volume & 0x7F) ) * 630;
  } else {
   VAR_3->value = ( 0x6f - (VAR_4->volume & 0x7F) ) * 829;
  }
  return 0;
 case 132:
 {
  if ( (VAR_4->lf) < (VAR_4->rf) )

   VAR_3->value = (32768 - 1057*(VAR_4->rf));
  else

   VAR_3->value = (32768 + 1057*(VAR_4->lf));
  return 0;
 }
 case 131:
 {

  int VAR_5=VAR_4->bass;
  if(VAR_5 >= 0x8)
   VAR_5 = ~(VAR_5 - 0x8) & 0xf;
  VAR_3->value = (VAR_5 << 12)+(VAR_5 << 8)+(VAR_5 << 4)+(VAR_5);
  return 0;
 }
 case 129:
 {
  int VAR_6=VAR_4->treble;
  if(VAR_6 >= 0x8)
   VAR_6 = ~(VAR_6 - 0x8) & 0xf;
  VAR_3->value = (VAR_6 << 12)+(VAR_6 << 8)+(VAR_6 << 4)+(VAR_6);
  return 0;
 }
 }
 return -VAR_0;
}
