
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tdfx_par {int dummy; } ;
struct fb_info {struct tdfx_par* par; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int FUNC_1 (struct tdfx_par*,int) ;
 int FUNC_2 (struct tdfx_par*,int ) ;
 int FUNC_3 (struct tdfx_par*,int ,int) ;
 int FUNC_4 (struct tdfx_par*) ;
 int FUNC_5 (struct tdfx_par*) ;

__attribute__((used)) static int FUNC_6(int VAR_1, struct fb_info *VAR_2)
{
 struct tdfx_par *VAR_3 = VAR_2->par;
 int VAR_4 = 1;
 u32 VAR_5 = FUNC_2(VAR_3, VAR_0);

 VAR_5 &= ~(FUNC_0(1) | FUNC_0(3));

 switch (VAR_1) {
 case 129:
  VAR_4 = 0;
  break;
 case 131:
  break;
 case 128:
  VAR_5 |= FUNC_0(3);
  break;
 case 132:
  VAR_5 |= FUNC_0(1);
  break;
 case 130:
  VAR_5 |= FUNC_0(1) | FUNC_0(3);
  break;
 }

 FUNC_1(VAR_3, 1);
 FUNC_3(VAR_3, VAR_0, VAR_5);
 if (VAR_4)
  FUNC_4(VAR_3);
 else
  FUNC_5(VAR_3);
 return 0;
}
