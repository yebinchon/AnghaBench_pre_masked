
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int lock; int rb_timer; } ;
typedef TYPE_1__ icn_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_5)
{
 icn_card *VAR_6 = (icn_card *) VAR_5;
 unsigned long VAR_7;

 if (VAR_6->flags & VAR_0) {
  FUNC_0(0, VAR_6);
  FUNC_1(0, VAR_6);
 }
 if (VAR_6->flags & VAR_1) {
  FUNC_0(1, VAR_6);
  FUNC_1(1, VAR_6);
 }
 if (VAR_6->flags & (VAR_0 | VAR_1)) {

  FUNC_3(&VAR_6->lock, VAR_7);
  FUNC_2(&VAR_6->rb_timer, VAR_4+VAR_3);
  VAR_6->flags |= VAR_2;
  FUNC_4(&VAR_6->lock, VAR_7);
 } else
  VAR_6->flags &= ~VAR_2;
}
