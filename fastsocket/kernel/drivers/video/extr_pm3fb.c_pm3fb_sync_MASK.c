
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm3_par {int dummy; } ;
struct fb_info {struct pm3_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct pm3_par*,int ) ;
 int FUNC_1 (struct pm3_par*,int) ;
 int FUNC_2 (struct pm3_par*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_6)
{
 struct pm3_par *VAR_7 = VAR_6->par;

 FUNC_1(VAR_7, 2);
 FUNC_2(VAR_7, VAR_0, VAR_1);
 FUNC_2(VAR_7, VAR_4, 0);
 FUNC_4();
 do {
  while ((FUNC_0(VAR_7, VAR_2)) == 0)
   FUNC_3();
 } while ((FUNC_0(VAR_7, VAR_3)) != VAR_5);

 return 0;
}
