
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct serial_state {size_t irq; int type; int port; } ;
struct TYPE_4__ {unsigned char* buf; scalar_t__ tail; scalar_t__ head; } ;
struct async_struct {int flags; TYPE_2__* tty; TYPE_1__ xmit; struct async_struct* prev_port; struct async_struct* next_port; int line; struct serial_state* state; } ;
typedef int irq_handler_t ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int alt_speed; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct async_struct*) ;
 struct async_struct** VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,int ,size_t) ;
 int FUNC_8 (size_t,int ,int ,char*,int *) ;
 int VAR_15 ;
 int FUNC_9 (int ,int *) ;
 int VAR_16 ;
 TYPE_3__* VAR_17 ;

__attribute__((used)) static int
FUNC_10(struct async_struct *VAR_18)
{
 unsigned long VAR_19;
 int VAR_20=0;
 irq_handler_t VAR_21;
 struct serial_state *VAR_22= VAR_18->state;
 unsigned long VAR_23;

 VAR_23 = FUNC_4(VAR_9);
 if (!VAR_23)
  return -VAR_8;

 FUNC_6(VAR_19);

 if (VAR_18->flags & VAR_0) {
  FUNC_3(VAR_23);
  goto errout;
 }

 if (!VAR_22->port || !VAR_22->type) {
  if (VAR_18->tty) FUNC_9(VAR_13, &VAR_18->tty->flags);
  FUNC_3(VAR_23);
  goto errout;
 }
 if (VAR_18->xmit.buf)
  FUNC_3(VAR_23);
 else
  VAR_18->xmit.buf = (unsigned char *) VAR_23;
 if (VAR_22->irq && (!VAR_11[VAR_22->irq] ||
     !VAR_11[VAR_22->irq]->next_port)) {
  if (VAR_11[VAR_22->irq]) {
   VAR_20 = -VAR_7;
   goto errout;
  } else
   VAR_21 = VAR_15;

  VAR_20 = FUNC_8(VAR_22->irq, VAR_21, FUNC_0(VAR_18), "simserial", ((void*)0));
  if (VAR_20) {
   if (FUNC_1(VAR_6)) {
    if (VAR_18->tty)
     FUNC_9(VAR_13,
      &VAR_18->tty->flags);
    VAR_20 = 0;
   }
   goto errout;
  }
 }




 VAR_18->prev_port = ((void*)0);
 VAR_18->next_port = VAR_11[VAR_22->irq];
 if (VAR_18->next_port)
  VAR_18->next_port->prev_port = VAR_18;
 VAR_11[VAR_22->irq] = VAR_18;

 if (VAR_18->tty) FUNC_2(VAR_13, &VAR_18->tty->flags);

 VAR_18->xmit.head = VAR_18->xmit.tail = 0;
 if (VAR_18->tty) {
  if ((VAR_18->flags & VAR_2) == VAR_1)
   VAR_18->tty->alt_speed = 57600;
  if ((VAR_18->flags & VAR_2) == VAR_4)
   VAR_18->tty->alt_speed = 115200;
  if ((VAR_18->flags & VAR_2) == VAR_3)
   VAR_18->tty->alt_speed = 230400;
  if ((VAR_18->flags & VAR_2) == VAR_5)
   VAR_18->tty->alt_speed = 460800;
 }

 VAR_18->flags |= VAR_0;
 FUNC_5(VAR_19);
 return 0;

errout:
 FUNC_5(VAR_19);
 return VAR_20;
}
