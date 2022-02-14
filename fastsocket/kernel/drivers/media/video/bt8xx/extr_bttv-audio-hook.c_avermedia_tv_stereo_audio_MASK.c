
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
 int VAR_4 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bttv*,char*) ;

void FUNC_2(struct bttv *VAR_6, struct v4l2_tuner *VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8) {
  if (VAR_7->audmode & VAR_2)
   VAR_9 = 0x01;
  if (VAR_7->audmode & VAR_4)
   VAR_9 = 0x02;
  FUNC_0(VAR_9, ~0x03, VAR_0);
  if (VAR_5)
   FUNC_1(VAR_6,"avermedia");
 } else {
  VAR_7->audmode = VAR_3 | VAR_4 |
   VAR_1 | VAR_2;
  return;
 }
}
