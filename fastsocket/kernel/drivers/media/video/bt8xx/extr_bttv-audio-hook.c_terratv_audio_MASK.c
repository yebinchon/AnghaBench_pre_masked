
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bttv*,char*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct bttv *VAR_5, struct v4l2_tuner *VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_7) {
  FUNC_2(0x180000,0x180000);
  if (VAR_6->audmode & VAR_1)
   VAR_8 = 0x080000;
  if (VAR_6->audmode & VAR_3)
   VAR_8 = 0x180000;
  FUNC_1(0x180000, VAR_8);
  if (VAR_4)
   FUNC_0(VAR_5,"terratv");
 } else {
  VAR_6->audmode = VAR_2 | VAR_3 |
   VAR_0 | VAR_1;
 }
}
