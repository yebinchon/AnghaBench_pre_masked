
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct bttv *VAR_3, struct v4l2_tuner *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = 0;

 if (VAR_5) {
  FUNC_1(0x300, 0x300);
  if (VAR_4->audmode & VAR_0)
   VAR_6 = 0x000;
  if (VAR_4->audmode & VAR_1)
   VAR_6 = 0x300;
  if (VAR_4->audmode & VAR_2)
   VAR_6 = 0x200;


  FUNC_0(0x300, VAR_6);
 } else {
  VAR_4->audmode = VAR_2 |
     VAR_0 | VAR_1;
 }
}
