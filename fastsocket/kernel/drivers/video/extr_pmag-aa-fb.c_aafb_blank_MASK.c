
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int y; int x; } ;
struct aafb_info {TYPE_1__ cursor; int disp; int bt455; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_1, struct fb_info *VAR_2)
{
 struct aafb_info *VAR_3 = (struct aafb_info *)VAR_2;
 u8 VAR_4 = VAR_1 ? 0x00 : 0x0f;

 FUNC_1(VAR_3->bt455, 1, VAR_4, VAR_4, VAR_4);
 FUNC_0(&VAR_3->disp, VAR_0, VAR_3->cursor.x, VAR_3->cursor.y);
}
