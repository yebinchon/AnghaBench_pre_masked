
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_6__ {int (* statcallb ) (TYPE_2__*) ;} ;
struct TYPE_8__ {int flags; int lock; struct TYPE_8__* other; scalar_t__ doubleS0; TYPE_1__ interface; int myid; int rb_timer; int st_timer; } ;
typedef TYPE_3__ icn_card ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(icn_card * VAR_2)
{
 unsigned long VAR_3;
 isdn_ctrl VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 if (VAR_2->flags & VAR_0) {
  VAR_2->flags &= ~VAR_0;
  FUNC_0(&VAR_2->st_timer);
  FUNC_0(&VAR_2->rb_timer);
  FUNC_2(&VAR_2->lock, VAR_3);
  VAR_4.command = VAR_1;
  VAR_4.driver = VAR_2->myid;
  VAR_2->interface.statcallb(&VAR_4);
  if (VAR_2->doubleS0)
   FUNC_4(VAR_2->other);
 } else
  FUNC_2(&VAR_2->lock, VAR_3);
}
