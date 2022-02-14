
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int cursor_timer; } ;
struct fb_info {int queue; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct fb_info *VAR_3 = (struct fb_info *) VAR_2;
 struct fbcon_ops *VAR_4 = VAR_3->fbcon_par;

 FUNC_1(&VAR_3->queue);
 FUNC_0(&VAR_4->cursor_timer, VAR_1 + VAR_0/5);
}
