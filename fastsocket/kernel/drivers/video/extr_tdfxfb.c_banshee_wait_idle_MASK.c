
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdfx_par {int dummy; } ;
struct fb_info {struct tdfx_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tdfx_par*,int) ;
 int FUNC_1 (struct tdfx_par*,int ) ;
 int FUNC_2 (struct tdfx_par*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4)
{
 struct tdfx_par *VAR_5 = VAR_4->par;
 int VAR_6 = 0;

 FUNC_0(VAR_5, 1);
 FUNC_2(VAR_5, VAR_0, VAR_1);

 do {
  if ((FUNC_1(VAR_5, VAR_2) & VAR_3) == 0)
   VAR_6++;
 } while (VAR_6 < 3);

 return 0;
}
