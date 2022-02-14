
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_9, v4l2_std_id *VAR_10)
{
 struct saa711x_state *VAR_11 = FUNC_1(VAR_9);
 int VAR_12;

 *VAR_10 = VAR_5;
 if (VAR_11->ident != VAR_2) {
  int VAR_13 = FUNC_0(VAR_9, VAR_1);

  if (VAR_13 & 0x20)
   *VAR_10 = VAR_3;
  else
   *VAR_10 = VAR_4;

  return 0;
 }

 VAR_12 = FUNC_0(VAR_9, VAR_0);

 switch (VAR_12 & 0x03) {
 case 1:
  *VAR_10 = VAR_6;
  break;
 case 2:
  *VAR_10 = VAR_7;
  break;
 case 3:
  *VAR_10 = VAR_8;
  break;
 default:
  break;
 }
 return 0;
}
