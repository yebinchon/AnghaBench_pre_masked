
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dev; struct ti_port* context; int complete; } ;
struct tty_struct {int dummy; } ;
struct ti_port {scalar_t__ tp_read_urb_state; int tp_lock; TYPE_2__* tp_port; } ;
struct TYPE_4__ {TYPE_1__* serial; struct urb* read_urb; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct ti_port *VAR_4, struct tty_struct *VAR_5)
{
 struct urb *VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_0(&VAR_4->tp_lock, VAR_8);

 if (VAR_4->tp_read_urb_state == VAR_2) {
  VAR_4->tp_read_urb_state = VAR_1;
  VAR_6 = VAR_4->tp_port->read_urb;
  FUNC_1(&VAR_4->tp_lock, VAR_8);
  VAR_6->complete = VAR_3;
  VAR_6->context = VAR_4;
  VAR_6->dev = VAR_4->tp_port->serial->dev;
  VAR_7 = FUNC_2(VAR_6, VAR_0);
 } else {
  VAR_4->tp_read_urb_state = VAR_1;
  FUNC_1(&VAR_4->tp_lock, VAR_8);
 }

 return VAR_7;
}
