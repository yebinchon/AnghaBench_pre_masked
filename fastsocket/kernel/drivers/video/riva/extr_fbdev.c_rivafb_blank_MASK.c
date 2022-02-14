
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riva_par {int dummy; } ;
struct fb_info {struct riva_par* par; } ;


 int FUNC_0 (struct riva_par*,int) ;
 int FUNC_1 (struct riva_par*,int,unsigned char) ;





 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct riva_par*,int) ;
 int FUNC_5 (struct riva_par*,int,unsigned char) ;

__attribute__((used)) static int FUNC_6(int VAR_0, struct fb_info *VAR_1)
{
 struct riva_par *VAR_2= VAR_1->par;
 unsigned char VAR_3, VAR_4;

 VAR_3 = FUNC_4(VAR_2, 0x01) & ~0x20;
 VAR_4 = FUNC_0(VAR_2, 0x1a) & ~0xc0;

 FUNC_2();

 if (VAR_0)
  VAR_3 |= 0x20;

 switch (VAR_0) {
 case 129:
 case 131:
  break;
 case 128:
  VAR_4 |= 0x80;
  break;
 case 132:
  VAR_4 |= 0x40;
  break;
 case 130:
  VAR_4 |= 0xc0;
  break;
 }

 FUNC_5(VAR_2, 0x01, VAR_3);
 FUNC_1(VAR_2, 0x1a, VAR_4);

 FUNC_3();

 return 0;
}
