
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; scalar_t__ expires; int function; } ;
struct fbcon_ops {int flags; TYPE_1__ cursor_timer; } ;
struct TYPE_5__ {scalar_t__ func; } ;
struct fb_info {TYPE_3__ queue; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_6)
{
 struct fbcon_ops *VAR_7 = VAR_6->fbcon_par;

 if ((!VAR_6->queue.func || VAR_6->queue.func == VAR_3) &&
     !(VAR_7->flags & VAR_0) &&
     !VAR_4) {
  if (!VAR_6->queue.func)
   FUNC_0(&VAR_6->queue, VAR_3);

  FUNC_2(&VAR_7->cursor_timer);
  VAR_7->cursor_timer.function = VAR_2;
  VAR_7->cursor_timer.expires = VAR_5 + VAR_1 / 5;
  VAR_7->cursor_timer.data = (unsigned long ) VAR_6;
  FUNC_1(&VAR_7->cursor_timer);
  VAR_7->flags |= VAR_0;
 }
}
