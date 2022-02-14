
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_7__ {int flags; int isdnloop_lock; TYPE_1__ interface; int myid; int * c_timer; int rb_timer; int st_timer; } ;
typedef TYPE_2__ isdnloop_card ;
struct TYPE_8__ {int driver; int command; } ;
typedef TYPE_3__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(isdnloop_card * VAR_2)
{
 unsigned long VAR_3;
 isdn_ctrl VAR_4;

 FUNC_1(&VAR_2->isdnloop_lock, VAR_3);
 if (VAR_2->flags & VAR_0) {
  VAR_2->flags &= ~VAR_0;
  FUNC_0(&VAR_2->st_timer);
  FUNC_0(&VAR_2->rb_timer);
  FUNC_0(&VAR_2->c_timer[0]);
  FUNC_0(&VAR_2->c_timer[1]);
  VAR_4.command = VAR_1;
  VAR_4.driver = VAR_2->myid;
  VAR_2->interface.statcallb(&VAR_4);
 }
 FUNC_2(&VAR_2->isdnloop_lock, VAR_3);
}
