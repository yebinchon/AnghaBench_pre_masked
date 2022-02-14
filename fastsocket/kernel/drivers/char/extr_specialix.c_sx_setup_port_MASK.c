
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; TYPE_1__* tty; } ;
struct specialix_port {unsigned char* xmit_buf; int lock; TYPE_2__ port; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;
struct specialix_board {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct specialix_board*,struct specialix_port*) ;

__attribute__((used)) static int FUNC_8(struct specialix_board *VAR_5,
      struct specialix_port *VAR_6)
{
 unsigned long VAR_7;

 FUNC_2();

 if (VAR_6->port.flags & VAR_0) {
  FUNC_3();
  return 0;
 }

 if (!VAR_6->xmit_buf) {

  unsigned long VAR_8;

  VAR_8 = FUNC_4(VAR_3);
  if (VAR_8 == 0L) {
   FUNC_3();
   return -VAR_1;
  }

  if (VAR_6->xmit_buf) {
   FUNC_1(VAR_8);
   FUNC_3();
   return -VAR_2;
  }
  VAR_6->xmit_buf = (unsigned char *) VAR_8;
 }

 FUNC_5(&VAR_6->lock, VAR_7);

 if (VAR_6->port.tty)
  FUNC_0(VAR_4, &VAR_6->port.tty->flags);

 VAR_6->xmit_cnt = VAR_6->xmit_head = VAR_6->xmit_tail = 0;
 FUNC_7(VAR_5, VAR_6);
 VAR_6->port.flags |= VAR_0;

 FUNC_6(&VAR_6->lock, VAR_7);


 FUNC_3();
 return 0;
}
