
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct bttv {scalar_t__ radio_user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bttv*,char*) ;
 int FUNC_1 (int,unsigned int) ;

void FUNC_2(struct bttv *VAR_5, struct v4l2_tuner *VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0xffff;

 if (VAR_5->radio_user)
  return;

 if (VAR_7) {
  if (VAR_6->audmode & VAR_2) {
   VAR_8 = 0x0000;
  }
  if ((VAR_6->audmode & (VAR_0 | VAR_1))
      || (VAR_6->audmode & VAR_3)) {
   VAR_8 = 0x1080;
  }
  if (VAR_8 != 0xffff) {
   FUNC_1(0x1800, VAR_8);
   if (VAR_4)
    FUNC_0(VAR_5,"fv2000s");
  }
 } else {
  VAR_6->audmode = VAR_2 | VAR_3 |
   VAR_0 | VAR_1;
 }
}
