
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_2__* ops; int ctrl_lock; TYPE_1__* link; int ctrl_status; scalar_t__ stopped; scalar_t__ flow_stopped; } ;
struct TYPE_4__ {int (* start ) (struct tty_struct*) ;} ;
struct TYPE_3__ {int read_wait; scalar_t__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct tty_struct *VAR_3)
{
 unsigned long VAR_4;
 FUNC_0(&VAR_3->ctrl_lock, VAR_4);
 if (!VAR_3->stopped || VAR_3->flow_stopped) {
  FUNC_1(&VAR_3->ctrl_lock, VAR_4);
  return;
 }
 VAR_3->stopped = 0;
 if (VAR_3->link && VAR_3->link->packet) {
  VAR_3->ctrl_status &= ~VAR_2;
  VAR_3->ctrl_status |= VAR_1;
  FUNC_4(&VAR_3->link->read_wait, VAR_0);
 }
 FUNC_1(&VAR_3->ctrl_lock, VAR_4);
 if (VAR_3->ops->start)
  (VAR_3->ops->start)(VAR_3);

 FUNC_3(VAR_3);
}
