
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct epson1355_par* par; } ;
struct epson1355_par {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct epson1355_par*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct fb_info *VAR_2)
{
 struct epson1355_par *VAR_3 = VAR_2->par;

 switch (VAR_1) {
 case 129:
 case 131:
  FUNC_1(VAR_3, 1);
  FUNC_0(1);
  break;
 case 128:
 case 132:
  FUNC_0(0);
  break;
 case 130:
  FUNC_0(0);
  FUNC_1(VAR_3, 0);
  break;
 default:
  return -VAR_0;
 }


 return (VAR_1 == 131) ? 1 : 0;
}
