
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info_control {int dummy; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (struct fb_info_control*,unsigned int) ;




 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 struct fb_info_control *VAR_2 = (struct fb_info_control *) VAR_1;
 unsigned VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_2,VAR_3));
 if (VAR_0 > 0)
  switch (VAR_0) {
  case 128:
   VAR_3 &= ~3;
   break;
  case 131:
   VAR_3 &= ~0x30;
   break;
  case 129:
   VAR_3 &= ~0x33;

  case 130:
   VAR_3 |= 0x400;
   break;
  default:
   break;
  }
 else {
  VAR_3 &= ~0x400;
  VAR_3 |= 0x33;
 }
 FUNC_2(FUNC_0(VAR_2,VAR_3), VAR_3);

 return 0;
}
