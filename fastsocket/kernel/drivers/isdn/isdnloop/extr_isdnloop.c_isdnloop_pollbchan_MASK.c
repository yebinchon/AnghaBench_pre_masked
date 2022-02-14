
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {int flags; int isdnloop_lock; TYPE_3__ rb_timer; } ;
typedef TYPE_1__ isdnloop_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_5)
{
 isdnloop_card *VAR_6 = (isdnloop_card *) VAR_5;
 unsigned long VAR_7;

 if (VAR_6->flags & VAR_0)
  FUNC_1(VAR_6, 0);
 if (VAR_6->flags & VAR_1)
  FUNC_1(VAR_6, 1);
 if (VAR_6->flags & (VAR_0 | VAR_1)) {

  FUNC_2(&VAR_6->isdnloop_lock, VAR_7);
  VAR_6->rb_timer.expires = VAR_4 + VAR_3;
  FUNC_0(&VAR_6->rb_timer);
  VAR_6->flags |= VAR_2;
  FUNC_3(&VAR_6->isdnloop_lock, VAR_7);
 } else
  VAR_6->flags &= ~VAR_2;
}
