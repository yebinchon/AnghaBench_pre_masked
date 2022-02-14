
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s1d13xxxfb_par {int display; } ;
struct fb_info {struct s1d13xxxfb_par* par; } ;


 int VAR_0 ;





 int FUNC_0 (struct s1d13xxxfb_par*,int) ;
 int FUNC_1 (char*,int,struct fb_info*) ;
 int FUNC_2 (struct s1d13xxxfb_par*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, struct fb_info *VAR_2)
{
 struct s1d13xxxfb_par *VAR_3 = VAR_2->par;

 FUNC_1("s1d13xxxfb_blank: blank=%d, info=%p\n", VAR_1, VAR_2);

 switch (VAR_1) {
  case 129:
  case 131:
   if ((VAR_3->display & 0x01) != 0)
    FUNC_2(VAR_3, 1);
   if ((VAR_3->display & 0x02) != 0)
    FUNC_0(VAR_3, 1);
   break;
  case 128:
  case 132:
   break;
  case 130:
   FUNC_2(VAR_3, 0);
   FUNC_0(VAR_3, 0);
   break;
  default:
   return -VAR_0;
 }


 return ((VAR_1 == 131) ? 1 : 0);
}
