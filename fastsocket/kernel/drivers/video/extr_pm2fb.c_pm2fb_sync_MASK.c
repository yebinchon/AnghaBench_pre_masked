
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2fb_par {int dummy; } ;
struct fb_info {struct pm2fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pm2fb_par*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct pm2fb_par*,int ) ;
 int FUNC_5 (struct pm2fb_par*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_3)
{
 struct pm2fb_par *VAR_4 = VAR_3->par;

 FUNC_1(VAR_4, 1);
 FUNC_5(VAR_4, VAR_2, 0);
 FUNC_3();
 do {
  while (FUNC_4(VAR_4, VAR_1) == 0)
   FUNC_2();
 } while (FUNC_4(VAR_4, VAR_0) != FUNC_0(VAR_2));

 return 0;
}
