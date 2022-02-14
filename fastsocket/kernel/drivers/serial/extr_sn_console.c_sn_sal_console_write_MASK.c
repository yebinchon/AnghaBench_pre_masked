
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; TYPE_2__* state; } ;
struct sn_cons_port {TYPE_4__* sc_ops; TYPE_3__ sc_port; int sc_is_asynch; } ;
struct console {int dummy; } ;
struct TYPE_8__ {int sal_puts_raw; } ;
struct TYPE_5__ {int head; int tail; } ;
struct TYPE_6__ {TYPE_1__ xmit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,unsigned int) ;
 struct sn_cons_port VAR_0 ;
 int FUNC_3 (struct sn_cons_port*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct console *VAR_1, const char *VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4 = 0;
 struct sn_cons_port *VAR_5 = &VAR_0;
 static int VAR_6 = 0;

 FUNC_0(!VAR_5->sc_is_asynch);




 if (!VAR_5->sc_port.state) {

  FUNC_2(VAR_5->sc_ops->sal_puts_raw, VAR_2, VAR_3);
  return;
 }



 if (FUNC_4(&VAR_5->sc_port.lock)) {
  int VAR_7 = VAR_5->sc_port.state->xmit.head;
  int VAR_8 = VAR_5->sc_port.state->xmit.tail;
  int VAR_9, VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < 150; FUNC_1(125), VAR_9++) {
   if (!FUNC_4(&VAR_5->sc_port.lock)
       || VAR_6) {
    if (!VAR_6) {
     FUNC_5(&VAR_5->sc_port.lock,
         VAR_4);
     VAR_10 = 1;
    }
    break;
   } else {

    if ((VAR_7 != VAR_5->sc_port.state->xmit.head)
        || (VAR_8 !=
     VAR_5->sc_port.state->xmit.tail)) {
     VAR_7 =
      VAR_5->sc_port.state->xmit.head;
     VAR_8 =
      VAR_5->sc_port.state->xmit.tail;
     VAR_9 = 0;
    }
   }
  }

  FUNC_3(VAR_5, 1);
  if (VAR_10) {
   FUNC_6(&VAR_5->sc_port.lock, VAR_4);
   VAR_6 = 0;
  } else {

   VAR_6 = 1;
  }
  FUNC_2(VAR_5->sc_ops->sal_puts_raw, VAR_2, VAR_3);
 } else {
  VAR_6 = 0;
  FUNC_5(&VAR_5->sc_port.lock, VAR_4);
  FUNC_3(VAR_5, 1);
  FUNC_6(&VAR_5->sc_port.lock, VAR_4);

  FUNC_2(VAR_5->sc_ops->sal_puts_raw, VAR_2, VAR_3);
 }
}
