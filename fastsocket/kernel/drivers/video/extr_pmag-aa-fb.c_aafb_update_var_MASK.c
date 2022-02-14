
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct display {int dummy; } ;
struct TYPE_2__ {int y; int x; } ;
struct aafb_info {TYPE_1__ cursor; struct display disp; } ;


 int VAR_0 ;
 int FUNC_0 (struct display*,int ,int ,int ) ;
 int VAR_1 ;
 struct display* VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, struct fb_info *VAR_4)
{
 struct aafb_info *VAR_5 = (struct aafb_info *)VAR_4;
 struct display *VAR_6 = (VAR_3 < 0) ? &VAR_5->disp : (VAR_2 + VAR_3);

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_6, VAR_0, VAR_5->cursor.x, VAR_5->cursor.y);

 return 0;
}
