
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xoffset; int yoffset; } ;
struct display {TYPE_1__ var; scalar_t__ fb_info; } ;
struct aafb_cursor {int x; int y; int enable; int vbl_cnt; scalar_t__ on; } ;
struct aafb_info {struct aafb_cursor cursor; } ;





 int VAR_0 ;
 int FUNC_0 (struct aafb_info*,scalar_t__) ;
 int FUNC_1 (struct display*) ;
 int FUNC_2 (struct display*) ;

__attribute__((used)) static void FUNC_3(struct display *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct aafb_info *VAR_5 = (struct aafb_info *)VAR_1->fb_info;
 struct aafb_cursor *VAR_6 = &VAR_5->cursor;

 VAR_3 *= FUNC_2(VAR_1);
 VAR_4 *= FUNC_1(VAR_1);

 if (VAR_6->x == VAR_3 && VAR_6->y == VAR_4 && (VAR_2 == 129) == !VAR_6->enable)
  return;

 VAR_6->enable = 0;
 if (VAR_6->on)
  FUNC_0(VAR_5, 0);
 VAR_6->x = VAR_3 - VAR_1->var.xoffset;
 VAR_6->y = VAR_4 - VAR_1->var.yoffset;

 switch (VAR_2) {
  case 129:
   VAR_6->on = 0;
   break;
  case 130:
  case 128:
   if (VAR_6->on)
    FUNC_0(VAR_5, VAR_6->on);
   else
    VAR_6->vbl_cnt = VAR_0;
   VAR_6->enable = 1;
   break;
 }
}
