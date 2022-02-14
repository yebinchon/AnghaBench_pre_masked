
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

int FUNC_2(int VAR_8, struct fb_info *VAR_9)
{
 unsigned short VAR_10;

 if (VAR_8) {
  VAR_10 = FUNC_0(VAR_4);
  VAR_10 &= ~VAR_5;
  FUNC_1(VAR_10, VAR_4);

  VAR_10 = FUNC_0(VAR_0);
  VAR_10 |= VAR_1;
  FUNC_1(VAR_10, VAR_0);

  VAR_10 = FUNC_0(VAR_6);
  VAR_10 |= VAR_7;
  FUNC_1(VAR_10, VAR_6);
 } else {
  VAR_10 = FUNC_0(VAR_6);
  VAR_10 &= ~VAR_7;
  FUNC_1(VAR_10, VAR_6);

  VAR_10 = FUNC_0(VAR_0);
  VAR_10 &= ~(VAR_1 | VAR_3);
  FUNC_1(VAR_10, VAR_0);

  do {
      VAR_10 = FUNC_0(VAR_0);
  } while(VAR_10&VAR_2);

  VAR_10 = FUNC_0(VAR_4);
  VAR_10 |= VAR_5;
  FUNC_1(VAR_10, VAR_4);
 }
 return 0;
}
